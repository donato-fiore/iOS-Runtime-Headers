// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVHAPTICSEQUENCE_H
#define AVHAPTICSEQUENCE_H


#import <Foundation/Foundation.h>

#import "AVHapticPlayer.h"

@interface AVHapticSequence : NSObject {
    NSUInteger _eventBehavior;
    BOOL _loopIsEnabled;
    float _loopLength;
    float _playbackRate;
}


@property NSUInteger activeChannel; // ivar: _activeChannel
@property (readonly) NSUInteger channelCount; // ivar: _channelCount
@property (copy) id *completionHandler;
@property CGFloat duration; // ivar: _duration
@property NSUInteger eventBehavior;
@property CGFloat lastStartTime; // ivar: _lastStartTime
@property BOOL loopingEnabled;
@property float playbackRate;
@property (weak) AVHapticPlayer *player; // ivar: _player
@property NSUInteger seqID; // ivar: _seqID


-(BOOL)activateChannelByIndex:(NSUInteger)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)cancelAndReturnError:(*id)arg0 ;
-(BOOL)earlyUnduckAudioAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)pauseAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)playAtTime:(CGFloat)arg0 offset:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)prepareToPlayAndReturnError:(*id)arg0 ;
-(BOOL)resetAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)resumeAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)seekToTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setLoopLength:(float)arg0 error:(*id)arg1 ;
-(BOOL)setParameter:(NSUInteger)arg0 value:(float)arg1 channel:(NSUInteger)arg2 atTime:(CGFloat)arg3 error:(*id)arg4 ;
-(BOOL)setVolume:(float)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)stopAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(NSUInteger)getChannelCount;
-(id)init;
-(id)initWithData:(id)arg0 player:(id)arg1 error:(*id)arg2 ;
-(id)initWithDictionary:(id)arg0 player:(id)arg1 error:(*id)arg2 ;
-(id)initWithEvents:(id)arg0 player:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif