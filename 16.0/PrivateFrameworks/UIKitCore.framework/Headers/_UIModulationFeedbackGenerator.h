// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIMODULATIONFEEDBACKGENERATOR_H
#define _UIMODULATIONFEEDBACKGENERATOR_H

@class _UIFeedback<_UIFeedbackContinuousPlayable>;


#import "UIFeedbackGenerator.h"
#import "_UIModulationFeedbackGeneratorConfiguration.h"

@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator {
    CGFloat _currentValue;
}


@property (readonly, nonatomic, getter=_modulationConfiguration) _UIModulationFeedbackGeneratorConfiguration *modulationConfiguration;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // ivar: _playingContinuousFeedback


+(Class)_configurationClass;
-(id)_stats_key;
-(void)activateWithCompletionBlock:(id)arg0 ;
-(void)activateWithInitialValue:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(void)deactivate;
-(void)valueUpdated:(CGFloat)arg0 ;


@end


#endif