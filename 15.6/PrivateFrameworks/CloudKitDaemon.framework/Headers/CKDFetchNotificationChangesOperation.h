// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHNOTIFICATIONCHANGESOPERATION_H
#define CKDFETCHNOTIFICATIONCHANGESOPERATION_H

@class CKServerChangeToken;
@protocol CKFetchNotificationChangesOperationCallbacks;


#import "CKDOperation.h"

@interface CKDFetchNotificationChangesOperation : CKDOperation

@property (retain, nonatomic) NSObject<CKFetchNotificationChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL moreComing; // ivar: _moreComing
@property (copy, nonatomic) id *notificationChangedBlock; // ivar: _notificationChangedBlock
@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) BOOL wantsChanges; // ivar: _wantsChanges


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleFetchChangesRequestFinished:(id)arg0 ;
-(void)main;


@end


#endif