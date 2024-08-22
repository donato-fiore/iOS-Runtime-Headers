// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGEHUMANPOSEANALYZERTOPDOWN_H
#define VCPIMAGEHUMANPOSEANALYZERTOPDOWN_H

@class NSMutableArray;


#import "VCPImageAnalyzer.h"
#import "VCPCNNPersonDetector.h"
#import "VCPCNNPersonKeypointsDetector.h"

@interface VCPImageHumanPoseAnalyzerTopDown : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNPersonDetector *_personDetector;
    VCPCNNPersonKeypointsDetector *_personKeypointsDetector;
    NSMutableArray *_results;
}




-(id)initWithMaxNumRegions:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 inputConfig:(id)arg3 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)preferredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;


@end


#endif