// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPANORAMAARROWVIEW_H
#define CAMPANORAMAARROWVIEW_H

@class UIView, UIImageView, CAShapeLayer;



@interface CAMPanoramaArrowView : UIView {
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    *CGPath _currentTailPiecesPath;
    CGRect _arrowTailRect;
    CGFloat _currentNormalizedSpeed;
    CGFloat _tailBiggestDelta;
    CGFloat _tailBigDelta;
    CGFloat _tailMediumDelta;
    CGFloat _tailSmallDelta;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_newTailPiecesPathOfWidth:(*CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateTailWithAnimationDuration:(CGFloat)arg0 ;
-(void)animateWithNormalizedSpeed:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reset;


@end


#endif