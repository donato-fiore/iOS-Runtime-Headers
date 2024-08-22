// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICLICKFEEDBACKGENERATORCONFIGURATION_H
#define _UICLICKFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIClickFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback; // ivar: _clickDownAudioFeedback
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback; // ivar: _clickDownFeedback
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback; // ivar: _clickUpAudioFeedback
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback; // ivar: _clickUpFeedback
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;


+(id)defaultConfiguration;
-(NSInteger)requiredSupportLevel;
-(id)feedbackKeyPaths;
-(void)setclickDownFeedback:(id)arg0 ;


@end


#endif