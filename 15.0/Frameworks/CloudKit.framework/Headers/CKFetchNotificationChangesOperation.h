// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHNOTIFICATIONCHANGESOPERATION_H
#define CKFETCHNOTIFICATIONCHANGESOPERATION_H

@protocol CKFetchNotificationChangesOperationCallbacks;


#import "CKOperation.h"
#import "CKFetchNotificationChangesOperationInfo.h"
#import "CKServerChangeToken.h"

@interface CKFetchNotificationChangesOperation : CKOperation <CKFetchNotificationChangesOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchNotificationChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchNotificationChangesCompletionBlock; // ivar: _fetchNotificationChangesCompletionBlock
@property (nonatomic) BOOL moreComing; // ivar: _moreComing
@property (copy, nonatomic) id *notificationChangedBlock; // ivar: _notificationChangedBlock
@property (readonly, nonatomic) CKFetchNotificationChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit


+(SEL)daemonCallbackCompletionSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithPreviousServerChangeToken:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleChangedNotification:(id)arg0 ;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg0 moreComing:(BOOL)arg1 metrics:(id)arg2 error:(id)arg3 ;
-(void)performCKOperation;


@end


#endif