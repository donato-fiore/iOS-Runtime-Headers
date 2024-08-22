// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRORIGINCONTROLLER_H
#define NMRORIGINCONTROLLER_H

@class NSString;
@protocol NMROriginObserver, NMROriginObserverDelegate, NMROriginCommandHandler;

#import <Foundation/Foundation.h>

#import "NMRNowPlayingState.h"
#import "NMROrigin.h"
#import "NMRPlaybackQueue.h"

@interface NMROriginController : NSObject <NMROriginObserver, NMROriginObserverDelegate, NMROriginCommandHandler>

 {
    BOOL _isObserving;
    BOOL _hasPendingNowPlayingInfoChange;
    BOOL _hasPendingElapsedTimeChange;
    BOOL _hasPendingPlaybackStateChange;
    BOOL _hasPendingSupportedCommandsChange;
    BOOL _hasPendingNowPlayingApplicationBundleIdentifierChange;
    BOOL _hasPendingTimestampChange;
    BOOL _hasPendingPlaybackQueueChange;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMROriginObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NMRNowPlayingState *nowPlayingState;
@property (readonly, nonatomic) NMROrigin *origin; // ivar: _origin
@property (retain, nonatomic) NSObject<NMROriginCommandHandler> *originCommandHandler; // ivar: _originCommandHandler
@property (retain, nonatomic) NSObject<NMROriginObserver> *originObserver; // ivar: _originObserver
@property (readonly, nonatomic) NMRPlaybackQueue *playbackQueue;
@property (nonatomic) BOOL shouldObserveArtwork; // ivar: _shouldObserveArtwork
@property (nonatomic) BOOL shouldObserveLibraryAddStatus; // ivar: _shouldObserveLibraryAddStatus
@property (nonatomic) BOOL shouldObservePlaybackQueue; // ivar: _shouldObservePlaybackQueue
@property (readonly) Class superclass;


-(id)initWithOrigin:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_notifyObserverOfUpdatedElapsedTime;
-(void)_notifyObserverOfUpdatedNowPlayingApplicationBundleIdentifier;
-(void)_notifyObserverOfUpdatedNowPlayingInfo;
-(void)_notifyObserverOfUpdatedPlaybackQueue;
-(void)_notifyObserverOfUpdatedPlaybackState;
-(void)_notifyObserverOfUpdatedSupportedCommands;
-(void)_notifyObserverOfUpdatedTimestamp;
-(void)beginObserving;
-(void)endObserving;
-(void)originObserver:(id)arg0 didUpdateElapsedTimeForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateNowPlayingInfoForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdatePlaybackQueueForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdatePlaybackStateForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateSupportedCommandsForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateTimestampForOrigin:(id)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 userInitiated:(BOOL)arg2 completion:(id)arg3 ;
-(void)updateNowPlayingStateWithCompletion:(id)arg0 ;


@end


#endif