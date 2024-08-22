// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGEHANDSANALYZER_H
#define VCPIMAGEHANDSANALYZER_H

@class NSMutableArray, NSString;


#import "VCPImageAnalyzer.h"
#import "VCPCNNHandsDetector.h"
#import "VCPCNNHandKeypointsDetector.h"

@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    NSMutableArray *_results;
    NSString *_resConfig;
}




-(NSInteger)getClosestAspectRatio:(id)arg0 ;
-(id)init;
-(id)initWithKeypointsOption:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 aspectRatio:(id)arg3 modelName:(id)arg4 revision:(int)arg5 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)configForAspectRatio:(id)arg0 ;
-(int)convertSingleResultToDict:(struct CGPoint )arg0 keypointConfidence:(*float)arg1 box:(id)arg2 results:(id)arg3 ;
-(int)preferredInputFormat:(*int)arg0 height:(*int)arg1 format:(*unsigned int)arg2 ;
-(int)updateModelForAspectRatio:(id)arg0 ;


@end


#endif