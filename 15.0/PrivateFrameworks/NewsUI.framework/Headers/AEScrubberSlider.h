// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AESCRUBBERSLIDER_H
#define AESCRUBBERSLIDER_H



#import "IMCustomSlider.h"

@interface AEScrubberSlider : IMCustomSlider

@property (nonatomic) UIEdgeInsets touchInsets; // ivar: _touchInsets
@property (nonatomic) CGFloat trackRectHorizontalInset; // ivar: _trackRectHorizontalInset


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;


@end


#endif