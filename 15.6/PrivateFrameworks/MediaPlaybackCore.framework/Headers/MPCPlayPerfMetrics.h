// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYPERFMETRICS_H
#define MPCPLAYPERFMETRICS_H

@class NSNumber, NSString, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPCPlayPerfMetrics : NSObject

@property (retain, nonatomic, setter=set_assetLoadWaitTime:) NSNumber *assetLoadWaitTime;
@property (retain, nonatomic, setter=set_assetLocation:) NSString *assetLocation;
@property (retain, nonatomic, setter=set_assetSource:) NSNumber *assetSource;
@property (retain, nonatomic, setter=set_assetType:) NSNumber *assetType;
@property (readonly, nonatomic) NSNumber *avTime;
@property (retain, nonatomic, setter=set_bagWaitTime:) NSNumber *bagWaitTime;
@property (retain, nonatomic) NSMutableDictionary *data; // ivar: _data
@property (retain, nonatomic, setter=set_endpointType:) NSNumber *endpointType;
@property (retain, nonatomic, setter=set_errorResolution:) NSNumber *errorResolution;
@property (retain, nonatomic, setter=set_errorSignature:) NSString *errorSignature;
@property (retain, nonatomic, setter=set_eventTime:) NSNumber *eventTime;
@property (retain, nonatomic, setter=set_eventType:) NSString *eventType;
@property (retain, nonatomic, setter=set_featureName:) NSString *featureName;
@property (retain, nonatomic, setter=set_firstAudioFrameWaitTime:) NSNumber *firstAudioFrameWaitTime;
@property (retain, nonatomic, setter=set_formatInfo:) NSDictionary *formatInfo;
@property (retain, nonatomic, setter=set_getTracksWaitTime:) NSNumber *getTracksWaitTime;
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
@property (retain, nonatomic, setter=set_queueLoadWaitTime:) NSNumber *queueLoadWaitTime;
@property (retain, nonatomic, setter=set_queueType:) NSString *queueType;
@property (retain, nonatomic, setter=set_rateChangeWaitTime:) NSNumber *rateChangeWaitTime;
@property (retain, nonatomic, setter=set_readyToPlayStatusWaitTime:) NSNumber *readyToPlayStatusWaitTime;
@property (retain, nonatomic, setter=set_routeInfo:) NSDictionary *routeInfo;
@property (retain, nonatomic, setter=set_sectionIdentifier:) NSString *sectionIdentifier;
@property (retain, nonatomic, setter=set_sessionActivationWaitTime:) NSNumber *sessionActivationWaitTime;
@property (retain, nonatomic, setter=set_setQueueCommandSendTime:) NSNumber *setQueueCommandSendTime;
@property (retain, nonatomic, setter=set_siriRefId:) NSString *siriRefId;
@property (retain, nonatomic, setter=set_subscriptionAssetLoadWaitTime:) NSNumber *subscriptionAssetLoadWaitTime;
@property (retain, nonatomic, setter=set_subscriptionType:) NSNumber *subscriptionType;
@property (retain, nonatomic, setter=set_suzeLeaseWaitTime:) NSNumber *suzeLeaseWaitTime;


+(id)playMetricsWithErrorSignature:(id)arg0 event:(id)arg1 cursor:(id)arg2 ;
+(id)playMetricsWithFirstFrameEvent:(id)arg0 cursor:(id)arg1 ;
-(id)description;
-(id)humanDescription;
-(id)init;
-(void)addAssetLoadInfoWithCursor:(id)arg0 itemIDPayload:(id)arg1 ;
-(void)addEnvironmentInfoWithCursor:(id)arg0 ;
-(void)addPlaybackBehaviorWithCursor:(id)arg0 ;
-(void)addQueueMetadata:(id)arg0 ;
-(void)addSharePlayWithCursor:(id)arg0 ;


@end


#endif