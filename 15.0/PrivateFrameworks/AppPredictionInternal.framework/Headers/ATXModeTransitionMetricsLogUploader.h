// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODETRANSITIONMETRICSLOGUPLOADER_H
#define ATXMODETRANSITIONMETRICSLOGUPLOADER_H

@class BMUserFocusComputedModeStream;

#import <Foundation/Foundation.h>


@interface ATXModeTransitionMetricsLogUploader : NSObject {
    BMUserFocusComputedModeStream *_modeTransitionStream;
}




-(BOOL)_previousModeEndEvent:(id)arg0 isContiguousWithModeStartEvent:(id)arg1 ;
-(id)_modeTransitionBookmark;
-(id)init;
-(id)initWithModeTransitionStream:(id)arg0 ;
-(void)_logModeTransitionMetricWithPreviousModeStart:(id)arg0 previousModeEnd:(id)arg1 currentModeStart:(id)arg2 ;
-(void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)arg0 ;


@end


#endif