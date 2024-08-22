// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APRKMEDIAPLAYER_H
#define APRKMEDIAPLAYER_H

@class AVQueuePlayer, NSString, NSArray, NSDictionary, NSMutableDictionary, AVPlayerItem;
@protocol APRKResourceLoaderHelperDelegate, APRKContentKeyHelperDelegate, AVPlayerItemMetadataCollectorPushDelegate, APRKMediaPlayerMessagingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APRKResourceLoaderHelper.h"
#import "APRKContentKeyHelper.h"
#import "APRKMediaPlayer.h"
#import "APRKMetadata.h"

@interface APRKMediaPlayer : NSObject <APRKResourceLoaderHelperDelegate, APRKContentKeyHelperDelegate, AVPlayerItemMetadataCollectorPushDelegate>

 {
    AVQueuePlayer *_player;
    NSString *_previousItemUUID;
    NSString *_currentItemUUID;
    BOOL _isInterestedInDateRange;
    NSInteger _stallCount;
    id<APRKMediaPlayerMessagingDelegate> *_messagingDelegate;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSArray *_cachedSelectedMediaArray;
    NSDictionary *_cachedSSLProperties;
    APRKResourceLoaderHelper *_resourceLoaderHelper;
    APRKContentKeyHelper *_contentKeyHelper;
    *OpaqueAPReceiverFairPlayHelper _fpHelper;
    NSInteger _internalPlaybackState;
    *OpaqueAPSNetworkAddress _sessionReceiverAddr;
    *OpaqueAPSNetworkClock _receiverNetworkClock;
    BOOL _isP2PWiFiSession;
    BOOL _isFirstSetRateReceived;
    BOOL _isInvalidated;
    BOOL _disableAutoResumeAfterSeek;
    BOOL _isWaitingToSetRateFromSenderAfterSeek;
    NSMutableDictionary *_pendingSenderSeekMessages;
    float _lastNonZeroRate;
    BOOL _isInTrickPlay;
    float _rateBeforeTrickPlay;
    APRKMediaPlayer *_interstitialPlayer;
    NSArray *_interstitialEvents;
    NSString *_currentInterstitialEventID;
    NSArray *_lastReportedDateRanges;
}


@property (readonly, nonatomic) AVQueuePlayer *backingAVQueuePlayer;
@property (readonly, nonatomic) AVPlayerItem *currentItem;
@property (retain, nonatomic) APRKMetadata *currentItemMetadata; // ivar: _currentItemMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInterstitialPlayer; // ivar: _isInterstitialPlayer
@property (weak, nonatomic) NSObject<APRKMediaPlayerMessagingDelegate> *messagingDelegate;
@property (readonly) Class superclass;


