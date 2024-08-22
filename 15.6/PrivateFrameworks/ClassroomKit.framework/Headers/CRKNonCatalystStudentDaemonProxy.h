// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKNONCATALYSTSTUDENTDAEMONPROXY_H
#define CRKNONCATALYSTSTUDENTDAEMONPROXY_H

@protocol CRKStudentDaemonXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CRKValidXPCConnectionProvider.h"

@interface CRKNonCatalystStudentDaemonProxy : NSObject <CRKStudentDaemonXPCInterface>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider


-(id)init;
-(id)initWithCallbackQueue:(id)arg0 ;
-(id)setOfActiveRestrictionUUIDs:(id)arg0 ;
-(void)_fetchAdHocConfiguration:(id)arg0 ;
-(void)_fetchConfiguration:(id)arg0 ;
-(void)_fetchConfigurationType:(id)arg0 ;
-(void)_fetchResourceFromURL:(id)arg0 completion:(id)arg1 ;
-(void)_fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg0 completion:(id)arg1 ;
-(void)_setActiveStudentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_setAdHocConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_setConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_studentDidAuthenticate:(id)arg0 completion:(id)arg1 ;
-(void)fetchAdHocConfiguration:(id)arg0 ;
-(void)fetchConfiguration:(id)arg0 ;
-(void)fetchConfigurationType:(id)arg0 ;
-(void)fetchResourceFromURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg0 completion:(id)arg1 ;
-(void)setActiveStudentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)setAdHocConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)studentDidAuthenticate:(id)arg0 completion:(id)arg1 ;


@end


#endif