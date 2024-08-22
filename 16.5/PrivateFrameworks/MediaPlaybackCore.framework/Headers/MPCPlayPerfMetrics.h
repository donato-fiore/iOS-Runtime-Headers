// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYPERFMETRICS_H
#define MPCPLAYPERFMETRICS_H

@class NSNumber, NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPCPlayPerfMetrics : NSObject

@property (retain, nonatomic, setter=set_assetCacheAge:) NSNumber *assetCacheAge;
@property (retain, nonatomic, setter=set_assetLoadWaitTime:) NSNumber *assetLoadWaitTime;
@property (retain, nonatomic, setter=set_assetLocation:) NSNumber *assetLocation;
@property (retain, nonatomic, setter=set_assetProtectionType:) NSNumber *assetProtectionType;
@property (retain, nonatomic, setter=set_assetSource:) NSNumber *assetSource;
@property (retain, nonatomic, setter=set_assetType:) NSNumber *assetType;
@property (readonly, nonatomic) NSNumber *avTime;
@property (retain, nonatomic, setter=set_bagWaitTime:) NSNumber *bagWaitTime;
@property (retain, nonatomic, setter=set_checkpointAssetLoadBegin:) NSNumber *checkpointAssetLoadBegin;
@property (retain, nonatomic, setter=set_checkpointAssetLoadEnd:) NSNumber *checkpointAssetLoadEnd;
@property (retain, nonatomic, setter=set_checkpointFirstAudioFrame:) NSNumber *checkpointFirstAudioFrame;
@property (retain, nonatomic, setter=set_checkpointLikelyToKeepUp:) NSNumber *checkpointLikelyToKeepUp;
@property (retain, nonatomic, setter=set_checkpointMRPlay:) NSNumber *checkpointMRPlay;
@property (retain, nonatomic, setter=set_checkpointMRSetQueueBegin:) NSNumber *checkpointMRSetQueueBegin;
@property (retain, nonatomic, setter=set_checkpointPlay:) NSNumber *checkpointPlay;
@property (retain, nonatomic, setter=set_checkpointRateOne:) NSNumber *checkpointRateOne;
@property (retain, nonatomic, setter=set_checkpointRateZero:) NSNumber *checkpointRateZero;
@property (retain, nonatomic, setter=set_checkpointReadyToPlay:) NSNumber *checkpointReadyToPlay;
@property (retain, nonatomic, setter=set_checkpointSetQueueBegin:) NSNumber *checkpointSetQueueBegin;
@property (retain, nonatomic, setter=set_checkpointSetQueueEnd:) NSNumber *checkpointSetQueueEnd;
@property (retain, nonatomic) NSMutableDictionary *data; // ivar: _data
@property (retain, nonatomic, setter=set_endpointType:) NSNumber *endpointType;
@property (retain, nonatomic, setter=set_errorResolution:) NSNumber *errorResolution;
@property (retain, nonatomic, setter=set_errorSignature:) NSString *errorSignature;
@property (retain, nonatomic, setter=set_eventTime:) NSNumber *eventTime;
@property (retain, nonatomic, setter=set_eventType:) NSString *eventType;
@property (retain, nonatomic, setter=set_experimentID:) NSString *experimentID;
@property (retain, nonatomic, setter=set_featureName:) NSString *featureName;
@property (retain, nonatomic, setter=set_firstAudioFrameWaitTime:) NSNumber *firstAudioFrameWaitTime;
@property (retain, nonatomic, setter=set_formatInfo:) NSDictionary *formatInfo;
@property (retain, nonatomic, setter=set_hasAccountInfo:) NSNumber *hasAccountInfo;
@property (retain, nonatomic, setter=set_hasOfflinePlaybackKeys:) NSNumber *hasOfflinePlaybackKeys;
@property (retain, nonatomic, setter=set_hasOnlinePlaybackKeys:) NSNumber *hasOnlinePlaybackKeys;
@property (retain, nonatomic, setter=set_hlsMetadataWaitTime:) NSNumber *hlsMetadataWaitTime;
@property (retain, nonatomic, setter=set_isActiveAccount:) NSNumber *isActiveAccount;
@property (retain, nonatomic, setter=set_isAutoPlayEnabled:) NSNumber *isAutoPlayEnabled;
@property (retain, nonatomic, setter=set_isDelegatedPlayback:) NSNumber *isDelegatedPlayback;
@property (retain, nonatomic, setter=set_isFirstPlay:) NSNumber *isFirstPlay;
@property (retain, nonatomic, setter=set_isRemoteSetQueue:) NSNumber *isRemoteSetQueue;
@property (retain, nonatomic, setter=set_isReplacingPlayback:) NSNumber *isReplacingPlayback;
@property (retain, nonatomic, setter=set_isSharePlay:) NSNumber *isSharePlay;
@property (retain, nonatomic, setter=set_isShuffled:) NSNumber *isShuffled;
@property (retain, nonatomic, setter=set_itemIdentifier:) NSString *itemIdentifier;
@property (retain, nonatomic, setter=set_itemMetadata:) NSDictionary *itemMetadata;
@property (retain, nonatomic, setter=set_leaseWaitTime:) NSNumber *leaseWaitTime;
@property (retain, nonatomic, setter=set_lookupWaitTime:) NSNumber *lookupWaitTime;
@property (readonly, nonatomic) NSNumber *mediaPlayerTime;
@property (retain, nonatomic, setter=set_mediaRedownloadWaitTime:) NSNumber *mediaRedownloadWaitTime;
@property (readonly, nonatomic) NSNumber *musicTotalTime;
@property (readonly, nonatomic) NSNumber *musicWaitTime;
@property (readonly, nonatomic) NSNumber *networkTime;
@property (retain, nonatomic, setter=set_networkType:) NSNumber *networkType;
@property (retain, nonatomic, setter=set_nextItemWaitTime:) NSNumber *nextItemWaitTime;
@property (retain, nonatomic, setter=set_playCommandSendTime:) NSNumber *playCommandSendTime;
@property (retain, nonatomic, setter=set_playCommandWaitTime:) NSNumber *playCommandWaitTime;
@property (retain, nonatomic, setter=set_queueCommandType:) NSNumber *queueCommandType;
@property (retain, nonatomic, setter=set_queueLoadWaitTime:) NSNumber *queueLoadWaitTime;
@property (retain, nonatomic, setter=set_queueType:) NSString *queueType;
@property (retain, nonatomic, setter=set_rateChangeWaitTime:) NSNumber *rateChangeWaitTime;
@property (retain, nonatomic, setter=set_readyToPlayStatusWaitTime:) NSNumber *readyToPlayStatusWaitTime;
@property (retain, nonatomic, setter=set_routeInfo:) NSDictionary *routeInfo;
@property (retain, nonatomic, setter=set_sectionIdentifier:) NSString *sectionIdentifier;
@property (retain, nonatomic, setter=set_seekBeforePlaying:) NSNumber *seekBeforePlaying;
@property (retain, nonatomic, setter=set_sessionActivationAVTime:) NSNumber *sessionActivationAVTime;
@property (retain, nonatomic, setter=set_sessionActivationClientTime:) NSNumber *sessionActivationClientTime;
@property (retain, nonatomic, setter=set_sessionActivationWaitTime:) NSNumber *sessionActivationWaitTime;
@property (retain, nonatomic, setter=set_setQueueCommandSendTime:) NSNumber *setQueueCommandSendTime;
@property (retain, nonatomic, setter=set_siriRefId:) NSString *siriRefId;
@property (retain, nonatomic, setter=set_storefront:) NSString *storefront;
@property (retain, nonatomic, setter=set_subscriptionAssetLoadWaitTime:) NSNumber *subscriptionAssetLoadWaitTime;
@property (retain, nonatomic, setter=set_subscriptionType:) NSNumber *subscriptionType;
@property (retain, nonatomic, setter=set_suzeLeaseWaitTime:) NSNumber *suzeLeaseWaitTime;
@property (retain, nonatomic, setter=set_treatmentID:) NSString *treatmentID;
@property (retain, nonatomic, setter=set_vocalsControlActive:) NSNumber *vocalsControlActive;


+(id)playMetricsWithErrorSignature:(id)arg0 event:(id)arg1 cursor:(id)arg2 ;
+(id)playMetricsWithFirstFrameEvent:(id)arg0 cursor:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)jsonObject;
-(void)addAssetLoadInfoWithCursor:(id)arg0 itemIDPayload:(id)arg1 ;
-(void)addEnvironmentInfoWithCursor:(id)arg0 ;
-(void)addNetworkTimesWithScopedCursor:(id)arg0 ;
-(void)addPlaybackBehaviorWithCursor:(id)arg0 ;
-(void)addQueueMetadata:(id)arg0 ;
-(void)addSessionActivationTimesWithScopedCursor:(id)arg0 ;
-(void)addSharePlayWithCursor:(id)arg0 ;


@end


#endif