// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPEARLPOSITIONINGGUIDEVIEW_H
#define BKUIPEARLPOSITIONINGGUIDEVIEW_H

@class UIView, CADisplayLink, NSDate, CAShapeLayer;



@interface BKUIPearlPositioningGuideView : UIView {
    CADisplayLink *_displayLink;
    BOOL _startMaskFromCenter;
}


@property (copy, nonatomic) id *animationCompletion; // ivar: _animationCompletion
@property (nonatomic) NSInteger animationCurve; // ivar: _animationCurve
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (retain, nonatomic) NSDate *animationStart; // ivar: _animationStart
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat edgeDistance; // ivar: _edgeDistance
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (nonatomic) CGFloat lastAnimationTickProgres; // ivar: _lastAnimationTickProgres
@property (nonatomic) CGFloat lineAlpha; // ivar: _lineAlpha
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly, nonatomic) CGFloat maximumMaskLayerDistanceFromCenter;
@property (readonly, nonatomic) CGFloat minimumMaskLayerDistanceFromCenter;
@property (nonatomic) CGPoint portalCenter; // ivar: _portalCenter
@property (nonatomic) CGFloat postCornerLength; // ivar: _postCornerLength
@property (nonatomic) CGFloat ringRadius; // ivar: _ringRadius
@property (retain, nonatomic) CAShapeLayer *roundedRectMaskLayer; // ivar: _roundedRectMaskLayer
@property (nonatomic) CGFloat startCornerRadius; // ivar: _startCornerRadius
@property (nonatomic) CGFloat startEdgeDistance; // ivar: _startEdgeDistance
@property (nonatomic) CGFloat startLineAlpha; // ivar: _startLineAlpha
@property (nonatomic) CGFloat startLineWidth; // ivar: _startLineWidth
@property (nonatomic) CGPoint startPortalCenter; // ivar: _startPortalCenter
@property (nonatomic) CGFloat startPostCornerLength; // ivar: _startPostCornerLength
@property (nonatomic) CGFloat targetCornerRadius; // ivar: _targetCornerRadius
@property (nonatomic) CGFloat targetEdgeDistance; // ivar: _targetEdgeDistance
@property (nonatomic) CGFloat targetLineAlpha; // ivar: _targetLineAlpha
@property (nonatomic) CGFloat targetLineWidth; // ivar: _targetLineWidth
@property (nonatomic) CGPoint targetPortalCenter; // ivar: _targetPortalCenter
@property (nonatomic) CGFloat targetPostCornerLength; // ivar: _targetPostCornerLength


-(BOOL)needsMaskedNeedsPositionStyleEnrollment;
-(CGFloat)_maxDistance;
-(CGFloat)_minDistance;
-(CGFloat)_updatedFloatWithTarget:(CGFloat)arg0 current:(CGFloat)arg1 start:(CGFloat)arg2 progress:(CGFloat)arg3 ;
-(id)_roundedRectMaskForMaskDistance:(CGFloat)arg0 portalCenter:(struct CGPoint )arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_displayTick;
-(void)_startAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startDisplay;
-(void)_stopDisplay;
-(void)_updateChildrenValuesForDisplayTickProgress:(CGFloat)arg0 ;
-(void)_updateTargetValuesForAnimation:(NSInteger)arg0 animationCurve:(NSInteger)arg1 ;
-(void)animateToBreatheOutValuesOverDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)animateToFinishedValuesOverDuration:(CGFloat)arg0 center:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)animateToOpenValuesOverDuration:(CGFloat)arg0 curve:(NSInteger)arg1 completion:(id)arg2 ;
-(void)animateToPopOutValuesOverDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)breathe;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)prepareMaskLayerForReducedMotionOpenTransition;
-(void)prepareMaskLayerForStartToOpenTransition;
-(void)resetValuesToStart;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif