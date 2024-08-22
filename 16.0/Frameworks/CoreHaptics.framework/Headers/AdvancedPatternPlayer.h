// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADVANCEDPATTERNPLAYER_H
#define ADVANCEDPATTERNPLAYER_H

@class NSString;
@protocol CHHapticAdvancedPatternPlayerExtended;


#import "PatternPlayerBase.h"
#import "AVHapticSequence.h"

@interface AdvancedPatternPlayer : PatternPlayerBase <CHHapticAdvancedPatternPlayerExtended>

 {
    AVHapticSequence *_sequence;
    CGFloat _loopEnd;
    int _state;
    id *_completionHandler;
}


@property (copy) id *completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isMuted;
@property BOOL loopEnabled;
@property CGFloat loopEnd;
@property (readonly) BOOL paused;
@property float playbackRate;
@property (readonly) BOOL running;
@property CGFloat seekOffset; // ivar: _seekOffset
@property (readonly) Class superclass;


-(BOOL)activateChannelByIndex:(NSUInteger)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)cancelAndReturnError:(*id)arg0 ;
-(BOOL)doResumeAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)doStartFromPausedAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)doStartFromStoppedAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)earlyUnduckAudioAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)pauseAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)resumeAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)scheduleParameterCurve:(id)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)seekToOffset:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)sendParameters:(id)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)setVolume:(float)arg0 atTime:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)startAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)stopAtTime:(CGFloat)arg0 error:(*id)arg1 ;
-(CGFloat)patternDuration;
-(id)init;
-(id)initWithPattern:(id)arg0 engine:(id)arg1 privileged:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithRingtoneData:(id)arg0 engine:(id)arg1 error:(*id)arg2 ;
-(id)initWithVibePatternDictionary:(id)arg0 engine:(id)arg1 error:(*id)arg2 ;
-(void)clearExternalResources:(id)arg0 ;
-(void)dealloc;
-(void)doSetMute:(BOOL)arg0 ;
-(void)finishInit;
-(void)resetState;


@end


#endif