// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAUDIOCONTROLLER_H
#define IMAUDIOCONTROLLER_H

@class NSMutableArray, NSArray, NSURL, NSString;
@protocol IMAudioPlayerDelegate, IMAudioControllerDelegate;

#import <Foundation/Foundation.h>

#import "IMAudioPlayer.h"

@interface IMAudioController : NSObject <IMAudioPlayerDelegate>

 {
    NSUInteger _currentIndex;
    NSMutableArray *_audioURLs;
}


@property (retain, nonatomic) IMAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (readonly, copy, nonatomic) NSArray *audioURLs;
@property (readonly, nonatomic) CGFloat currentMediaObjectDuration;
@property (readonly, nonatomic) CGFloat currentMediaObjectTime;
@property (readonly, nonatomic) NSURL *currentURL; // ivar: _currentURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMAudioControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interrupted; // ivar: _interrupted
@property (retain, nonatomic) IMAudioPlayer *listenAudioPlayer; // ivar: _listenAudioPlayer
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) BOOL shouldDuckOthers; // ivar: _shouldDuckOthers
@property (nonatomic) BOOL shouldStopPlayingWhenSilent; // ivar: _shouldStopPlayingWhenSilent
@property (nonatomic) BOOL shouldUseAVPlayer; // ivar: _shouldUseAVPlayer
@property (nonatomic) BOOL shouldUseSpeaker; // ivar: _shouldUseSpeaker
@property (readonly) Class superclass;
@property (nonatomic) float volume;


+(Class)audioControllerClass;
+(id)audioControllerWithContentsOfURLs:(id)arg0 ;
-(NSUInteger)audioSessionControllerOptions;
-(id)currentMediaObject;
-(id)initWithContentsOfURLs:(id)arg0 ;
-(void)_notifyPlayerDidPrepareAudioURL:(id)arg0 successfully:(BOOL)arg1 ;
-(void)_playSoundWithURL:(id)arg0 completion:(id)arg1 ;
-(void)addContentsOfURL:(id)arg0 ;
-(void)addContentsOfURLs:(id)arg0 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg0 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg0 successfully:(BOOL)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)playAfterDelay:(CGFloat)arg0 ;
-(void)playListenEndSound:(id)arg0 ;
-(void)playListenSound:(id)arg0 ;
-(void)prepareToPlay;
-(void)stop;


@end


#endif