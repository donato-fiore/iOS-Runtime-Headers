// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVINTERSTITIALCONTROLLER_H
#define AVINTERSTITIALCONTROLLER_H

@class AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVPlayer, AVPlayerTimeController<AVTimeControlling>;
@protocol NSObject, AVInterstitialControllerDelegateManager;

#import <Foundation/Foundation.h>

#import "AVTimeRange.h"
#import "AVTimeRangeCollection.h"
#import "AVObservationController.h"

@interface AVInterstitialController : NSObject {
    id<NSObject> *_playerItemTimeJumpedObserver;
    id<NSObject> *_playerInterstitialEventsChangedObserver;
    id<NSObject> *_playerInterstitialCurrentEventChangedObserver;
}


@property (readonly, nonatomic) CGFloat continuationTimeAfterInterstitial; // ivar: _continuationTimeAfterInterstitial
@property (readonly, nonatomic) CGFloat currentDisplayTime;
@property (readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
@property (weak, nonatomic) NSObject<AVInterstitialControllerDelegateManager> *delegateManager; // ivar: _delegateManager
@property (copy, nonatomic) id *didEnterInterstitialTimeRangeBlock; // ivar: _didEnterInterstitialTimeRangeBlock
@property (copy, nonatomic) id *didLeaveInterstitialTimeRangeBlock; // ivar: _didLeaveInterstitialTimeRangeBlock
@property (copy, nonatomic) id *didLeaveRequiredInterstitialTimeRangeBlock; // ivar: _didLeaveRequiredInterstitialTimeRangeBlock
@property (retain, nonatomic) AVPlayerInterstitialEventController *eventController; // ivar: _eventController
@property (retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // ivar: _eventMonitor
@property (retain, nonatomic) id *interstitialBoundaryTimeObserver; // ivar: _interstitialBoundaryTimeObserver
@property (retain, nonatomic) AVPlayer *interstitialPlayer; // ivar: _interstitialPlayer
@property (retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // ivar: _interstitialTimeRangeCollection
@property (retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // ivar: _interstitialTimeRangeInProgress
@property (readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController; // ivar: _interstitialTimingController
@property (retain, nonatomic) AVObservationController *kvo; // ivar: _kvo
@property (retain, nonatomic) AVObservationController *kvoPlayerItem; // ivar: _kvoPlayerItem
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property (readonly, nonatomic) BOOL requiresLinearPlayback;
@property (readonly, nonatomic) BOOL shouldEnforceInterstitialPolicy;
@property (copy, nonatomic) id *skipInterstitialTimeRangeBlock; // ivar: _skipInterstitialTimeRangeBlock
@property (readonly, nonatomic) CGFloat timeRemainingInCurrentInterstitial;


+(id)interstitialQueue;
+(id)newTimeRangeCollectionForPlayerItem:(id)arg0 ;
+(id)newTimeRangeCollectionForPlayerItem:(id)arg0 reversePlaybackEndTime:(struct ? )arg1 forwardPlaybackEndTime:(struct ? )arg2 ;
-(BOOL)_shouldSkipInterstitialTimeRange:(id)arg0 ;
-(BOOL)isLive;
-(BOOL)loadDurationOfCurrentOrNextInterstitialEvent:(id)arg0 ;
-(CGFloat)_pendingTimeBoundary;
-(CGFloat)currentTime;
-(CGFloat)displayTimeFromTime:(CGFloat)arg0 ;
-(CGFloat)elapsedTimeForInterstitialPlayer;
-(CGFloat)elapsedTimeWithinCurrentInterstitial;
-(CGFloat)timeFromDisplayTime:(CGFloat)arg0 ;
-(CGFloat)timeToSeekAfterUserNavigatedFromTime:(CGFloat)arg0 toTime:(CGFloat)arg1 ;
-(id)_copySynthesizedInterstitialTimeRanges;
-(id)currentItem;
-(id)currentOrEstimatedDate;
-(id)init;
-(id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg0 ;
-(id)nextInterstitialTimeRange;
-(id)timeRangeForPlayerInterstitialEvent:(id)arg0 ;
-(void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg0 ;
-(void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg0 ;
-(void)_sendInterstitialBoundaryNotificationsForTime:(CGFloat)arg0 ;
-(void)_setPendingTimeBoundary:(CGFloat)arg0 ;
-(void)_startObservingInterstitialTimeRanges;
-(void)_stopObservingInterstitialTimeRanges;
-(void)_updateInterstitialTimeRangeCollection;
-(void)cancelCurrentPlayerInterstitialEvent;
-(void)dealloc;
-(void)didBeginOrResumePlayback;
-(void)didPresentInterstitialTimeRange:(id)arg0 ;
-(void)invalidate;
-(void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
-(void)sendPendingInterstitialBoundaryNotificationIfNeeded;
-(void)skipInterstitialTimeRange:(id)arg0 ;
-(void)updateSynthesizedInterstitialTimeRanges;
-(void)willPresentInterstitialTimeRange:(id)arg0 ;


@end


#endif