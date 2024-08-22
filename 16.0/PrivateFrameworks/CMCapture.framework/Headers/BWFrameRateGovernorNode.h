// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFRAMERATEGOVERNORNODE_H
#define BWFRAMERATEGOVERNORNODE_H



#import "BWNode.h"
#import "BWMotionDataPreserver.h"

@interface BWFrameRateGovernorNode : BWNode {
    BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
    BOOL _dropsStartupFramesWithUnstableAE;
    BOOL _preservesMotionDataFromDroppedFrames;
    ? _lastEmittedPTS;
    ? _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    NSInteger _frameCount;
    BOOL _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}




+(void)initialize;
-(BOOL)dropsStartupFramesWithUnstableAE;
-(BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(BOOL)preservesMotionDataFromDroppedFrames;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setDropsStartupFramesWithUnstableAE:(BOOL)arg0 ;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)arg0 ;
-(void)setPreservesMotionDataFromDroppedFrames:(BOOL)arg0 ;


@end


#endif