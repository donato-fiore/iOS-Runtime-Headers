// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNPETSKEYPOINTSDETECTOR_H
#define VCPCNNPETSKEYPOINTSDETECTOR_H


#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPCNNPetsKeypointsDetector : NSObject {
    int _maxNumRegions;
    *float _inputData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
}




-(id)initWithForceCPU:(BOOL)arg0 sharedModel:(BOOL)arg1 ;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withBox:(id)arg1 keypoints:(id)arg2 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 box:(id)arg4 ;
-(int)parseHeatmap2Keypoints:(id)arg0 ;
-(void)dealloc;


@end


#endif