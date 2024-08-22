// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MWTSCHEMAMWTMUSICMETADATAREPORTED_H
#define MWTSCHEMAMWTMUSICMETADATAREPORTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MWTSchemaMWTMusicMetadataReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int assetEndPoint; // ivar: _assetEndPoint
@property (copy, nonatomic) NSString *errorResolutionType; // ivar: _errorResolutionType
@property (nonatomic) unsigned int formatBitDepth; // ivar: _formatBitDepth
@property (nonatomic) unsigned int formatBitrate; // ivar: _formatBitrate
@property (nonatomic) unsigned int formatChannels; // ivar: _formatChannels
@property (nonatomic) int formatCodec; // ivar: _formatCodec
@property (nonatomic) int formatLayout; // ivar: _formatLayout
@property (nonatomic) unsigned int formatSampleRate; // ivar: _formatSampleRate
@property (nonatomic) int formatTier; // ivar: _formatTier
@property (nonatomic) BOOL hasAssetEndPoint;
@property (nonatomic) BOOL hasErrorResolutionType; // ivar: _hasErrorResolutionType
@property (nonatomic) BOOL hasFormatBitDepth;
@property (nonatomic) BOOL hasFormatBitrate;
@property (nonatomic) BOOL hasFormatChannels;
@property (nonatomic) BOOL hasFormatCodec;
@property (nonatomic) BOOL hasFormatLayout;
@property (nonatomic) BOOL hasFormatSampleRate;
@property (nonatomic) BOOL hasFormatTier;
@property (nonatomic) BOOL hasIsAccountDataReady;
@property (nonatomic) BOOL hasIsAutoPlay;
@property (nonatomic) BOOL hasIsDelegatedPlayback;
@property (nonatomic) BOOL hasIsFirstPlayAfterAppLaunch;
@property (nonatomic) BOOL hasIsHlsKeysReady;
@property (nonatomic) BOOL hasIsInterruptingPlayback;
@property (nonatomic) BOOL hasIsLeaseReady;
@property (nonatomic) BOOL hasIsMiniSinfAvailable;
@property (nonatomic) BOOL hasIsNonDefaultUser;
@property (nonatomic) BOOL hasIsOfflineKeyReady;
@property (nonatomic) BOOL hasIsOnlineKeyReady;
@property (nonatomic) BOOL hasIsPrimaryUser;
@property (nonatomic) BOOL hasIsRemoteSetQueue;
@property (nonatomic) BOOL hasIsSharePlayPlayback;
@property (nonatomic) BOOL hasIsShuffled;
@property (nonatomic) BOOL hasIsStoreBagReady;
@property (nonatomic) BOOL hasIsSuzeLease;
@property (nonatomic) BOOL hasMusicDomain;
@property (nonatomic) BOOL hasNetworkConnectionType;
@property (nonatomic) BOOL hasNumberOfSpeakers;
@property (nonatomic) BOOL hasPrefetchedMetadataSource;
@property (nonatomic) BOOL hasQueueSize;
@property (nonatomic) BOOL hasQueueType;
@property (nonatomic) BOOL hasRouteConfiguration;
@property (nonatomic) BOOL hasStreamingContentType;
@property (nonatomic) BOOL hasWasMediaLibraryDatabaseUpgraded;
@property (nonatomic) BOOL isAccountDataReady; // ivar: _isAccountDataReady
@property (nonatomic) BOOL isAutoPlay; // ivar: _isAutoPlay
@property (nonatomic) BOOL isDelegatedPlayback; // ivar: _isDelegatedPlayback
@property (nonatomic) BOOL isFirstPlayAfterAppLaunch; // ivar: _isFirstPlayAfterAppLaunch
@property (nonatomic) BOOL isHlsKeysReady; // ivar: _isHlsKeysReady
@property (nonatomic) BOOL isInterruptingPlayback; // ivar: _isInterruptingPlayback
@property (nonatomic) BOOL isLeaseReady; // ivar: _isLeaseReady
@property (nonatomic) BOOL isMiniSinfAvailable; // ivar: _isMiniSinfAvailable
@property (nonatomic) BOOL isNonDefaultUser; // ivar: _isNonDefaultUser
@property (nonatomic) BOOL isOfflineKeyReady; // ivar: _isOfflineKeyReady
@property (nonatomic) BOOL isOnlineKeyReady; // ivar: _isOnlineKeyReady
@property (nonatomic) BOOL isPrimaryUser; // ivar: _isPrimaryUser
@property (nonatomic) BOOL isRemoteSetQueue; // ivar: _isRemoteSetQueue
@property (nonatomic) BOOL isSharePlayPlayback; // ivar: _isSharePlayPlayback
@property (nonatomic) BOOL isShuffled; // ivar: _isShuffled
@property (nonatomic) BOOL isStoreBagReady; // ivar: _isStoreBagReady
@property (nonatomic) BOOL isSuzeLease; // ivar: _isSuzeLease
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int musicDomain; // ivar: _musicDomain
@property (nonatomic) int networkConnectionType; // ivar: _networkConnectionType
@property (nonatomic) unsigned int numberOfSpeakers; // ivar: _numberOfSpeakers
@property (nonatomic) int prefetchedMetadataSource; // ivar: _prefetchedMetadataSource
@property (nonatomic) unsigned int queueSize; // ivar: _queueSize
@property (nonatomic) int queueType; // ivar: _queueType
@property (nonatomic) int routeConfiguration; // ivar: _routeConfiguration
@property (nonatomic) int streamingContentType; // ivar: _streamingContentType
@property (nonatomic) BOOL wasMediaLibraryDatabaseUpgraded; // ivar: _wasMediaLibraryDatabaseUpgraded


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAssetEndPoint;
-(void)deleteErrorResolutionType;
-(void)deleteFormatBitDepth;
-(void)deleteFormatBitrate;
-(void)deleteFormatChannels;
-(void)deleteFormatCodec;
-(void)deleteFormatLayout;
-(void)deleteFormatSampleRate;
-(void)deleteFormatTier;
-(void)deleteIsAccountDataReady;
-(void)deleteIsAutoPlay;
-(void)deleteIsDelegatedPlayback;
-(void)deleteIsFirstPlayAfterAppLaunch;
-(void)deleteIsHlsKeysReady;
-(void)deleteIsInterruptingPlayback;
-(void)deleteIsLeaseReady;
-(void)deleteIsMiniSinfAvailable;
-(void)deleteIsNonDefaultUser;
-(void)deleteIsOfflineKeyReady;
-(void)deleteIsOnlineKeyReady;
-(void)deleteIsPrimaryUser;
-(void)deleteIsRemoteSetQueue;
-(void)deleteIsSharePlayPlayback;
-(void)deleteIsShuffled;
-(void)deleteIsStoreBagReady;
-(void)deleteIsSuzeLease;
-(void)deleteMusicDomain;
-(void)deleteNetworkConnectionType;
-(void)deleteNumberOfSpeakers;
-(void)deletePrefetchedMetadataSource;
-(void)deleteQueueSize;
-(void)deleteQueueType;
-(void)deleteRouteConfiguration;
-(void)deleteStreamingContentType;
-(void)deleteWasMediaLibraryDatabaseUpgraded;
-(void)writeTo:(id)arg0 ;


@end


#endif