// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOPLAYER_H
#define AVAUDIOPLAYER_H

@class NSArray, NSString, NSData, NSDictionary, NSURL;
@protocol AVAudioPlayerDelegate;

#import <Foundation/Foundation.h>

#import "AVAudioFormat.h"

@interface AVAudioPlayer : NSObject {
    id *_impl;
}


@property (copy, nonatomic) NSArray *channelAssignments;
@property (copy) NSString *currentDevice; // ivar: _currentDevice
@property CGFloat currentTime;
@property (readonly) NSData *data;
@property (weak) NSObject<AVAudioPlayerDelegate> *delegate;
@property (readonly) CGFloat deviceCurrentTime;
@property (readonly) CGFloat duration;
@property BOOL enableRate;
@property (readonly) AVAudioFormat *format;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) NSUInteger numberOfChannels;
@property NSInteger numberOfLoops;
@property float pan;
@property (readonly, getter=isPlaying) BOOL playing;
@property float rate;
@property (readonly) NSDictionary *settings;
@property (readonly) NSURL *url;
@property float volume;


-(BOOL)mixToUplink;
-(BOOL)play;
-(BOOL)playAtTime:(CGFloat)arg0 ;
-(BOOL)prepareToPlay;
-(float)averagePowerForChannel:(NSUInteger)arg0 ;
-(float)peakPowerForChannel:(NSUInteger)arg0 ;
-(id)audioSession;
-(id)impl;
-(id)init;
-(id)initBase;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 fileTypeHint:(id)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 fileTypeHint:(id)arg1 error:(*id)arg2 ;
-(void)beginInterruption;
-(void)dealloc;
-(void)decodeError:(id)arg0 ;
-(void)endInterruption;
-(void)endInterruptionWithFlags:(id)arg0 ;
-(void)finalize;
-(void)finishedPlaying:(id)arg0 ;
-(void)handleInterruption:(id)arg0 ;
-(void)pause;
-(void)privRemoveSessionListener;
-(void)setAudioSession:(id)arg0 ;
-(void)setMixToUplink:(BOOL)arg0 ;
-(void)stop;
-(void)updateMeters;


@end


#endif