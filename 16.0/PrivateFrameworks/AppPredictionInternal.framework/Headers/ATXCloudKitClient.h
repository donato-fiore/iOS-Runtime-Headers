// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCLOUDKITCLIENT_H
#define ATXCLOUDKITCLIENT_H

@class CKContainer, CKDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXCloudKitClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKDatabase *database; // ivar: _database


+(id)clientWithContainerIdentifier:(id)arg0 useManatee:(BOOL)arg1 callbackQueue:(id)arg2 ;
-(id)initWithContainerIdentifier:(id)arg0 useManatee:(BOOL)arg1 callbackQueue:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 inContainer:(id)arg1 callbackQueue:(id)arg2 ;
-(void)deleteRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAccountInfoWithCompletionHandler:(id)arg0 ;
-(void)fetchCurrentDeviceIDWithCompletionHandler:(id)arg0 ;
-(void)fetchRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchRecords:(id)arg0 inZone:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveRecordZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleDatabaseOperation:(id)arg0 ;


@end


#endif