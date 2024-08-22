// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASELFLOGGERMWTMUSICMETADATA_H
#define SASELFLOGGERMWTMUSICMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SASelfLoggerMWTMusicMetadata : NSObject {
    ? errorResolutionType;
    ? audioQueueType;
}


@property (nonatomic) int assetEndPoint; // ivar: assetEndPoint
@property (nonatomic) int assetLocation; // ivar: assetLocation
@property (nonatomic) int assetSource; // ivar: assetSource
@property (nonatomic, copy) NSString *audioQueueType;
@property (nonatomic) unsigned int cmInitialStartupItemCreationToLtluDurationInMs; // ivar: cmInitialStartupItemCreationToLtluDurationInMs
@property (nonatomic) unsigned int cmInitialStartupItemCreationToReadyToPlayDurationInMs; // ivar: cmInitialStartupItemCreationToReadyToPlayDurationInMs
@property (nonatomic) unsigned int contentConnectionTlsHandshakeDurationInMs; // ivar: contentConnectionTlsHandshakeDurationInMs
@property (nonatomic) unsigned int contentFirstSegmentDurationInMs; // ivar: contentFirstSegmentDurationInMs
@property (nonatomic) int endPointType; // ivar: endPointType
@property (nonatomic, copy) NSString *errorResolutionType;
@property (nonatomic) unsigned int formatBitDepth; // ivar: formatBitDepth
@property (nonatomic) unsigned int formatBitrate; // ivar: formatBitrate
@property (nonatomic) unsigned int formatChannels; // ivar: formatChannels
@property (nonatomic) int formatCodec; // ivar: formatCodec
@property (nonatomic) int formatLayout; // ivar: formatLayout
@property (nonatomic) unsigned int formatLayoutValue; // ivar: formatLayoutValue
@property (nonatomic) unsigned int formatSampleRate; // ivar: formatSampleRate
@property (nonatomic) int formatTier; // ivar: formatTier
@property (nonatomic) BOOL hasBagWaitTime; // ivar: hasBagWaitTime
@property (nonatomic) BOOL hasLeaseWaitTime; // ivar: hasLeaseWaitTime
@property (nonatomic) BOOL hasLookupWaitTime; // ivar: hasLookupWaitTime
@property (nonatomic) BOOL hasMediaRedownloadWaitTime; // ivar: hasMediaRedownloadWaitTime
@property (nonatomic) BOOL hasSubscriptionAssetLoadWaitTime; // ivar: hasSubscriptionAssetLoadWaitTime
@property (nonatomic) BOOL hasSuzeLeaseWaitTime; // ivar: hasSuzeLeaseWaitTime
@property (nonatomic) BOOL isAccountDataReady; // ivar: isAccountDataReady
@property (nonatomic) BOOL isAutoPlay; // ivar: isAutoPlay
@property (nonatomic) BOOL isDelegatedPlayback; // ivar: isDelegatedPlayback
@property (nonatomic) BOOL isFirstPlayAfterAppLaunch; // ivar: isFirstPlayAfterAppLaunch
@property (nonatomic) BOOL isHlsKeysReady; // ivar: isHlsKeysReady
@property (nonatomic) BOOL isInterruptingPlayback; // ivar: isInterruptingPlayback
@property (nonatomic) BOOL isLeaseReady; // ivar: isLeaseReady
@property (nonatomic) BOOL isMiniSinfAvailable; // ivar: isMiniSinfAvailable
@property (nonatomic) BOOL isNonDefaultUser; // ivar: isNonDefaultUser
@property (nonatomic) BOOL isOfflineKeyReady; // ivar: isOfflineKeyReady
@property (nonatomic) BOOL isOnlineKeyReady; // ivar: isOnlineKeyReady
@property (nonatomic) BOOL isPrimaryUser; // ivar: isPrimaryUser
@property (nonatomic) BOOL isRemoteSetQueue; // ivar: isRemoteSetQueue
@property (nonatomic) BOOL isSharePlayPlayback; // ivar: isSharePlayPlayback
@property (nonatomic) BOOL isShuffled; // ivar: isShuffled
@property (nonatomic) BOOL isStoreBagReady; // ivar: isStoreBagReady
@property (nonatomic) BOOL isSuzeLease; // ivar: isSuzeLease
@property (nonatomic) int musicDomain; // ivar: musicDomain
@property (nonatomic) int networkConnectionType; // ivar: networkConnectionType
@property (nonatomic) unsigned int numberOfSpeakers; // ivar: numberOfSpeakers
@property (nonatomic) int prefetchedMetadataSource; // ivar: prefetchedMetadataSource
@property (nonatomic) unsigned int primaryPlaylistConnectionTlsHandshakeDurationInMs; // ivar: primaryPlaylistConnectionTlsHandshakeDurationInMs
@property (nonatomic) unsigned int primaryPlaylistRequestDurationInMs; // ivar: primaryPlaylistRequestDurationInMs
@property (nonatomic) unsigned int queueSize; // ivar: queueSize
@property (nonatomic) int queueType; // ivar: queueType
@property (nonatomic) int routeConfiguration; // ivar: routeConfiguration
@property (nonatomic) int routeType; // ivar: routeType
@property (nonatomic) int streamingContentType; // ivar: streamingContentType
@property (nonatomic) unsigned int subPlaylistConnectionTlsHandshakeDurationInMs; // ivar: subPlaylistConnectionTlsHandshakeDurationInMs
@property (nonatomic) unsigned int subPlaylistRequestDurationInMs; // ivar: subPlaylistRequestDurationInMs
@property (nonatomic) int subscriptionType; // ivar: subscriptionType
@property (nonatomic) BOOL wasMediaLibraryDatabaseUpgraded; // ivar: wasMediaLibraryDatabaseUpgraded


-(id)init;


@end


#endif