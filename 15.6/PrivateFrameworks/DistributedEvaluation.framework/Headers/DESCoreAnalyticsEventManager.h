// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESCOREANALYTICSEVENTMANAGER_H
#define DESCOREANALYTICSEVENTMANAGER_H



#import "DESEventManager.h"

@interface DESCoreAnalyticsEventManager : DESEventManager



+(void)_sendCoreAnalyticsEvent:(id)arg0 eventPayloadBuilder:(id)arg1 ;
+(void)sendEventActivityShouldDeferWithActivityID:(id)arg0 connectionDuration:(float)arg1 ;
+(void)sendEventAttachmentDownloadsBundleID:(id)arg0 duration:(float)arg1 success:(BOOL)arg2 downloadedAttachmentCount:(NSUInteger)arg3 ;
+(void)sendEventDeferForBundleID:(id)arg0 deadlineStr:(id)arg1 ;
+(void)sendEventDeleteRecordForBundleID:(id)arg0 removedCount:(NSUInteger)arg1 ;
+(void)sendEventErrorForBundleID:(id)arg0 error:(id)arg1 ;
+(void)sendEventEvaluationCompletedForBundleID:(id)arg0 duration:(float)arg1 deferralTime:(float)arg2 wasDeferred:(BOOL)arg3 success:(BOOL)arg4 error:(id)arg5 ;
+(void)sendEventEvaluationForBundleID:(id)arg0 evaluationID:(id)arg1 duration:(float)arg2 deferred:(BOOL)arg3 success:(BOOL)arg4 error:(id)arg5 downloadedAttachmentCount:(NSUInteger)arg6 ;
+(void)sendEventEvaluationSessionFinishForBundleID:(id)arg0 success:(BOOL)arg1 ;
+(void)sendEventEvaluationSessionStartForBundleID:(id)arg0 ;
+(void)sendEventFetchPolicyForBundleID:(id)arg0 success:(BOOL)arg1 ;
+(void)sendEventMaintenanceWithActivityID:(id)arg0 shouldSkip:(BOOL)arg1 ;
+(void)sendEventRecipeExpiredForBundleID:(id)arg0 deferralTime:(float)arg1 ;
+(void)sendEventRecipeFetchedForBundleID:(id)arg0 evaluationID:(id)arg1 error:(id)arg2 ;
+(void)sendEventRecordsMatchedForBundleID:(id)arg0 ;
+(void)sendEventWriteRecordForBundleID:(id)arg0 ;


@end


#endif