-(BOOL)_attemptToSetSelectedMediaArray:(id)arg0 ;
-(BOOL)_ensureFairPlayHelper;
-(BOOL)_shouldIgnoreSeekCompletionForSeekID:(int)arg0 forItem:(id)arg1 ;
-(BOOL)shouldDelegateToInterstitialPlayerForMessage:(id)arg0 ;
-(id)_SSLPropertiesforTLSInfo:(id)arg0 ;
-(id)_currentPlaybackInfoDictionary;
-(id)_figPlaybackStateStringFrom:(NSInteger)arg0 ;
-(id)_fixedIPContentLocationFromURLString:(id)arg0 error:(*id)arg1 ;
-(id)_frontPlayerItem;
-(id)_getPropertyWithDictionary:(id)arg0 ;
-(id)_playerItemForUUID:(id)arg0 ;
-(id)_processAuthorizeItemWithDictionary:(id)arg0 ;
-(id)_processMessageWithDictionaryInternal:(id)arg0 ;
-(id)_processPlaybackInfoRequestWithDictionary:(id)arg0 ;
-(id)_seekRequestMessageForSeekID:(int)arg0 forItem:(id)arg1 ;
-(id)_serializeTimeRanges:(id)arg0 ;
-(id)initWithP2PWiFiSupport:(BOOL)arg0 isInterstitialPlayer:(BOOL)arg1 ;
-(id)processMessageWithDictionarySync:(id)arg0 ;
-(id)selectedMediaArrayForItem:(id)arg0 ;
-(void)_addPendingSeekID:(int)arg0 withMessage:(id)arg1 forItem:(id)arg2 ignoreSeekCompletion:(BOOL)arg3 ;
-(void)_ensureInterstitialPlayer;
-(void)_handleCurrentItemChangedNotification:(id)arg0 ;
-(void)_handleCurrentItemPlaybackStalledNotification:(id)arg0 ;
-(void)_handleCurrentItemPlayedToEndNotification:(id)arg0 ;
-(void)_handleCurrentPlayerItemMediaSelectionDidChangeNotification:(id)arg0 ;
-(void)_handleCurrentPlayerItemReachedTimeToPauseBufferingNotification:(id)arg0 ;
-(void)_handleCurrentPlayerItemReachedTimeToPausePlaybackNotification:(id)arg0 ;
-(void)_handleSeekDidCompleteNotification:(id)arg0 ;
-(void)_handleTimeJumpedNotification:(id)arg0 ;
-(void)_insertPlayQueueItemWithDictionary:(id)arg0 ;
-(void)_pausePlayerIfNeededForState:(NSInteger)arg0 ;
-(void)_prepareForNewItemPlaybackWithCompletionBlock:(id)arg0 ;
-(void)_processStreamingKeyWithDictionary:(id)arg0 ;
-(void)_processUnhandledURLWithDictionary:(id)arg0 ;
-(void)_registerNotificationHandlersAndInsertPlayerItem:(id)arg0 afterItem:(id)arg1 ;
-(void)_registerNotificationHandlersForPlayer;
-(void)_removePendingSeekID:(int)arg0 forItem:(id)arg1 ;
-(void)_removePlayQueueItemWithDictionary:(id)arg0 ;
-(void)_seekWithDictionary:(id)arg0 ;
-(void)_sendUpstreamErrorMessageWithError:(id)arg0 ;
-(void)_sendUpstreamMessageWithDictionary:(id)arg0 ;
-(void)_sendUpstreamPlaybackStateMessageWithPlaybackStateString:(id)arg0 stoppedBecauseInterrupted:(BOOL)arg1 ;
-(void)_setPropertyWithDictionary:(id)arg0 ;
-(void)_setRateWithDictionary:(id)arg0 ;
-(void)_stopWithDictionary:(id)arg0 ;
-(void)_unregisterNotificationHandlersAndRemovePlayerItem:(id)arg0 ;
-(void)_unregisterNotificationHandlersForPlayer;
-(void)_updatePlaybackStateWithState:(NSInteger)arg0 stoppedBecauseInterrupted:(BOOL)arg1 shouldSendUpstreamMessage:(BOOL)arg2 ;
-(void)addDateRangeCollectorToItem:(id)arg0 ;
-(void)contentKeyHelper:(id)arg0 didGenerateSecureStopRecordPayload:(id)arg1 ;
-(void)contentKeyHelper:(id)arg0 wantsToPerformContentKeyRequestWithDictionary:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)metadataCollector:(id)arg0 didCollectDateRangeMetadataGroups:(id)arg1 indexesOfNewGroups:(id)arg2 indexesOfModifiedGroups:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processMessageWithDictionaryAsync:(id)arg0 ;
-(void)processTLSInfoDictionary:(id)arg0 ;
-(void)resourceLoaderHelper:(id)arg0 wantsToPerformUnhandledURLRequestWithDictionary:(id)arg1 forRequestID:(id)arg2 ;
-(void)setReceiverNetworkClock:(struct OpaqueAPSNetworkClock *)arg0 ;
-(void)setSessionReceiverAddress:(struct OpaqueAPSNetworkAddress *)arg0 ;
-(void)stopWithCompletionBlock:(id)arg0 ;


@end


#endif