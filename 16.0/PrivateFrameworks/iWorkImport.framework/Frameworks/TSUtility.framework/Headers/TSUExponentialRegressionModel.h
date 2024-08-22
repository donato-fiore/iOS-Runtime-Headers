// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUEXPONENTIALREGRESSIONMODEL_H
#define TSUEXPONENTIALREGRESSIONMODEL_H

@class NSMutableArray;


#import "TSURegressionModel.h"

@interface TSUExponentialRegressionModel : TSURegressionModel {
    *CGFloat mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    CGFloat mIntercept;
    CGFloat mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray *mSuperscriptRangesArray;
}




-(CGFloat)coefficientAtIndex:(int)arg0 ;
-(CGFloat)estimateForX:(*CGFloat)arg0 ;
-(CGFloat)rSquared;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg0 ;
-(id)initAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 ;
-(id)initNonAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 desiredIntercept:(CGFloat)arg4 ;
-(id)initWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 makeAffine:(BOOL)arg4 desiredIntercept:(CGFloat)arg5 ;
-(int)numCoefficients;
-(int)numSuperscriptRanges;
-(int)regressionType;
-(struct _NSRange )superscriptRangeAtIndex:(int)arg0 ;
-(void)dealloc;


@end


#endif