// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDYNAMICCOLOR_H
#define UIDYNAMICCOLOR_H



#import "UIColor.h"

@interface UIDynamicColor : UIColor



-(BOOL)_isDeepColor;
-(BOOL)_isDynamic;
-(BOOL)getHue:(*CGFloat)arg0 saturation:(*CGFloat)arg1 brightness:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(BOOL)isPatternColor;
-(CGFloat)alphaComponent;
-(id)_backgroundColorIgnoringHighContrast;
-(id)_highContrastDynamicColor;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)_resolvedMaterialWithTraitCollection:(id)arg0 ;
-(id)colorSpaceName;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)resolvedColorWithTraitCollection:(id)arg0 ;
-(struct CGColor *)CGColor;
-(void)set;
-(void)setFill;
-(void)setStroke;


@end


#endif