// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNPOSEESTIMATORMPS_H
#define VCPCNNPOSEESTIMATORMPS_H



#import "VCPCNNPoseEstimator.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}




-(*float)getInputBuffer;
-(id)init;
-(int)computePoseScore:(*float)arg0 ;


@end


#endif