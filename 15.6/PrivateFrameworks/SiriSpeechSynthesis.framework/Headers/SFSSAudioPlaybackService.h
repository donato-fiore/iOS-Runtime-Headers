// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSAUDIOPLAYBACKSERVICE_H
#define SFSSAUDIOPLAYBACKSERVICE_H

@class NSCondition, NSString;

#import <Foundation/Foundation.h>


@interface SFSSAudioPlaybackService : NSObject {
    CGFloat _enqueuedSampleCount;
}


@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) *OpaqueAudioQueue audioQueue; // ivar: _audioQueue
@property (retain, nonatomic) NSCondition *audioQueueStateCondition; // ivar: _audioQueueStateCondition
@property (readonly, nonatomic) BOOL discontinuedDuringPlayback; // ivar: _discontinuedDuringPlayback
@property (readonly, nonatomic) NSString *outputRoute; // ivar: _outputRoute
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID


-(BOOL)isAudioQueueRunning;
-(id)enqueue:(id)arg0 packetCount:(NSInteger)arg1 packetDescriptions:(id)arg2 ;
-(id)initWithAudioSessionID:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 ;
-(id)start;
-(void)flushAndStop;
-(void)handleMediaServerReset;
-(void)pause;
-(void)reset;
-(void)signalQueueRunningStateChange;
-(void)stop;
-(void)waitForAudioQueueStop;
-(void)waitForQueueRunningStateChange;


@end


#endif