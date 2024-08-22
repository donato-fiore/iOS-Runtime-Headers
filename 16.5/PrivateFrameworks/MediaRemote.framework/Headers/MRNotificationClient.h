// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOTIFICATIONCLIENT_H
#define MRNOTIFICATIONCLIENT_H

@class NSOrderedSet, NSMutableArray;
@protocol MRNowPlayingClientState, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRNotificationClient : NSObject <MRNowPlayingClientState>

 {
    NSUInteger _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_volumeControlNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotifications;
    NSMutableArray *_subscribedWakingPlayerPaths;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL receivesExternalScreenTypeChangedNotifications; // ivar: _receivesExternalScreenTypeChangedNotifications
@property (nonatomic) BOOL receivesOriginChangedNotifications; // ivar: _receivesOriginChangedNotifications
@property (nonatomic) BOOL receivesPlaybackErrorNotifications; // ivar: _receivesPlaybackErrorNotifications
@property (nonatomic) BOOL receivesRoutesChangedNotifications; // ivar: _receivesRoutesChangedNotifications
@property (nonatomic) BOOL receivesSupportedCommandsNotifications; // ivar: _receivesSupportedCommandsNotifications
@property (nonatomic) BOOL receivesVoiceInputRecordingStateNotifications; // ivar: _receivesVoiceInputRecordingStateNotifications
@property (nonatomic) BOOL receivesVolumeControlNotifications; // ivar: _receivesVolumeControlNotifications
@property (readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) BOOL registeredForNowPlayingNotifications;


+(id)nowPlayingNotifications;
-(BOOL)_postNotification:(id)arg0 userInfo:(id)arg1 object:(id)arg2 withHandler:(id)arg3 ;
-(BOOL)_processAlwaysNeedsNowPlayingNotifications;
-(BOOL)postNotification:(id)arg0 userInfo:(id)arg1 object:(id)arg2 ;
-(id)debugDescription;
-(id)init;
-(void)_syncWakingPlayerPathsWithReplyQueue:(id)arg0 completion:(id)arg1 ;
-(void)dispatchNotification:(id)arg0 userInfo:(id)arg1 object:(id)arg2 ;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg0 ;
-(void)registerForNowPlayingNotificationsWithQueue:(id)arg0 force:(BOOL)arg1 ;
-(void)registerForWakingNowPlayingNotificationsForPlayerPath:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;
-(void)restoreNowPlayingClientState;
-(void)unregisterForNowPlayingNotifications;
-(void)unregisterForWakingNowPlayingNotificationsForPlayerPath:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif