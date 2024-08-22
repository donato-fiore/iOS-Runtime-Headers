// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGEFACEQUALITYANALYZER_H
#define VCPIMAGEFACEQUALITYANALYZER_H

@class NSMutableArray;


#import "VCPImageAnalyzer.h"

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer

@property (retain) NSMutableArray *faceQualityScores; // ivar: _faceQualityScores


-(int)analyzeDetectedFaces:(struct __CVBuffer *)arg0 faceResults:(id)arg1 cancel:(id)arg2 ;
-(void)dealloc;


@end


#endif