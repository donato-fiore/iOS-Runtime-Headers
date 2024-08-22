// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMICROLOCATIONRECORDINGTRIGGER_H
#define ATXMICROLOCATIONRECORDINGTRIGGER_H

@class _PASSimpleCoalescingTimer, BMInferredModeStream, BMBiomeScheduler, BPSSink, BMUserFocusComputedModeStream, CLLocationManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXMicrolocationRecordingTrigger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescingTimerForRecordingScans;
    _PASSimpleCoalescingTimer *_coalescingTimerForHistoricalLabelDonations;
    BMInferredModeStream *_inferredModeStream;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeStreamSink;
    BMUserFocusComputedModeStream *_userFocusComputedModeStream;
    BMBiomeScheduler *_userComputedModeScheduler;
    BPSSink *_userComputedModeStreamSink;
    CLLocationManager *_locationManager;
    CGFloat _timeBuffer;
}




-(BOOL)_isInferredModeEventEligibleForHistoricalLabelDonations:(id)arg0 ;
-(BOOL)_isInferredModeEventEligibleForMicrolocationRecording:(id)arg0 ;
-(BOOL)_isUserFocusComputedModeEventEligibleForHistoricalLabelDonations:(id)arg0 ;
-(BOOL)_isUserFocusComputedModeEventEligibleForMicrolocationRecording:(id)arg0 ;
-(id)_schedulerForStreamName:(id)arg0 ;
-(id)_triggerMicroLocationRecordingScan;
-(id)_truthLabelForMode:(NSUInteger)arg0 ;
-(id)initWithInferredModeStream:(id)arg0 locationManager:(id)arg1 ;
-(void)_donateTruthLabelForTriggerUUID:(id)arg0 truthLabel:(id)arg1 ;
-(void)_subscribeToModeChanges;
-(void)_subscribeToStreamWithPublisher:(id)arg0 scheduler:(id)arg1 sink:(id)arg2 ;
-(void)_triggerHistoricalLabelDonationAtModeEndWithStoreEvent:(id)arg0 ;
-(void)_triggerMicroLocationHistoricalLabelDonationWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)_triggerMicrolocationRecordingAtModeStartWithStoreEvent:(id)arg0 ;
-(void)_userDidEnterModeOrModeWasPredicted;
-(void)_userDidExitModeOrModeWasNoLongerPredicted;
-(void)dealloc;


@end


#endif