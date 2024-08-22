// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOMETAFACEANALYZER_H
#define VCPVIDEOMETAFACEANALYZER_H

@class NSMutableDictionary, NSMutableArray;


#import "VCPVideoMetaAnalyzer.h"

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableDictionary *_activeFaces;
    CGAffineTransform _transform;
    NSMutableArray *_faceResults;
}




-(id)initWithTransform:(struct CGAffineTransform )arg0 ;
-(id)publicResults;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg0 flags:(*NSUInteger)arg1 ;
-(struct CGAffineTransform )flipTransform:(struct CGAffineTransform )arg0 ;


@end


#endif