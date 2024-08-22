// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIVITYSUGGESTIONSFEEDBACKHISTOGRAMHELPER_H
#define ATXACTIVITYSUGGESTIONSFEEDBACKHISTOGRAMHELPER_H


#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"

@interface ATXActivitySuggestionsFeedbackHistogramHelper : NSObject {
    _ATXAppLaunchCategoricalHistogram *_feedbackCategoricalHistogram;
}




+(id)histogramBundleIdForModeWithUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originAnchorType:(id)arg3 ;
-(CGFloat)acceptancesForLockScreenSuggestionWithModeUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originAnchorType:(id)arg3 ;
-(CGFloat)rejectionsForLockScreenSuggestionWithModeUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originAnchorType:(id)arg3 ;
-(CGFloat)suggestionsGivenForLockScreenSuggestionWithModeUUID:(id)arg0 modeType:(NSUInteger)arg1 origin:(NSInteger)arg2 originAnchorType:(id)arg3 ;
-(id)init;
-(id)initWithFeedbackCategoricalHistogram:(id)arg0 ;
-(void)updateFeedbackHistogramWithEvent:(id)arg0 ;


@end


#endif