// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOMEDIANOWPLAYINGOBSERVER_H
#define SOMEDIANOWPLAYINGOBSERVER_H

@class NSDate, NSHashTable, AFInstanceContext, MRNowPlayingController, NSString;
@protocol MRNowPlayingControllerDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface SOMediaNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_playbackStateGroup;
    NSInteger _playbackStateGroupDepth;
    NSInteger _playbackState;
    NSDate *_lastPlayingDate;
    NSHashTable *_listeners;
    AFInstanceContext *_instanceContext;
    MRNowPlayingController *_nowPlayingController;
    BOOL _isProxyGroupPlayer;
    BOOL _isObserving;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly) Class superclass;


+(id)defaultObserver;
-(BOOL)_isProxyGroupPlayer;
-(BOOL)_supportsProxyGroupPlayer;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 instanceContext:(id)arg1 ;
-(void)_beginGroup;
-(void)_endGroup;
-(void)_fetchLastPlayingDateWithCompletion:(id)arg0 ;
-(void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg0 completion:(id)arg1 ;
-(void)_handleLastPlayingDateChangedTo:(id)arg0 ;
-(void)_handleNowPlayingApplicationPlaybackStateChange:(NSInteger)arg0 ;
-(void)_startObservingNowPlayingAppPlaybackState;
-(void)_stopObservingNowPlayingAppPlaybackState;
-(void)_updateProxyGroupPlayerState;
-(void)addListener:(id)arg0 ;
-(void)controller:(id)arg0 didFailWithError:(id)arg1 ;
-(void)controller:(id)arg0 didLoadResponse:(id)arg1 ;
-(void)controller:(id)arg0 playbackQueueDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)controller:(id)arg0 playbackStateDidChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)controllerWillReloadForInvalidation:(id)arg0 ;
-(void)dealloc;
-(void)getNowPlayingApplicationBundleIdentifier:(id)arg0 ;
-(void)getNowPlayingInfoForCurrentItemWithCompletion:(id)arg0 ;
-(void)getPlaybackStateAndLastPlayingDateWithCompletion:(id)arg0 ;
-(void)getPlaybackStateWithCompletion:(id)arg0 ;
-(void)getProxyGroupPlayerStateWithCompletion:(id)arg0 ;
-(void)mediaRemoteActiveDeviceInfoDidChange:(id)arg0 ;
-(void)mediaRemoteNowPlayingApplicationPlaybackStateDidChange:(id)arg0 ;
-(void)mediaRemoteNowPlayingInfoDidChange:(id)arg0 ;
-(void)removeListener:(id)arg0 ;


@end


#endif