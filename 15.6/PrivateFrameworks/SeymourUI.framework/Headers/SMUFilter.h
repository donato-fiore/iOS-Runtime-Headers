// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMUFILTER_H
#define SMUFILTER_H


#import <Foundation/Foundation.h>


@interface SMUFilter : NSObject



+(id)gaussianBlurFilterWithInputRadius:(CGFloat)arg0 inputHardEdges:(id)arg1 inputNormalizeEdges:(id)arg2 inputQuality:(id)arg3 inputIntermediateBitDepth:(id)arg4 inputDither:(id)arg5 name:(id)arg6 ;
+(id)programTextBackgroundVibrantColorMatrixFilter;
+(id)programTextBlurFilter1;
+(id)programTextBlurFilter2;
+(id)programTextColorMatrixFilter;
+(void)applyProgramTextFiltersToLayer:(id)arg0 ;
+(void)applyProgramVibrantColorFilterToLayer:(id)arg0 ;


@end


#endif