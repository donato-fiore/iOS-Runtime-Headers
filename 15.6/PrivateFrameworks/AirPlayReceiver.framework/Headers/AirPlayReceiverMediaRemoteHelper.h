// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIRPLAYRECEIVERMEDIAREMOTEHELPER_H
#define AIRPLAYRECEIVERMEDIAREMOTEHELPER_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AirPlayReceiverMediaRemoteHelper : NSObject {
    *OpaqueAPReceiverSystemInfo _systemInfo;
    *AirPlayReceiverServerPrivate _server;
    NSOperationQueue *_dataTransferQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueueInternal;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    ? _state;
}




+(void)becomeNowPlayingApplication;
+(void)resignAsNowPlayingApplication;
+(void)setIsNowPlayingApplication:(unsigned char)arg0 ;
-(id)initWithPlayerID:(struct __CFString *)arg0 withSystemInfo:(struct OpaqueAPReceiverSystemInfo *)arg1 withReceiverServer:(struct AirPlayReceiverServerPrivate *)arg2 ;
-(unsigned int)handleMediaRemoteCommand:(unsigned int)arg0 withOptions:(struct __CFDictionary *)arg1 ;
-(void)associateNowPlayingSessionWithAudioSession:(unsigned int)arg0 ;
-(void)broadcastPauseCommand;
-(void)dealloc;
-(void)handleActiveSessionWillBeHijacked:(id)arg0 ;
-(void)handleLocalDeviceRoutingContextIDDidChange:(id)arg0 ;
-(void)handlePlaybackStateDidChange:(id)arg0 ;
-(void)handleSilentPrimaryStateDidChange:(id)arg0 ;
-(void)makeNowPlayingPlayer;
-(void)registerCommandHandler;
-(void)removeNowPlayingArtwork;
-(void)setAPNowPlayingInfo:(struct __CFDictionary *)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIsNowPlaying:(unsigned char)arg0 ;
-(void)setMRNowPlayingClient:(struct __CFData *)arg0 ;
-(void)setMRNowPlayingInfo:(struct __CFDictionary *)arg0 withMergePolicy:(unsigned char)arg1 ;
-(void)setMRPlaybackState:(unsigned int)arg0 ;
-(void)setMRSupportedCommands:(struct __CFArray *)arg0 ;
-(void)setMRSupportedCommandsFromSerializedArray:(struct __CFArray *)arg0 ;
-(void)startNowPlayingSession;
-(void)stopNowPlayingSession;
-(void)unregisterCommandHandler;


@end


#endif