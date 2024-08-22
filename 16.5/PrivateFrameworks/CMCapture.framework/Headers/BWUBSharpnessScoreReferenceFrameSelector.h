// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWUBSHARPNESSSCOREREFERENCEFRAMESELECTOR_H
#define BWUBSHARPNESSSCOREREFERENCEFRAMESELECTOR_H

@class CMISharpnessScore;

#import <Foundation/Foundation.h>


@interface BWUBSharpnessScoreReferenceFrameSelector : NSObject {
    CMISharpnessScore *_sharpnessScoreCalculator;
    int _candidateFrameCount;
    int _receivedCandidateFrameCount;
    *opaqueCMSampleBuffer _currentCandidateFrame;
    float _currentCandidateSharpnessScore;
    BOOL _faceScoresEnabled;
    int _maxNumberOfFaceScores;
}




+(id)externalMemoryDescriptorWithMaxInputDimensions:(struct ? )arg0 ;
-(?)addReferenceFrameCandidatereferenceFrameOut;
-(id)initWithCommandQueue:(id)arg0 externalMemoryResource:(id)arg1 candidateCount:(int)arg2 ;
-(void)dealloc;


@end


#endif