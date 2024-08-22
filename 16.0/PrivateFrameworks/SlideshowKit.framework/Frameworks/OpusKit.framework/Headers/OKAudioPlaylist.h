// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKAUDIOPLAYLIST_H
#define OKAUDIOPLAYLIST_H

@class NSArray, NSMutableDictionary, AVPlayer, NSOperationQueue, NSString;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue, OKAudioPlaylistDelegate;

#import <Foundation/Foundation.h>

#import "OKAudioDucker.h"
#import "OKPresentation.h"
#import "OKMediaItem.h"

@interface OKAudioPlaylist : NSObject <AVAudioPlayerDelegate>

 {
    NSArray *_mediaItems;
    NSMutableDictionary *_players;
    BOOL _playing;
    NSInteger _currentPlayerIndex;
    AVPlayer *_currentMedia;
    OKAudioDucker *_ducker;
    OKPresentation *_presentation;
    NSOperationQueue *_mediaItemOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKAudioPlaylistDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loops; // ivar: _loops
@property (readonly, nonatomic) OKMediaItem *playingItem;
@property (nonatomic) CGFloat playingMusicCurrentTime; // ivar: _playingMusicCurrentTime
@property (readonly, nonatomic) CGFloat playingMusicDuration; // ivar: _playingMusicDuration
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(BOOL)isPlaying;
-(id)currentMedia;
-(id)initWithAudioItems:(id)arg0 presentation:(id)arg1 ;
-(id)initWithAudioURLs:(id)arg0 presentation:(id)arg1 ;
-(void)_playMediaItem:(id)arg0 forMediaItem:(id)arg1 ;
-(void)audioFinishedPlaying:(id)arg0 ;
-(void)beginDuckingToLevel:(CGFloat)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)beginFadingWithDuration:(CGFloat)arg0 ;
-(void)dealloc;
-(void)endDucking;
-(void)endFading;
-(void)next;
-(void)play;
-(void)prev;
-(void)rewind;
-(void)setCurrentMedia:(id)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)stop;


@end


#endif