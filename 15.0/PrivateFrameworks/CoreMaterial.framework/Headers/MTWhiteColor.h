// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTWHITECOLOR_H
#define MTWHITECOLOR_H



#import "MTColor.h"

@interface MTWhiteColor : MTColor

@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat white; // ivar: _white


-(id)_initWithCGColor:(struct CGColor *)arg0 ;
-(id)_initWithDescription:(id)arg0 ;
-(id)_rgbColor;
-(id)colorBlendedWithColor:(id)arg0 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(CGFloat)arg0 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)description;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(struct CAColorMatrix )sourceOverColorMatrix;
-(struct CGColor *)CGColor;


@end


#endif