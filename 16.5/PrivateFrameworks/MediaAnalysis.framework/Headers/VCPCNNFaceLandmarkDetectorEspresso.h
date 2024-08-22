// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNFACELANDMARKDETECTORESPRESSO_H
#define VCPCNNFACELANDMARKDETECTORESPRESSO_H



#import "VCPCNNFaceLandmarkDetector.h"
#import "VCPCNNModelEspresso.h"

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
}




+(id)sharedModel:(id)arg0 ;
-(*float)getInputBuffer;
-(id)init;
-(int)computeLandmarks:(*float)arg0 ;
-(void)dealloc;


@end


#endif