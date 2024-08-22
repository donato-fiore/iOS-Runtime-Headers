// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRNOWPLAYINGCONTROLLER_H
#define NMRNOWPLAYINGCONTROLLER_H

@class NSMapTable, NSHashTable, NSString, NSArray;
@protocol NMROriginObserverDelegate, NMRNowPlayingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NMROrigin.h"

@interface NMRNowPlayingController : NSObject <NMROriginObserverDelegate>

 {
    NSUInteger _registeredObserversCount;
    NSMapTable *_originControllers;
    NSHashTable *_observerDelegates;
    NMROrigin *_activeNowPlayingOrigin;
    NSString *_activeNowPlayingOriginExplanationLog;
    NSArray *_nowPlayingOrigins;
    BOOL _shouldObserveArtwork;
    BOOL _shouldObservePlaybackQueue;
    BOOL _shouldObserveLibraryAddStatus;
    id<NMRNowPlayingControllerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _observerLock;
}


@property (readonly, nonatomic) NMROrigin *activeNowPlayingOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMRNowPlayingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger filteringOptions; // ivar: _filteringOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *nowPlayingOrigins;
@property (nonatomic) BOOL shouldObserveArtwork;
@property (nonatomic) BOOL shouldObserveLibraryAddStatus;
@property (nonatomic) BOOL shouldObservePlaybackQueue;
@property (readonly) Class superclass;


-(BOOL)_shouldObserveOrigin:(id)arg0 ;
-(id)_evaluateActiveNowPlayingOriginForOrderedOrigins:(id)arg0 ;
-(id)_evaluateNowPlayingOriginsFromOrigins:(id)arg0 ;
-(id)_nowPlayingStateForOrigin:(id)arg0 ;
-(id)_originControllerForOrigin:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)launchBundleIdentifierForOrigin:(id)arg0 ;
-(id)launchNowPlayingURLForOrigin:(id)arg0 ;
-(id)nowPlayingStateForOrigin:(id)arg0 ;
-(id)playbackQueueForOrigin:(id)arg0 ;
-(void)_addOriginControllerWithOrigin:(id)arg0 ;
-(void)_enumerateObserverDelegates:(id)arg0 ;
-(void)_evaluateNowPlayingOrigins;
-(void)_handleAvailableOriginsDidChangeNotification:(id)arg0 ;
-(void)_removeOriginControllerWithOrigin:(id)arg0 ;
-(void)_setupOriginControllers;
-(void)_updateNowPlayingStateForOrigin:(id)arg0 completion:(id)arg1 ;
-(void)addObserverDelegate:(id)arg0 ;
-(void)beginObservingOrigins;
-(void)dealloc;
-(void)endObservingOrigins;
-(void)originObserver:(id)arg0 didUpdateElapsedTimeForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateNowPlayingInfoForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdatePlaybackQueueForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdatePlaybackStateForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateSupportedCommandsForOrigin:(id)arg1 ;
-(void)originObserver:(id)arg0 didUpdateTimestampForOrigin:(id)arg1 ;
-(void)removeObserverDelegate:(id)arg0 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 userInitiated:(BOOL)arg2 toOrigin:(id)arg3 completion:(id)arg4 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 toOrigin:(id)arg1 options:(id)arg2 launchApp:(BOOL)arg3 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 toOrigin:(id)arg1 options:(id)arg2 launchApp:(BOOL)arg3 completion:(id)arg4 ;
-(void)setOriginCommandHandler:(id)arg0 forOrigin:(id)arg1 ;
-(void)setOriginObserver:(id)arg0 forOrigin:(id)arg1 ;
-(void)updateNowPlayingStateForAllOriginsWithCompletion:(id)arg0 ;
-(void)updateNowPlayingStateForOrigin:(id)arg0 completion:(id)arg1 ;


@end


#endif