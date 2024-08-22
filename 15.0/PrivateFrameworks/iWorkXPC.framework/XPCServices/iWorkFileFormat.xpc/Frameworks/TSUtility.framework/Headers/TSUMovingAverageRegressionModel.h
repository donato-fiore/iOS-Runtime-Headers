// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUMOVINGAVERAGEREGRESSIONMODEL_H
#define TSUMOVINGAVERAGEREGRESSIONMODEL_H



#import "TSURegressionModel.h"

@interface TSUMovingAverageRegressionModel : TSURegressionModel {
    int mNumTrendPoint;
    *CGFloat mTrendXValues;
    *CGFloat mTrendYValues;
}




-(CGFloat)coefficientAtIndex:(int)arg0 ;
-(CGFloat)estimateForX:(*CGFloat)arg0 ;
-(CGFloat)rSquared;
-(CGFloat)trendXValueAtIndex:(int)arg0 ;
-(CGFloat)trendYValueAtIndex:(int)arg0 ;
-(id)equationString;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg0 ;
-(id)initAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 ;
-(id)initNonAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 desiredIntercept:(CGFloat)arg4 ;
-(id)initWithMappings:(int)arg0 xs:(id)arg1 ys:(id)arg2 numPeriod:(int)arg3 ;
-(int)numCoefficients;
-(int)numSuperscriptRanges;
-(int)numTrendPoint;
-(int)regressionType;
-(struct _NSRange )superscriptRangeAtIndex:(int)arg0 ;
-(void)dealloc;


@end


#endif