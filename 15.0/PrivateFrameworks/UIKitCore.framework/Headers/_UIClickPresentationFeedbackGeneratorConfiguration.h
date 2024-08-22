// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICLICKPRESENTATIONFEEDBACKGENERATORCONFIGURATION_H
#define _UICLICKPRESENTATIONFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIClickPresentationFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;


+(id)defaultConfiguration;
-(NSInteger)requiredSupportLevel;
-(id)feedbackKeyPaths;


@end


#endif