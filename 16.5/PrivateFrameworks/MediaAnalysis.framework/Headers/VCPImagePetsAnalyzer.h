// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGEPETSANALYZER_H
#define VCPIMAGEPETSANALYZER_H



#import "VCPImageAnalyzer.h"
#import "VCPCNNPetsDetector.h"

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    VCPCNNPetsDetector *_petsDetector;
}




-(id)initWithMaxNumRegions:(int)arg0 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)convertResultsToDict:(id)arg0 results:(id)arg1 ;


@end


#endif