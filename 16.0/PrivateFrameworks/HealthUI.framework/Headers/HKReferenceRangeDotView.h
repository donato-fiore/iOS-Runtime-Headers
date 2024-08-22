// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKREFERENCERANGEDOTVIEW_H
#define HKREFERENCERANGEDOTVIEW_H

@class UIView, UIColor;


#import "_HKReferenceRangeDotViewDot.h"

@interface HKReferenceRangeDotView : UIView

@property (retain, nonatomic) UIColor *dotColor;
@property (weak, nonatomic) _HKReferenceRangeDotViewDot *dotView; // ivar: _dotView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )desiredDotViewFrame;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif