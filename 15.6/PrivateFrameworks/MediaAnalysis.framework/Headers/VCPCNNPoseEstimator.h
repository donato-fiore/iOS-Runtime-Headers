// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNPOSEESTIMATOR_H
#define VCPCNNPOSEESTIMATOR_H


#import <Foundation/Foundation.h>


@interface VCPCNNPoseEstimator : NSObject



+(id)estimator;
-(*float)getInputBuffer;
-(int)computePoseScore:(*float)arg0 ;
-(int)detectPoseForFace:(struct CGRect )arg0 inBuffer:(struct __CVBuffer *)arg1 yaw:(*NSInteger)arg2 ;


@end


#endif