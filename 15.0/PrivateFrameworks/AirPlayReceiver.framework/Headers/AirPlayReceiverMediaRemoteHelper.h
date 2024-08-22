// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AIRPLAYRECEIVERMEDIAREMOTEHELPER_H
#define AIRPLAYRECEIVERMEDIAREMOTEHELPER_H

@class MRPlayerPath;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    MRPlayerPath *_playerPath;
    *void _mediaRemoteCommandHandlerToken;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    *OpaqueFigCFWeakReferenceHolder _weakDelegate;
}




+(void)becomeNowPlayingApplication;
+(void)resignAsNowPlayingApplication;
+(void)setIsNowPlayingApplication:(unsigned char)arg0 ;
-(id)initWithPlayerID:(struct __CFString *)arg0 ;
-(int)startNowPlayingSession;
-(unsigned int)handleMediaRemoteCommand:(unsigned int)arg0 withOptions:(struct __CFDictionary *)arg1 ;
-(void)associateNowPlayingSessionWithAudioSession:(unsigned int)arg0 ;
-(void)associateNowPlayingSessionWithAudioSessionInternal:(unsigned int)arg0 ;
-(void)broadcastPauseCommand;
-(void)dealloc;
-(void)handlePlaybackStateDidChange:(id)arg0 ;
-(void)makeNowPlayingPlayer;
-(void)registerCommandHandler;
-(void)removeNowPlayingArtwork;
-(void)setAPNowPlayingInfo:(struct __CFDictionary *)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setMRNowPlayingClient:(struct __CFData *)arg0 ;
-(void)setMRNowPlayingInfo:(struct __CFDictionary *)arg0 withMergePolicy:(unsigned char)arg1 ;
-(void)setMRPlaybackState:(unsigned int)arg0 ;
-(void)setMRSupportedCommands:(struct __CFArray *)arg0 ;
-(void)setMRSupportedCommandsFromSerializedArray:(struct __CFArray *)arg0 ;
-(void)stopNowPlayingSession;
-(void)unregisterCommandHandler;


@end


#endif