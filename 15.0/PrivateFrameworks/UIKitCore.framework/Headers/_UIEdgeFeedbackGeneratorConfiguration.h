// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIEDGEFEEDBACKGENERATORCONFIGURATION_H
#define _UIEDGEFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorUserInteractionDrivenConfiguration, _UIFeedback<_UIFeedbackDiscretePlayable>, _UIFeedback<_UIFeedbackContinuousPlayable>;



@interface _UIEdgeFeedbackGeneratorConfiguration : UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingMaximumExtentFeedback; // ivar: _animatingMaximumExtentFeedback
@property (copy, nonatomic) id *animatingMaximumExtentFeedbackUpdateBlock; // ivar: _animatingMaximumExtentFeedbackUpdateBlock
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingThresholdFeedback; // ivar: _animatingThresholdFeedback
@property (copy, nonatomic) id *animatingThresholdFeedbackUpdateBlock; // ivar: _animatingThresholdFeedbackUpdateBlock
@property (nonatomic, getter=_defaultAxis, setter=_setDefaultAxis:) NSInteger defaultAxis; // ivar: _defaultAxis
@property (nonatomic) CGFloat minDistanceFromEdge; // ivar: _minDistanceFromEdge
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *userInteractingBeyondEdgeFeedback; // ivar: _userInteractingBeyondEdgeFeedback
@property (copy, nonatomic) id *userInteractingBeyondEdgeFeedbackUpdateBlock; // ivar: _userInteractingBeyondEdgeFeedbackUpdateBlock
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingReleaseFeedback; // ivar: _userInteractingReleaseFeedback
@property (copy, nonatomic) id *userInteractingReleaseFeedbackUpdateBlock; // ivar: _userInteractingReleaseFeedbackUpdateBlock
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingThresholdFeedback; // ivar: _userInteractingThresholdFeedback
@property (copy, nonatomic) id *userInteractingThresholdFeedbackUpdateBlock; // ivar: _userInteractingThresholdFeedbackUpdateBlock


+(id)_scrollConfigurationWithAxis:(NSInteger)arg0 ;
+(id)_zoomConfiguration;
+(id)defaultConfiguration;
+(id)horizontalScrollConfiguration;
+(id)sliderConfiguration;
+(id)swipePresentationConfiguration;
+(id)verticalScrollConfiguration;
-(NSInteger)requiredSupportLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedbackKeyPaths;


@end


#endif