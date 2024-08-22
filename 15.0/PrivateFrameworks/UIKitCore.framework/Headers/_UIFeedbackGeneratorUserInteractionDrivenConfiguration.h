// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKGENERATORUSERINTERACTIONDRIVENCONFIGURATION_H
#define _UIFEEDBACKGENERATORUSERINTERACTIONDRIVENCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>;



@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback; // ivar: _interactionCancelledFeedback
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback; // ivar: _interactionEndedFeedback
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback; // ivar: _interactionStartedFeedback


-(id)feedbackKeyPaths;


@end


#endif