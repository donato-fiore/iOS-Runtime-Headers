// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPCLIPSFEEDBACK_H
#define ATXAPPCLIPSFEEDBACK_H


#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}




-(BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)arg0 ;
-(BOOL)shouldShowAppClipWithHeroAppPrediction:(id)arg0 ;
-(BOOL)shouldShowAppClips;
-(CGFloat)_confirmsForAppClipWithHeroAppPrediction:(id)arg0 ;
-(CGFloat)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)arg0 ;
-(CGFloat)_engagementForAppClipWithHeroAppPrediction:(id)arg0 ;
-(CGFloat)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)arg0 ;
-(CGFloat)_overallAppClipsengagement;
-(CGFloat)_overallConfirms;
-(CGFloat)_overallConfirmsNoDecay;
-(CGFloat)_overallRejects;
-(CGFloat)_overallRejectsNoDecay;
-(CGFloat)_rejectsForAppClipWithHeroAppPrediction:(id)arg0 ;
-(CGFloat)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)arg0 ;
-(CGFloat)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg0 ;
-(id)init;
-(id)initWithAppClipsHistogram:(id)arg0 appClipsHistogramNoDecay:(id)arg1 ;
-(void)addConfirmForAppClipWithHeroAppPrediction:(id)arg0 weight:(float)arg1 ;
-(void)addRejectForAppClipWithHeroAppPrediction:(id)arg0 weight:(float)arg1 ;


@end


#endif