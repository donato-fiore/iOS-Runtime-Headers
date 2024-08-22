// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRORIGINMEDIAPLAYBACKCORECONTROLLER_H
#define NMRORIGINMEDIAPLAYBACKCORECONTROLLER_H

@class MPCPlayerPath, MPRequestResponseController, NSString;
@protocol MPRequestResponseControllerDelegate, NMROriginObserver, NMROriginCommandHandler, OS_dispatch_queue, NMROriginObserverDelegate;

#import <Foundation/Foundation.h>

#import "NMRPlayerResponseNowPlayingState.h"
#import "NMRNowPlayingState.h"
#import "NMROrigin.h"
#import "NMRPlaybackQueue.h"

@interface NMROriginMediaPlaybackCoreController : NSObject <MPRequestResponseControllerDelegate, NMROriginObserver, NMROriginCommandHandler>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isEnforcingApplicationFilter;
    MPCPlayerPath *_playerPath;
    NSUInteger _filteringOptions;
    MPRequestResponseController *_requestResponseController;
    NMRPlayerResponseNowPlayingState *_nowPlayingState;
    NSUInteger _numberOfConsecutiveFailuresToResolve;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMROriginObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NMRNowPlayingState *nowPlayingState;
@property (readonly, nonatomic) NMROrigin *origin; // ivar: _origin
@property (readonly, nonatomic) NMRPlaybackQueue *playbackQueue; // ivar: playbackQueue
@property (nonatomic) BOOL shouldObserveArtwork; // ivar: shouldObserveArtwork
@property (nonatomic) BOOL shouldObserveLibraryAddStatus; // ivar: _shouldObserveLibraryAddStatus
@property (nonatomic) BOOL shouldObservePlaybackQueue; // ivar: shouldObservePlaybackQueue
@property (readonly) Class superclass;


-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)_requestResponseController;
-(id)initWithPlayerPath:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_asyncToSerialQueueCheckingProcessWithBlock:(id)arg0 ;
-(void)_notifyObserverOfUpdatedElapsedTime;
-(void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
-(void)_notifyObserverOfUpdatedNowPlayingInfo;
-(void)_notifyObserverOfUpdatedPlaybackState;
-(void)_notifyObserverOfUpdatedSupportedCommands;
-(void)_notifyObserversOfUpdatedPlaybackQueue;
-(void)_notifyObserversOfUpdatedTimestamp;
-(void)_updateIsEnforcingApplicationFilterWithNowPlayingState:(id)arg0 ;
-(void)beginObserving;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)endObserving;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 userInitiated:(BOOL)arg2 completion:(id)arg3 ;
-(void)updateNowPlayingStateWithCompletion:(id)arg0 ;


@end


#endif