// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNPOSEESTIMATORESPRESSO_H
#define VCPCNNPOSEESTIMATORESPRESSO_H



#import "VCPCNNPoseEstimator.h"
#import "VCPCNNModelEspresso.h"

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
}




+(id)sharedModel:(id)arg0 ;
-(*float)getInputBuffer;
-(id)init;
-(int)computePoseScore:(*float)arg0 ;
-(void)dealloc;


@end


#endif