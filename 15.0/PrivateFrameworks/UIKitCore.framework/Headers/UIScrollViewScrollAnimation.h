// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCROLLVIEWSCROLLANIMATION_H
#define UISCROLLVIEWSCROLLANIMATION_H

@class CABasicAnimation;


#import "UIAnimation.h"

@interface UIScrollViewScrollAnimation : UIAnimation {
    CGPoint _originalOffset;
    CGPoint _targetOffset;
    BOOL _targetOffsetValidAtStart;
    CGFloat _accuracy;
    BOOL _adjustsForContentOffsetDelta;
    CABasicAnimation *_customAnimation;
    BOOL _forDiscreteScroll;
    BOOL _beingReplacedForDiscreteScroll;
}




-(float)progressForFraction:(float)arg0 ;
-(void)adjustForContentOffsetDelta:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)setProgress:(float)arg0 ;


@end


#endif