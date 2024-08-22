// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEFACEEXPRESSIONANALYZER_H
#define VCPIMAGEFACEEXPRESSIONANALYZER_H

@class NSArray;


#import "VCPImageAnalyzer.h"

@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer {
    NSArray *_faces;
}




-(id)initWithFaceResults:(id)arg0 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif