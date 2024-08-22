// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODETRANSITIONMETRICSLOGUPLOADER_H
#define ATXMODETRANSITIONMETRICSLOGUPLOADER_H

@class BMUserFocusComputedModeStream, ATXDNDModeConfigurationClient, NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXModeTransitionMetricsLogUploader : NSObject {
    BMUserFocusComputedModeStream *_modeTransitionStream;
    ATXDNDModeConfigurationClient *_client;
    NSDictionary *_modeConfigurations;
}




-(BOOL)_previousModeEndEvent:(id)arg0 isContiguousWithModeStartEvent:(id)arg1 ;
-(id)_modeTransitionBookmark;
-(id)_timeBasedMergedPublisher;
-(id)init;
-(id)initWithModeTransitionStream:(id)arg0 ;
-(id)matchingInferredModeEvent:(id)arg0 inferredModeEvents:(id)arg1 ;
-(id)processInferredModeEvents:(id)arg0 beforeTimestamp:(CGFloat)arg1 ;
-(void)_logModeTransitionMetricWithPreviousModeStart:(id)arg0 previousModeEnd:(id)arg1 currentModeStart:(id)arg2 matchingPreviousInferredModeEvent:(id)arg3 matchingCurrentInferredModeEvent:(id)arg4 ;
-(void)_logWithPreviousInferredModeEvent:(id)arg0 currentInferredModeEvent:(id)arg1 withDuration:(id)arg2 ;
-(void)_populateInferredModeFieldsOnTheModeTransitionMetric:(id)arg0 withPreviousInferredModeEvent:(id)arg1 currentInferredModeEvent:(id)arg2 duration:(id)arg3 ;
-(void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)arg0 ;


@end


#endif