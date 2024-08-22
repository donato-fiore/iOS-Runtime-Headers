// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSULINEARREGRESSIONMODEL_H
#define TSULINEARREGRESSIONMODEL_H



#import "TSURegressionModel.h"

@interface TSULinearRegressionModel : TSURegressionModel {
    *CGFloat mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    CGFloat mIntercept;
    *CGFloat mCoefficientsStandardErrors;
    CGFloat mRSquared;
    CGFloat mStandardError;
    CGFloat mFStatistic;
    CGFloat mDegreesFreedom;
    CGFloat mRegressionSumSquares;
    CGFloat mErrorSumSquares;
}




-(CGFloat)coefficientAtIndex:(int)arg0 ;
-(CGFloat)coefficientStandardErrorAtIndex:(int)arg0 ;
-(CGFloat)degreesFreedom;
-(CGFloat)errorSumSquares;
-(CGFloat)estimateForX:(*CGFloat)arg0 ;
-(CGFloat)fStatistic;
-(CGFloat)rSquared;
-(CGFloat)regressionSumSquares;
-(CGFloat)standardError;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg0 ;
-(id)initAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 ;
-(id)initNonAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 desiredIntercept:(CGFloat)arg4 ;
-(id)initWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 makeAffine:(BOOL)arg4 desiredIntercept:(CGFloat)arg5 ;
-(int)numCoefficients;
-(int)regressionType;
-(void)dealloc;


@end


#endif