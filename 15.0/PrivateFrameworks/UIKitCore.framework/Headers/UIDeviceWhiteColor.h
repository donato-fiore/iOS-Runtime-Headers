// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEVICEWHITECOLOR_H
#define UIDEVICEWHITECOLOR_H



#import "UIColor.h"

@interface UIDeviceWhiteColor : UIColor {
    CGFloat whiteComponent;
    CGFloat alphaComponent;
    ? _cachedColor;
}




-(BOOL)_isDeepColor;
-(BOOL)getHue:(*CGFloat)arg0 saturation:(*CGFloat)arg1 brightness:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)alphaComponent;
-(NSUInteger)hash;
-(id)colorSpaceName;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(struct CGColor *)CGColor;
-(struct CGColor *)_createCGColorWithAlpha:(CGFloat)arg0 ;
-(void)dealloc;
-(void)set;
-(void)setFill;
-(void)setStroke;


@end


#endif