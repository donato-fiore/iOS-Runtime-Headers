// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPNOWPLAYINGSESSION_H
#define MPNOWPLAYINGSESSION_H

@class AVAudioSession, NSDictionary, NSArray, NSSet, MRPlayerPath, NSMutableSet, NSString;
@protocol MPNowPlayingSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoCenter.h"
#import "MPRemoteCommandCenter.h"

@interface MPNowPlayingSession : NSObject {
    BOOL _invalidated;
    AVAudioSession *_audioSession;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) id *adTimeRangesEndObserverToken; // ivar: _adTimeRangesEndObserverToken
@property (retain, nonatomic) id *adTimeRangesStartObserverToken; // ivar: _adTimeRangesStartObserverToken
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) unsigned int audioSessionID;
@property (nonatomic) BOOL automaticallyPublishesNowPlayingInfo; // ivar: _automaticallyPublishesNowPlayingInfo
@property (retain, nonatomic) NSDictionary *baseNowPlayingInfo; // ivar: _baseNowPlayingInfo
@property (nonatomic) BOOL canBecomeActive; // ivar: _canBecomeActive
@property (retain, nonatomic) id *creditsTimeObserverToken; // ivar: _creditsTimeObserverToken
@property (retain, nonatomic) NSArray *currentAdTimeRanges; // ivar: _currentAdTimeRanges
@property (nonatomic) CGFloat currentAssetNetCreditsStartTime; // ivar: _currentAssetNetCreditsStartTime
@property (nonatomic) CGFloat currentAssetNetDuration; // ivar: _currentAssetNetDuration
@property (weak, nonatomic) NSObject<MPNowPlayingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *mxSessionIDs; // ivar: _mxSessionIDs
@property (retain, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter; // ivar: _nowPlayingInfoCenter
@property (nonatomic, getter=isPictureInPictureEnabled) BOOL pictureInPictureEnabled; // ivar: _pictureInPictureEnabled
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSMutableSet *playerSet; // ivar: _playerSet
@property (readonly, nonatomic) NSArray *players;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // ivar: _remoteCommandCenter
@property (readonly, nonatomic) NSString *routingContextID; // ivar: _routingContextID


+(id)nowPlayingSessionForPlayerID:(id)arg0 ;
+(id)nowPlayingSessionForPlayerPath:(id)arg0 ;
-(BOOL)hasInvalidAdTimeRange:(id)arg0 totalDuration:(id)arg1 ;
-(float)effectivePlaybackRateWithPlayer:(id)arg0 ;
-(id)initWithPlayerPath:(id)arg0 routingContextID:(id)arg1 ;
-(id)initWithPlayers:(id)arg0 ;
-(id)mediaExperienceIDs;
-(id)mxSessionIDKeyPath;
-(struct ? )netTimeForGrossTime:(struct ? )arg0 ;
-(void)_playerItemNowPlayingInfoDidChange:(id)arg0 ;
-(void)activePlayerDidChangeNotification:(id)arg0 ;
-(void)addPlayer:(id)arg0 ;
-(void)addPlayerItemObservers:(id)arg0 ;
-(void)addPlayerObservers:(id)arg0 ;
-(void)becomeActiveIfPossibleWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)extractNowPlayingInfoFromPlayersAndUpdateAdRanges;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playerItemDidPlayToEnd:(id)arg0 ;
-(void)playerItemPlaybackStalled:(id)arg0 ;
-(void)playerItemTimeJumped:(id)arg0 ;
-(void)playerPictureInPictureEnabledDidChangeNotification:(id)arg0 ;
-(void)playerRateDidChange:(id)arg0 ;
-(void)removePlayer:(id)arg0 ;
-(void)removePlayerItemObservers:(id)arg0 ;
-(void)removePlayerObservers:(id)arg0 ;
-(void)updateAudioSession:(id)arg0 ;
-(void)updateMediaExperienceIDs;
-(void)updateNowPlayingInfo;


@end


#endif