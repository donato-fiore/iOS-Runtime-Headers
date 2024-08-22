// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTRGBCOLOR_H
#define MTRGBCOLOR_H



#import "MTColor.h"

@interface MTRGBColor : MTColor

@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, nonatomic) CGFloat green; // ivar: _green
@property (readonly, nonatomic) CGFloat red; // ivar: _red


-(id)_initWithCGColor:(struct CGColor *)arg0 ;
-(id)_initWithDescription:(id)arg0 ;
-(id)_rgbColor;
-(id)colorBlendedWithColor:(id)arg0 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(CGFloat)arg0 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)description;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(struct CAColorMatrix )sourceOverColorMatrix;
-(struct CGColor *)CGColor;


@end


#endif