// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIENHANCEMENTCALCULATION_H
#define CIENHANCEMENTCALCULATION_H


#import <Foundation/Foundation.h>

#import "CIEnhancementHistogram.h"

@interface CIEnhancementCalculation : NSObject {
    CGFloat exposureValue;
    CGFloat maxShadow;
    CGFloat minShadow;
    CGFloat exposureValueAtZeroShadow;
    CGFloat curvePercent;
    BOOL faceInputSet;
    CGFloat percentFaceChange;
}


@property (readonly) CIEnhancementHistogram *borderHist; // ivar: borderHist
@property (readonly) CIEnhancementHistogram *lumHist; // ivar: lumHist
@property (readonly) ? originalFaceColor; // ivar: originalFaceColor
@property (readonly) CIEnhancementHistogram *rgbSumHist; // ivar: rgbSumHist
@property (readonly) CIEnhancementHistogram *satHist; // ivar: satHist


+(CGFloat)bestWarmthForI:(CGFloat)arg0 q:(CGFloat)arg1 percentChange:(*CGFloat)arg2 ;
-(NSUInteger)curveCount;
-(id)faceBalanceStrength;
-(id)faceBalanceWarmth;
-(id)init;
-(id)rawShadow;
-(id)shadow;
-(id)vibrance;
-(int)putShadowsAnalysisInto:(*CGFloat)arg0 ;
-(struct CGPoint )curvePointAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)downSampleHistogram:(id)arg0 to:(unsigned int)arg1 storeIn:(*CGFloat)arg2 ;
-(void)printAnalysis;
-(void)printHistogram:(id)arg0 downsampledTo:(unsigned int)arg1 ;
-(void)printHistogramsDownsampledTo:(unsigned int)arg0 ;
-(void)setCurvePercent:(CGFloat)arg0 ;
-(void)setExposureValue:(CGFloat)arg0 ;
-(void)setFaceColorFromChromaI:(CGFloat)arg0 andChromaQ:(CGFloat)arg1 ;
-(void)setLuminanceHistogram:(id)arg0 ;
-(void)setRGBSumHistogram:(id)arg0 ;
-(void)setSaturationHistogram:(id)arg0 ;
-(void)setShadowsMin:(CGFloat)arg0 max:(CGFloat)arg1 zeroExposure:(CGFloat)arg2 ;
-(void)setupFaceColor:(id)arg0 redIndex:(int)arg1 greenIndex:(int)arg2 blueIndex:(int)arg3 ;


@end


#endif