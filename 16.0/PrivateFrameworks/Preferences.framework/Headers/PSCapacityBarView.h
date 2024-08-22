// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSCAPACITYBARVIEW_H
#define PSCAPACITYBARVIEW_H

@class UIView, UIColor;


#import "PSCapacityBarData.h"

@interface PSCapacityBarView : UIView

@property (retain, nonatomic) UIColor *barBackgroundColor; // ivar: _barBackgroundColor
@property (retain, nonatomic) PSCapacityBarData *barData; // ivar: _barData
@property (retain, nonatomic) UIColor *barOtherDataColor; // ivar: _barOtherDataColor
@property (retain, nonatomic) UIColor *barSeparatorColor; // ivar: _barSeparatorColor


-(id)bezierPathWithLineFrom:(struct CGPoint )arg0 to:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif