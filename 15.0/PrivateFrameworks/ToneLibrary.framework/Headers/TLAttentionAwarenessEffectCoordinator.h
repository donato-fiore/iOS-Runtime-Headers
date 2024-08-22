// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLATTENTIONAWARENESSEFFECTCOORDINATOR_H
#define TLATTENTIONAWARENESSEFFECTCOORDINATOR_H

@class CAReporter, NSMutableSet, AVAudioSession;

#import <Foundation/Foundation.h>


@interface TLAttentionAwarenessEffectCoordinator : NSObject {
    os_unfair_lock_s _lock;
    NSInteger _preEffectIssueDetectorID;
    NSInteger _postEffectIssueDetectorID;
    CAReporter *_reporter;
    AudioTimeStamp _audioTimeStamp;
    NSMutableSet *_effectAudioTapContexts;
    ? _effectParameters;
}


@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) ? effectParameters;


-(id)audioMixForAsset:(id)arg0 ;
-(id)initWithEffectParameters:(struct ? )arg0 audioSession:(id)arg1 ;
-(void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg0 ;
-(void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg0 maximumNumberOfFrames:(unsigned int)arg1 processingFormat:(struct AudioStreamBasicDescription *)arg2 ;
-(void)_processAudioWithEffectAudioTapContext:(id)arg0 bufferList:(struct AudioBufferList *)arg1 numberOfFramesRequested:(unsigned int)arg2 numberOfFramesToProcess:(unsigned int)arg3 ;
-(void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg0 ;
-(void)dealloc;


@end


#endif