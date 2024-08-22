// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMUSICPLAYERCONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPMUSICPLAYERCONTROLLER_H

@class MPMusicPlayerController;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPMusicPlayerItem.h"

@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject {
    MPMusicPlayerController *_underlyingPlayerController;
}


@property (readonly, nonatomic) NSInteger audioFormatBadging;
@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) CGFloat currentPlaybackTime;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
@property (readonly, nonatomic) NSInteger playbackState;
@property (nonatomic) NSInteger repeatMode;
@property (nonatomic) NSInteger shuffleMode;


+(id)applicationMusicPlayer;
+(id)notificationUserInfoKeyContentItemIDs;
+(id)playbackQueueDidChangeNotificationName;
+(id)systemMusicPlayer;
-(id)_initWithUnderlyingPlayerController:(id)arg0 ;
-(id)itemsForContentItemIDs:(id)arg0 ;
-(void)_handleNowPlayingItemDidChangeNotification:(id)arg0 ;
-(void)_handlePlaybackStateDidChangeNotification:(id)arg0 ;
-(void)_handleQueueDidChangeNotification:(id)arg0 ;
-(void)appendQueueDescriptor:(id)arg0 ;
-(void)beginGeneratingPlaybackNotifications;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(void)dealloc;
-(void)endGeneratingPlaybackNotifications;
-(void)endSeeking;
-(void)pause;
-(void)performQueueTransaction:(id)arg0 ;
-(void)play;
-(void)prepareToPlayWithCompletionHandler:(id)arg0 ;
-(void)prependQueueDescriptor:(id)arg0 ;
-(void)setQueueWithDescriptor:(id)arg0 ;
-(void)skipToBeginning;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)stop;


@end


#endif