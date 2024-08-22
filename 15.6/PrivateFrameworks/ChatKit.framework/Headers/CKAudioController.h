// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAUDIOCONTROLLER_H
#define CKAUDIOCONTROLLER_H

@class NSMutableArray, NSString, NSArray;
@protocol CKAudioPlayerDelegate, CKAudioControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKAudioPlayer.h"
#import "CKMediaObject.h"

@interface CKAudioController : NSObject <CKAudioPlayerDelegate>

 {
    NSUInteger _currentIndex;
    CKAudioPlayer *_listenAudioPlayer;
}


@property (retain, nonatomic, setter=_setMediaObjects:) NSMutableArray *_mediaObjects; // ivar: _mediaObjects
@property (retain, nonatomic) CKAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (readonly, nonatomic) CKMediaObject *currentMediaObject;
@property (readonly, nonatomic) CGFloat currentMediaObjectDuration;
@property (readonly, nonatomic) CGFloat currentMediaObjectTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAudioControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (readonly, nonatomic) NSArray *mediaObjects;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) BOOL shouldDuckOthers; // ivar: _shouldDuckOthers
@property (nonatomic) BOOL shouldStopPlayingWhenSilent; // ivar: _shouldStopPlayingWhenSilent
@property (nonatomic) BOOL shouldUseAVPlayer; // ivar: _shouldUseAVPlayer
@property (nonatomic) BOOL shouldUseSpeaker; // ivar: _shouldUseSpeaker
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(BOOL)__im_ff_isBackgroundAudioEnabled;
-(BOOL)__im_ff_isNewAudioMessageFlowEnabled;
-(NSUInteger)audioSessionControllerOptions;
-(id)initWithMediaObjects:(id)arg0 ;
-(void)_notifyPlayerDidPrepareMediaObject:(id)arg0 successfully:(BOOL)arg1 ;
-(void)addMediaObject:(id)arg0 ;
-(void)addMediaObjects:(id)arg0 ;
-(void)applicationWillResignActive;
-(void)audioPlayerCurrentTimeDidChange:(id)arg0 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg0 successfully:(BOOL)arg1 ;
-(void)audioSessionInterruption:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)playAfterDelay:(CGFloat)arg0 ;
-(void)playListenEndSound:(id)arg0 ;
-(void)playListenSound:(id)arg0 ;
-(void)prepareToPlay;
-(void)setCurrentTime:(CGFloat)arg0 ;
-(void)stop;


@end


#endif