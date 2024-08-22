// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPLAYBACKSTACKCONTROLLERIMPLEMENTATION_H
#define MFPLAYBACKSTACKCONTROLLERIMPLEMENTATION_H

@class NSString, NSArray, NSDictionary, NSNumber, AVPlayerViewController;
@protocol MFPlaybackStackController, MFQueueManagement, MFQueuePlayerItem, MFPlaybackStackControllerDelegate;

#import <Foundation/Foundation.h>


@interface MFPlaybackStackControllerImplementation : NSObject <MFPlaybackStackController, MFQueueManagement>

 {
    ? signpostSubscription;
    ? internalStack;
}


@property (nonatomic, readonly) NSObject<MFQueuePlayerItem> *currentItem;
@property (nonatomic, readonly) NSInteger currentItemTransition;
@property (nonatomic, readonly) NSObject<MFQueuePlayerItem> *currentQueueItem;
@property (nonatomic, readonly) NSInteger currentState;
@property (nonatomic, readonly) CGFloat currentTime;
@property (nonatomic, weak) NSObject<MFPlaybackStackControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) float effectiveRate;
@property (nonatomic, readonly) NSInteger interruptedState;
@property (nonatomic, readonly) BOOL isModeManagedSession;
@property (nonatomic, readonly) BOOL isModeShared;
@property (nonatomic, readonly) BOOL isModeSolo;
@property (nonatomic) NSInteger maximumPlayerQueueLength;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) NSArray *nextItems;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (nonatomic, readonly) float targetRate;
@property (nonatomic, readonly) NSNumber *targetTime;
@property (nonatomic, readonly) AVPlayerViewController *videoViewController;


+(id)errorDomain;
-(BOOL)shouldSkipJumpToItemStart:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPlayerID:(id)arg0 queueController:(id)arg1 assetLoader:(id)arg2 errorController:(id)arg3 externalPlaybackController:(id)arg4 leaseController:(id)arg5 queue:(id)arg6 ;
-(void)activateAudioSessionWithCompletion:(id)arg0 ;
-(void)beginScanningWithDirection:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)beginSeekingWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)clearPlaybackQueue;
-(void)endScanningWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endSeekingWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)jumpTo:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)pauseForLeasePreventionWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)pauseWithFadeOut:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)pauseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)playWithRate:(float)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)reloadCurrentItemWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg0 ;
-(void)reset;
-(void)restoreQueue:(id)arg0 ;
-(void)seekTo:(CGFloat)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)setQueueWithInitialItem:(id)arg0 andPlay:(BOOL)arg1 identifier:(id)arg2 completion:(id)arg3 ;
-(void)setRelativeVolume:(float)arg0 ;
-(void)setSpatializationFormat:(NSInteger)arg0 ;
-(void)setupForManagedSessionWithAudioSession:(id)arg0 ;
-(void)setupForShared;
-(void)setupForSolo;
-(void)skipWithDirection:(NSInteger)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)updateAudioSessionWithConfiguration:(id)arg0 ;


@end


#endif