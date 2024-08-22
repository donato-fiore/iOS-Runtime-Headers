// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODETRANSITIONMETRICSLOGUPLOADER_H
#define ATXMODETRANSITIONMETRICSLOGUPLOADER_H

@class BMUserFocusComputedModeStream;

#import <Foundation/Foundation.h>


@interface ATXModeTransitionMetricsLogUploader : NSObject {
    BMUserFocusComputedModeStream *_modeTransitionStream;
}




-(BOOL)_previousModeEndEvent:(id)arg0 isContiguousWithModeStartEvent:(id)arg1 ;
-(id)_modeTransitionBookmark;
-(id)_timeBasedMergedPublisher;
-(id)init;
-(id)initWithModeTransitionStream:(id)arg0 ;
-(id)matchingInferredModeEvent:(id)arg0 inferredModeEvents:(id)arg1 ;
-(id)processInferredModeEvents:(id)arg0 beforeTimestamp:(CGFloat)arg1 ;
-(void)_logInferredModeEvent:(id)arg0 withDuration:(id)arg1 ;
-(void)_logModeTransitionMetricWithPreviousModeStart:(id)arg0 previousModeEnd:(id)arg1 currentModeStart:(id)arg2 matchingInferredModeEvent:(id)arg3 ;
-(void)_populateInferredModeFieldsOnTheModeTransitionMetric:(id)arg0 withInferredModeEvent:(id)arg1 duration:(id)arg2 ;
-(void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)arg0 ;


@end


#endif