// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBURSTACTIONCLASSIFIER_H
#define CIBURSTACTIONCLASSIFIER_H


#import <Foundation/Foundation.h>


@interface CIBurstActionClassifier : NSObject {
    BOOL hasBeenScaled;
    CGFloat testVector;
}


@property *__SVMParameters svmParameters; // ivar: _svmParameters
@property float testAverageCameraTravelDistance; // ivar: testAverageCameraTravelDistance
@property float testAverageRegistrationErrorSkewness; // ivar: testAverageRegistrationErrorSkewness
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; // ivar: testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix
@property float testInOutRatio; // ivar: testInOutRatio
@property float testMaxInnerDistance; // ivar: testMaxInnerDistance
@property float testMaxPeakRegistrationError; // ivar: testMaxPeakRegistrationError
@property float testMaxRegistrationErrorIntegral; // ivar: testMaxRegistrationErrorIntegral
@property float testMaxRegistrationErrorSkewness; // ivar: testMaxRegistrationErrorSkewness
@property float testMeanPeakRegistrationError; // ivar: testMeanPeakRegistrationError
@property float testMinRegionOfInterestSize; // ivar: testMinRegionOfInterestSize


-(BOOL)isBurstAction;
-(CGFloat)computeKernelValueWithSupportVector:(struct CIBurstSupportVector *)arg0 ;
-(float)predictResult;
-(id)init;
-(id)initWithVersion:(int)arg0 ;
-(void)scaleVector;


@end


#endif