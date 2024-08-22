// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCPLAYERENGINE_H
#define APCPLAYERENGINE_H

@class AVAudioSession, AVAudioEngine, AVAudioUnit, AVAudioPlayerNode, AVAudioPCMBuffer;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AUPasscodeEncoder.h"
#import "APCPlayerEmbedInfo.h"

@interface APCPlayerEngine : NSObject {
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    AVAudioUnit *_encoderAUNode;
    AUPasscodeEncoder *_encoderAU;
    AVAudioPlayerNode *_player;
    AVAudioPCMBuffer *_assetBuffer;
    BOOL _isRunning;
    float _prePlayVolume;
    BOOL _requestingStop;
    NSObject<OS_dispatch_source> *_callbackDispatchSrc;
}


@property (copy, nonatomic) id *beginningCallback; // ivar: _beginningCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) APCPlayerEmbedInfo *embeddingInfo; // ivar: _embeddingInfo
@property (copy, nonatomic) id *stopEngineCompletion; // ivar: _stopEngineCompletion


+(id)playerWithAssetURL:(id)arg0 codecConfig:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;
-(BOOL)startEngine;
-(BOOL)startEngineAtTime:(NSUInteger)arg0 ;
-(BOOL)startEngineAtTime:(NSUInteger)arg0 withBeginning:(id)arg1 ;
// -(BOOL)startEngineAtTime:(NSUInteger)arg0 withBeginning:(id)arg1 callbackTime:(unk)arg2  ;
-(float)evaluateAsset;
-(id)createAU:(struct AudioComponentDescription )arg0 ;
-(id)initWithAssetURL:(id)arg0 codecConfig:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;
-(void)_playbackBufferLoopCompletionHdlr;
-(void)_stopAudioEngineAndSession;
-(void)createEngineAndAttachNodes;
-(void)endPasscodeEmbedding;
-(void)makeEngineConnections;
-(void)setupAudioSession;
-(void)startAPCPlayLoop;
-(void)startAPCPlayLoopAtTime:(NSUInteger)arg0 ;
-(void)stopEngine:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)stopEngineAfterMinimumLoops:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)stopEngineWithFadeOut:(float)arg0 completion:(id)arg1 ;


@end


#endif