// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANPLAYBACKMANAGER_H
#define ANPLAYBACKMANAGER_H

@class NSMutableOrderedSet, NSString, NSUUID, NSDictionary, NSMutableDictionary;
@protocol ANTrackPlayerDelegate, ANPlaybackManagerDataSource, ANPlaybackManagerDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ANTrackPlayer.h"

@interface ANPlaybackManager : NSObject <ANTrackPlayerDelegate>



@property (retain, nonatomic) NSMutableOrderedSet *announcementsToPlay; // ivar: _announcementsToPlay
@property (retain, nonatomic) ANTrackPlayer *audioPlayer; // ivar: _audioPlayer
@property (weak, nonatomic) NSObject<ANPlaybackManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANPlaybackManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *endpointID; // ivar: _endpointID
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastAnnoucementIndex; // ivar: _lastAnnoucementIndex
@property (readonly) NSDictionary *lastPlayedAnnouncementInfo;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (copy, nonatomic) id *playbackCompletionHandler; // ivar: _playbackCompletionHandler
@property (readonly, nonatomic) NSMutableDictionary *playbackInfo; // ivar: _playbackInfo
@property (readonly) NSUInteger playbackItemCount;
@property (readonly, nonatomic) NSUInteger playbackOptions; // ivar: _playbackOptions
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // ivar: _playbackQueue
@property (readonly) NSUInteger playbackState;
@property (readonly) Class superclass;


+(id)managerWithEndpointID:(id)arg0 ;
-(BOOL)_playAnnouncements:(id)arg0 announceIDToStart:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(BOOL)_playAnnouncementsWithIDs:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)_startPlayingAnnouncements;
-(id)_announcementsForPlaybackOptions:(NSUInteger)arg0 fromAnnouncements:(id)arg1 ;
-(id)_createTrackPlayerWithAnnouncement:(id)arg0 options:(NSUInteger)arg1 anchorPoint:(*NSUInteger)arg2 ;
-(id)_nextAnnouncementToPlay;
-(id)initWithEndpointID:(id)arg0 ;
-(void)_handlePlaybackEndedForPlayer:(id)arg0 withError:(id)arg1 ;
-(void)_nextAnnouncementWithCompletionHandler:(id)arg0 ;
-(void)_previousAnnouncementWithCompletionHandler:(id)arg0 ;
-(void)_stopAudioPlayer;
-(void)_stopPlayingAnnouncementsWithCompletionHandler:(id)arg0 ;
-(void)_updatePlaybackInfoForAnnouncementID:(id)arg0 options:(NSUInteger)arg1 player:(id)arg2 ;
-(void)performPlaybackCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)trackPlayer:(id)arg0 didFinishPlayingTrackType:(NSInteger)arg1 announcementID:(id)arg2 error:(id)arg3 ;
-(void)trackPlayer:(id)arg0 didUpdatePlaybackState:(NSUInteger)arg1 announcementID:(id)arg2 ;
-(void)updatePlaybackForAnnouncementID:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif