// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKUPLOADREQUESTMANAGER_H
#define CKUPLOADREQUESTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKUploadRequestPersistentStore.h"
#import "CKUploadRequestManagerInternals.h"
#import "CKContainer.h"
#import "CKSyncEngine.h"
#import "CKUploadRequestManagerResponseActionThrottler.h"

@interface CKUploadRequestManager : NSObject

@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property (nonatomic) CGFloat assetRepairSchedulerDefaultSuspensionTime;
@property (nonatomic) NSInteger assetRepairSchedulerRepairRetryCount;
@property (copy) id *assetRequestCallback;
@property (nonatomic) CGFloat cancelledErrorRetryTime;
@property (readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property (readonly, nonatomic) CKUploadRequestManagerInternals *internals; // ivar: _internals
@property (copy) NSString *machServiceName;
@property (nonatomic) CGFloat notificationDebouncePeriod;
@property (copy) id *packageRequestCallback;
@property (nonatomic) CGFloat recurringFetchPeriod;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (readonly, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (nonatomic) CGFloat retryableErrorMaxRetryCount;
@property (nonatomic) CGFloat retryableErrorRetryTime;
@property (nonatomic) CGFloat tryAgainLaterRetryTime;


+(BOOL)ignoreUploadRequestPushNotifications;
+(id)activityIdentifierForSchedulingRepairsInContainer:(id)arg0 ;
+(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg0 ;
-(id)initWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ;
-(id)initWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)fetchServerChanges:(id)arg0 ;
-(void)manuallyTriggerUploadRequests;
-(void)registerForItemRequests;
-(void)scheduleOrInvokeRepairsNow;
// -(void)setCallback:(id)arg0 forOverridePoint:(unk)arg1  ;
-(void)unregister;


@end


#endif