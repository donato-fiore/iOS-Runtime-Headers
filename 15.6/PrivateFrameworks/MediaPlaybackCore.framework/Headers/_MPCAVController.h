// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCAVCONTROLLER_H
#define _MPCAVCONTROLLER_H

@class MPAVController, MPAVItem, NSString, NSMutableSet, AVPlayerLayer;
@protocol MPCPlaybackEngineImplementation, MPAVQueueController;


#import "MPCPlaybackEngine.h"

@interface _MPCAVController : MPAVController <MPCPlaybackEngineImplementation>



@property (nonatomic) NSInteger actionAtQueueEnd; // ivar: _actionAtQueueEnd
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic) float currentRate;
@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers; // ivar: _failedItemsIdentifiers
@property (copy, nonatomic) NSString *firstPlaybackItemIdentifier; // ivar: _firstPlaybackItemIdentifier
@property (readonly, nonatomic) BOOL hasPlayedSuccessfully; // ivar: _hasPlayedSuccessfully
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (retain, nonatomic) NSObject<MPAVQueueController> *queueController;
@property (readonly, nonatomic, getter=isReloadingPlaybackContext) BOOL reloadingPlaybackContext;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) NSInteger stateBeforeInterruption;
@property (readonly) Class superclass;


+(BOOL)prefersApplicationAudioSession;
-(id)_expectedAssetTypesForPlaybackMode:(NSInteger)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_configureAudioSession;
-(void)_connectAVPlayer;
-(void)_connectAVPlayerDeferringItemLoading:(BOOL)arg0 ;
-(void)_contentsChanged;
-(void)_enforcingPolicy:(BOOL)arg0 ;
-(void)_itemDidChange:(id)arg0 ;
-(void)_itemDidSignificantlyChangeElapsedTime:(CGFloat)arg0 rate:(float)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg0 ;
-(void)_itemWillChange:(id)arg0 ;
-(void)_networkPolicyItemCellularRestrictedNotification:(id)arg0 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg0 ;
-(void)_queueDidEndWithReason:(id)arg0 lastItem:(id)arg1 ;
-(void)_streamBufferFull:(id)arg0 ;
-(void)_streamLikelyToKeepUp:(id)arg0 ;
-(void)_updateStateForPlaybackPrevention;
-(void)endPlayback;
-(void)handlePlaybackErrorWithUserInfo:(id)arg0 ;
-(void)loadSessionWithQueueController:(id)arg0 completionHandler:(id)arg1 ;
-(void)playWithOptions:(NSUInteger)arg0 ;
-(void)playbackHasStartedForItem:(id)arg0 ;
-(void)queueController:(id)arg0 didChangeActionAtQueueEnd:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeRepeatType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didChangeShuffleType:(NSInteger)arg1 ;
-(void)queueController:(id)arg0 didIncrementVersionForSegment:(id)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceCurrentItemWithPlaybackContext:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)togglePlaybackWithOptions:(NSUInteger)arg0 ;
-(void)updateAudioSession;


@end


#endif