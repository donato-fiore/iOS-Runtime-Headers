// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSOLIDFILLSTYLE_H
#define HKSOLIDFILLSTYLE_H

@class UIColor;


#import "HKFillStyle.h"

@interface HKSolidFillStyle : HKFillStyle

@property (copy, nonatomic) UIColor *color; // ivar: _color


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)renderPath:(struct CGPath *)arg0 context:(struct CGContext *)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;


@end


#endif