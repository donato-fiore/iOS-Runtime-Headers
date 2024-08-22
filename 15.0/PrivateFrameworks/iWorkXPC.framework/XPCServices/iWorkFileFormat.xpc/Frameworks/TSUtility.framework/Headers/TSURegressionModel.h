// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUREGRESSIONMODEL_H
#define TSUREGRESSIONMODEL_H


#import <Foundation/Foundation.h>


@interface TSURegressionModel : NSObject {
    BOOL mModelValid;
    int mErrorType;
}




-(BOOL)isModelValid;
-(CGFloat)coefficientAtIndex:(int)arg0 ;
-(CGFloat)estimateForX:(*CGFloat)arg0 ;
-(CGFloat)rSquared;
-(id)equationString;
-(id)formattedStringWithCoefficient:(CGFloat)arg0 locale:(id)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg0 ;
-(id)initAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 ;
-(id)initNonAffineWithMappings:(int)arg0 xs:(*CGFloat)arg1 ys:(*CGFloat)arg2 xDimension:(int)arg3 desiredIntercept:(CGFloat)arg4 ;
-(int)errorType;
-(int)numCoefficients;
-(int)numSuperscriptRanges;
-(int)regressionType;
-(struct _NSRange )superscriptRangeAtIndex:(int)arg0 ;


@end


#endif