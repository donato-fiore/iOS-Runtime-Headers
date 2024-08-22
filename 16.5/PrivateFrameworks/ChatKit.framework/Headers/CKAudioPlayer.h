// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAUDIOPLAYER_H
#define CKAUDIOPLAYER_H

@class NSString, CADisplayLink;
@protocol CKInternalAudioPlayerDelegate, CKAudioPlayerDelegate;

#import <Foundation/Foundation.h>

#import "CKInternalAudioPlayer.h"
#import "CKMediaObject.h"

@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate>



@property (retain, nonatomic) CKInternalAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAudioPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) CGFloat prevCurrentTime; // ivar: _prevCurrentTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesAVPlayer;
@property (nonatomic) float volume;


-(id)initWithFileURL:(id)arg0 ;
-(id)initWithMediaObject:(id)arg0 ;
-(id)initWithMediaObject:(id)arg0 shouldUseAVPlayer:(BOOL)arg1 ;
-(void)_handleAudioPlayerInterruption:(id)arg0 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg0 ;
-(void)internalAudioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)pause;
-(void)playAfterDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)prepareToPlay;
-(void)stop;


@end


#endif