// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWPROGRESSVIEW_H
#define WFWORKFLOWPROGRESSVIEW_H

@class UIControl, CAShapeLayer, UIImageView, UIImpactFeedbackGenerator, UIColor, CALayer;



@interface WFWorkflowProgressView : UIControl

@property (readonly, nonatomic) CAShapeLayer *bubbleGlyphLayer; // ivar: _bubbleGlyphLayer
@property (readonly, nonatomic) UIImageView *completedContainerView; // ivar: _completedContainerView
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) CGFloat fractionCompleted; // ivar: _fractionCompleted
@property (readonly, nonatomic) CAShapeLayer *partialRingLayer; // ivar: _partialRingLayer
@property (nonatomic) CGFloat progressStrokeWidth; // ivar: _progressStrokeWidth
@property (retain, nonatomic) UIColor *resolvedTintColor; // ivar: _resolvedTintColor
@property (readonly, nonatomic) CALayer *runningContainerLayer; // ivar: _runningContainerLayer
@property (readonly, nonatomic) CAShapeLayer *stopGlyphLayer; // ivar: _stopGlyphLayer
@property (nonatomic) CGFloat stopSize; // ivar: _stopSize
@property (readonly, nonatomic) CAShapeLayer *totalRingLayer; // ivar: _totalRingLayer
@property (readonly, nonatomic) CAShapeLayer *waitingContainerLayer; // ivar: _waitingContainerLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)beginBubbleGlyphAnimation;
-(void)layoutSubviews;
-(void)popCompletedCheckmark;
-(void)popCompletedCheckmarkWithHaptic:(BOOL)arg0 ;
-(void)stopBubbleGlyphAnimation;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionCompletedLayerToVisible:(BOOL)arg0 animated:(BOOL)arg1 haptic:(BOOL)arg2 ;
-(void)transitionRunningLayerToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)transitionToState:(NSInteger)arg0 ;
-(void)transitionToState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)transitionWaitingLayerToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updatePaths;


@end


#endif