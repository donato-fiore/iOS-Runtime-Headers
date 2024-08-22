// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPSMANAGER_H
#define NPSMANAGER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPSManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)supportsWatch;
+(void)initialize;
-(id)connection;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)synchronizeNanoDomain:(id)arg0 keys:(id)arg1 ;
-(void)synchronizeNanoDomain:(id)arg0 keys:(id)arg1 cloudEnabled:(BOOL)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 ;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 cloudEnabled:(BOOL)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 container:(id)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 container:(id)arg2 appGroupContainer:(id)arg3 ;
-(void)synchronizeUserDefaultsDomain:(id)arg0 keys:(id)arg1 container:(id)arg2 appGroupContainer:(id)arg3 cloudEnabled:(BOOL)arg4 ;
-(void)unsafe_invalidate;


@end


#endif