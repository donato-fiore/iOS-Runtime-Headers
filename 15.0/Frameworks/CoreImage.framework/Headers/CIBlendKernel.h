// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIBLENDKERNEL_H
#define CIBLENDKERNEL_H



#import "CIColorKernel.h"

@interface CIBlendKernel : CIColorKernel



+(id)cachedKernelWithString:(id)arg0 extentType:(int)arg1 ;
+(id)clear;
+(id)color;
+(id)colorBurn;
+(id)colorDodge;
+(id)componentAdd;
+(id)componentMax;
+(id)componentMin;
+(id)componentMultiply;
+(id)darken;
+(id)darkerColor;
+(id)destination;
+(id)destinationAtop;
+(id)destinationIn;
+(id)destinationOut;
+(id)destinationOver;
+(id)difference;
+(id)divide;
+(id)exclusion;
+(id)exclusiveOr;
+(id)hardLight;
+(id)hardMix;
+(id)hue;
+(id)kernelWithString:(id)arg0 ;
+(id)kernelWithString:(id)arg0 extentType:(int)arg1 ;
+(id)lighten;
+(id)lighterColor;
+(id)linearBurn;
+(id)linearDodge;
+(id)linearLight;
+(id)luminosity;
+(id)multiply;
+(id)overlay;
+(id)pinLight;
+(id)plusDarker;
+(id)plusLighter;
+(id)saturation;
+(id)screen;
+(id)softLight;
+(id)source;
+(id)sourceAtop;
+(id)sourceIn;
+(id)sourceOut;
+(id)sourceOver;
+(id)subtract;
+(id)vividLight;
-(BOOL)getBlendBehaviorBit:(int)arg0 ;
-(BOOL)isBackIfForeIsClear;
-(BOOL)isClearIfBackIsClear;
-(BOOL)isClearIfForeIsClear;
-(BOOL)isForeIfBackIsClear;
-(id)applyWithForeground:(id)arg0 background:(id)arg1 ;
-(id)applyWithForeground:(id)arg0 background:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 extentType:(int)arg1 ;
-(void)setBlendBehaviorBit:(int)arg0 value:(BOOL)arg1 ;
-(void)setIsBackIfForeIsClear:(BOOL)arg0 ;
-(void)setIsClearIfBackIsClear:(BOOL)arg0 ;
-(void)setIsClearIfForeIsClear:(BOOL)arg0 ;
-(void)setIsForeIfBackIsClear:(BOOL)arg0 ;


@end


#endif