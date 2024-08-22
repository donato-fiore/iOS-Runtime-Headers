// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITINTCOLOR_H
#define UITINTCOLOR_H



#import "UIDynamicColor.h"

@interface UITintColor : UIDynamicColor



-(BOOL)_isDeepColor;
-(BOOL)_isDynamicTintColor;
-(BOOL)getHue:(*CGFloat)arg0 saturation:(*CGFloat)arg1 brightness:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPatternColor;
-(CGFloat)alphaComponent;
-(NSUInteger)hash;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)colorSpaceName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct CGColor *)CGColor;
-(void)set;
-(void)setFill;
-(void)setStroke;


@end


#endif