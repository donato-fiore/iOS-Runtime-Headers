// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASCLOUDKITCLIENT_H
#define SASCLOUDKITCLIENT_H

@class CKContainer, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SASCloudKitClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // ivar: _xpcActivity


-(id)initWithContainerIdentifier:(id)arg0 callbackQueue:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 inContainer:(id)arg1 callbackQueue:(id)arg2 ;
-(void)_scheduleDatabaseOperation:(id)arg0 ;
-(void)fetchCurrentDeviceIDWithCompletion:(id)arg0 ;
-(void)fetchRecordZone:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)fetchRecords:(id)arg0 inZone:(id)arg1 group:(id)arg2 completion:(id)arg3 ;
-(void)saveRecord:(id)arg0 group:(id)arg1 completion:(id)arg2 ;
-(void)saveRecordZone:(id)arg0 group:(id)arg1 completion:(id)arg2 ;


@end


#endif