// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIJINDOPOSITIONINGGUIDEVIEW_H
#define BKUIJINDOPOSITIONINGGUIDEVIEW_H



#import "BKUIPearlPositioningGuideView.h"

@interface BKUIJindoPositioningGuideView : BKUIPearlPositioningGuideView

@property (nonatomic) CGFloat lineYpositionDifference; // ivar: _lineYpositionDifference
@property (nonatomic) CGFloat startLineYposition; // ivar: _startLineYposition
@property (nonatomic) CGFloat targetLineYposition; // ivar: _targetLineYposition


-(BOOL)needsMaskedNeedsPositionStyleEnrollment;
-(CGFloat)_edgeDistanceHeightDifference;
-(CGFloat)_squareLayoutOpenValue;
-(id)_roundedRectMaskForMaskDistance:(CGFloat)arg0 portalCenter:(struct CGPoint )arg1 cornerRadius:(CGFloat)arg2 ;
-(void)_startAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updateChildrenValuesForDisplayTickProgress:(CGFloat)arg0 ;
-(void)_updateTargetValuesForAnimation:(NSInteger)arg0 animationCurve:(NSInteger)arg1 ;
-(void)breathe;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)resetValuesToStart;


@end


#endif