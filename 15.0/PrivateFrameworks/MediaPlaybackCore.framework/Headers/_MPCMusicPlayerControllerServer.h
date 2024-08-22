// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCMUSICPLAYERCONTROLLERSERVER_H
#define _MPCMUSICPLAYERCONTROLLERSERVER_H

@class MPMusicPlayerQueueDescriptor, NSMutableArray, NSString, NSXPCListenerEndpoint, NSXPCListener, MPMusicPlayerControllerSystemCache;
@protocol MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"

@interface _MPCMusicPlayerControllerServer : NSObject <MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving>

 {
    MPMusicPlayerQueueDescriptor *_queueDescriptor;
    MPMusicPlayerQueueDescriptor *_preparingDescriptor;
    id *_prepareCompletionHandler;
    BOOL _skipWaitingForLikelyToKeepUp;
    BOOL _resumed;
}


@property (readonly, nonatomic) NSMutableArray *activeConnections; // ivar: _activeConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPMusicPlayerControllerSystemCache *systemCache; // ivar: _systemCache


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_nowPlayingWithItem:(id)arg0 ;
-(id)_timeSnapshotWithElapsedTime:(CGFloat)arg0 rate:(float)arg1 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_addContentItemIDsToUpdateRecord:(id)arg0 ;
-(void)_applyServerStateUpdateRecord:(id)arg0 ;
-(void)_handleCommandHandlersRegistered:(id)arg0 ;
-(void)_registerForCommandHandlersRegisteredNotification;
-(void)appendDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)beginPlaybackAtHostTime:(id)arg0 ;
-(void)beginSeekWithDirection:(NSInteger)arg0 ;
-(void)endSeek;
-(void)engine:(id)arg0 didAchieveLikelyToKeepUpWithItem:(id)arg1 ;
-(void)engine:(id)arg0 didChangeItemElapsedTime:(CGFloat)arg1 rate:(float)arg2 ;
-(void)engine:(id)arg0 didChangeQueueWithReason:(id)arg1 ;
-(void)engine:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)engine:(id)arg0 didChangeToItem:(id)arg1 ;
-(void)engine:(id)arg0 didChangeToState:(NSUInteger)arg1 ;
-(void)engine:(id)arg0 didEndPlaybackOfItem:(id)arg1 ;
-(void)engine:(id)arg0 didReachEndOfQueueWithReason:(id)arg1 ;
-(void)engine:(id)arg0 didResetQueueWithPlaybackContext:(id)arg1 error:(id)arg2 ;
-(void)getDescriptorWithReply:(id)arg0 ;
-(void)getImageForArtworkIdentifier:(id)arg0 itemIdentifier:(id)arg1 atSize:(struct CGSize )arg2 reply:(id)arg3 ;
-(void)getNowPlayingAtIndex:(NSInteger)arg0 reply:(id)arg1 ;
-(void)getNowPlayingWithReply:(id)arg0 ;
-(void)getNowPlayingsForContentItemIDs:(id)arg0 reply:(id)arg1 ;
-(void)getRepeatModeWithReply:(id)arg0 ;
-(void)getShuffleModeWithReply:(id)arg0 ;
-(void)getTimeSnapshotWithReply:(id)arg0 ;
-(void)getUserQueueModificationsDisabledWithReply:(id)arg0 ;
-(void)pauseWithFadeDuration:(NSInteger)arg0 ;
-(void)performQueueModifications:(id)arg0 completion:(id)arg1 ;
-(void)play;
-(void)prependDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)prerollWithCompletion:(id)arg0 ;
-(void)reshuffle;
-(void)resumeIfNeeded;
-(void)setDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)setDisableAutomaticCanBeNowPlaying:(BOOL)arg0 ;
-(void)setElapsedTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setNowPlayingItem:(id)arg0 itemIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setPlaybackRate:(float)arg0 completion:(id)arg1 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setRepeatMode:(NSInteger)arg0 ;
-(void)setShuffleMode:(NSInteger)arg0 ;
-(void)setUserQueueModificationsDisabled:(BOOL)arg0 ;
-(void)skipWithBehavior:(NSInteger)arg0 ;
-(void)startServer;
-(void)stop;
-(void)stopServer;


@end


#endif