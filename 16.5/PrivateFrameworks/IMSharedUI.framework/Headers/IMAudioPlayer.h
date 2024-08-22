// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAUDIOPLAYER_H
#define IMAUDIOPLAYER_H

@class NSURL, NSString;
@protocol IMInternalAVAudioPlayerDelegate, IMAudioPlayerDelegate;

#import <Foundation/Foundation.h>

#import "IMInternalAVAudioPlayer.h"
#import "IMDisplayLink.h"

@interface IMAudioPlayer : NSObject <IMInternalAVAudioPlayerDelegate>



@property (retain, nonatomic) IMInternalAVAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (copy, nonatomic) NSURL *audioURL; // ivar: _audioURL
@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMAudioPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IMDisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) CGFloat prevCurrentTime; // ivar: _prevCurrentTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesAVPlayer;
@property (nonatomic) float volume;


+(id)audioPlayerWithContentsOfURL:(id)arg0 ;
+(id)audioPlayerWithContentsOfURL:(id)arg0 shouldUseAVPlayer:(BOOL)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 shouldUseAVPlayer:(BOOL)arg1 ;
-(void)dealloc;
-(void)internalAVAudioPlayerDidPrepareAudioForPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)internalAudioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)pause;
-(void)playAfterDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)prepareToPlay;
-(void)startTimer;
-(void)stop;
-(void)stopTimer;
-(void)timerDidExpire:(id)arg0 ;


@end


#endif