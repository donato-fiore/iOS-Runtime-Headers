// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNFACELANDMARKDETECTORMPS_H
#define VCPCNNFACELANDMARKDETECTORMPS_H



#import "VCPCNNFaceLandmarkDetector.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}




-(*float)getInputBuffer;
-(id)init;
-(int)computeLandmarks:(*float)arg0 ;


@end


#endif