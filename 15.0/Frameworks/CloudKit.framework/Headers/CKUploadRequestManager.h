// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUPLOADREQUESTMANAGER_H
#define CKUPLOADREQUESTMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKUploadRequestPersistentStore.h"
#import "CKUploadRequestManagerInternals.h"
#import "CKContainer.h"
#import "CKSyncEngine.h"

@interface CKUploadRequestManager : NSObject

@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property (copy) id *assetRequestCallback;
@property (readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property (readonly, nonatomic) CKUploadRequestManagerInternals *internals; // ivar: _internals
@property (copy) NSString *machServiceName;
@property (copy) id *packageRequestCallback;
@property (readonly, nonatomic) CKContainer *repairContainer;
@property (readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;


+(CGFloat)cancelledErrorRetryTime;
+(CGFloat)recurringFetchPeriod;
+(CGFloat)retryableErrorMaxRetryCount;
+(CGFloat)retryableErrorRetryTime;
+(CGFloat)tryAgainLaterRetryTime;
+(id)activityIdentifierForSchedulingRepairsInContainer:(id)arg0 ;
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