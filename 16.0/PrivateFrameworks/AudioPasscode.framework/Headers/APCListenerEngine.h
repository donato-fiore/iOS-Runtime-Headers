// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APCLISTENERENGINE_H
#define APCLISTENERENGINE_H

@class AVAudioSession, AVAudioEngine, AVAudioUnit;

#import <Foundation/Foundation.h>

#import "AUPasscodeDecoder.h"
#import "AUPasscodeCodecConfiguration.h"

@interface APCListenerEngine : NSObject {
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    AVAudioUnit *_decoderAUNode;
    AUPasscodeDecoder *_decoderAU;
    AUPasscodeCodecConfiguration *_codecConfig;
}




// +(id)listenerWithCodecConfig:(id)arg0 queue:(id)arg1 dataReceivedHandler:(id)arg2 error:(unk)arg3  ;
// +(id)listenerWithCodecConfig:(id)arg0 queue:(id)arg1 dataReceivedHandler:(id)arg2 resultData:(unk)arg3 error:(id)arg4  ;
-(BOOL)validateInputNodeWithFormat:(id)arg0 ;
-(id)createAU:(struct AudioComponentDescription )arg0 ;
// -(id)initWithCodecConfig:(id)arg0 queue:(id)arg1 dataReceivedHandler:(id)arg2 resultData:(unk)arg3 error:(id)arg4  ;
-(void)createEngineAndAttachNodes;
-(void)makeEngineConnectionsWithError:(*id)arg0 ;
-(void)setupAudioSession;
-(void)startEngineWithError:(*id)arg0 ;
-(void)stopEngine;


@end


#endif