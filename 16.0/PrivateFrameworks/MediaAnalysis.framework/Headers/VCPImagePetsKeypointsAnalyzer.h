// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEPETSKEYPOINTSANALYZER_H
#define VCPIMAGEPETSKEYPOINTSANALYZER_H

@class NSMutableArray;


#import "VCPImageAnalyzer.h"
#import "VCPCNNPetsDetector.h"
#import "VCPCNNPetsKeypointsDetector.h"

@interface VCPImagePetsKeypointsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNPetsDetector *_petsDetector;
    VCPCNNPetsKeypointsDetector *_petsKeypointsDetector;
    NSMutableArray *_results;
}




-(id)initWithMaxNumRegions:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 petsDetections:(id)arg2 results:(*id)arg3 cancel:(id)arg4 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif