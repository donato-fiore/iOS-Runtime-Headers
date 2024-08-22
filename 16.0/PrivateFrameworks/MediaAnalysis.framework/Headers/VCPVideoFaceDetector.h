// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOFACEDETECTOR_H
#define VCPVIDEOFACEDETECTOR_H

@class NSMutableDictionary, NSDictionary;


#import "VCPVideoAnalyzer.h"

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {
    int _angle;
    ? _timeLastDetection;
    NSMutableDictionary *_activeFaces;
    NSDictionary *_results;
}




+(id)faceDetectorWithTransform:(struct CGAffineTransform )arg0 withExistingFaceprints:(id)arg1 frameStats:(id)arg2 tracking:(BOOL)arg3 faceDominated:(BOOL)arg4 cancel:(id)arg5 ;
-(id)faceRanges;
-(id)results;


@end


#endif