// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITCLOUDSYNC_H
#define AWDHOMEKITCLOUDSYNC_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitCloudSync : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int dataSyncState; // ivar: _dataSyncState
@property (nonatomic) unsigned int fetchCount; // ivar: _fetchCount
@property (nonatomic) BOOL hasDataSyncState;
@property (nonatomic) BOOL hasDecryptionFailed; // ivar: _hasDecryptionFailed
@property (nonatomic) BOOL hasFetchCount;
@property (nonatomic) BOOL hasHasDecryptionFailed;
@property (nonatomic) BOOL hasHomeDataMegabytesFetched;
@property (nonatomic) BOOL hasHomeDataMegabytesPushed;
@property (nonatomic) BOOL hasHomeManagerFetchCount;
@property (nonatomic) BOOL hasHomeManagerUploadCount;
@property (nonatomic) BOOL hasHomeZoneFetchCount;
@property (nonatomic) BOOL hasHomeZoneUploadCount;
@property (nonatomic) BOOL hasLastDecryptionFailed;
@property (nonatomic) BOOL hasLegacyHomeDataMegabytesFetched;
@property (nonatomic) BOOL hasLegacyHomeDataMegabytesPushed;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUploadCount;
@property (nonatomic) BOOL hasUploadErrorCount;
@property (nonatomic) BOOL hasUploadMaximumDelayReached;
@property (nonatomic) unsigned int homeDataMegabytesFetched; // ivar: _homeDataMegabytesFetched
@property (nonatomic) unsigned int homeDataMegabytesPushed; // ivar: _homeDataMegabytesPushed
@property (nonatomic) unsigned int homeManagerFetchCount; // ivar: _homeManagerFetchCount
@property (nonatomic) unsigned int homeManagerUploadCount; // ivar: _homeManagerUploadCount
@property (nonatomic) unsigned int homeZoneFetchCount; // ivar: _homeZoneFetchCount
@property (nonatomic) unsigned int homeZoneUploadCount; // ivar: _homeZoneUploadCount
@property (nonatomic) BOOL lastDecryptionFailed; // ivar: _lastDecryptionFailed
@property (nonatomic) unsigned int legacyHomeDataMegabytesFetched; // ivar: _legacyHomeDataMegabytesFetched
@property (nonatomic) unsigned int legacyHomeDataMegabytesPushed; // ivar: _legacyHomeDataMegabytesPushed
@property (nonatomic) unsigned int pushCount; // ivar: _pushCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSMutableArray *topErrors; // ivar: _topErrors
@property (retain, nonatomic) NSMutableArray *topReasons; // ivar: _topReasons
@property (nonatomic) unsigned int uploadCount; // ivar: _uploadCount
@property (nonatomic) unsigned int uploadErrorCount; // ivar: _uploadErrorCount
@property (nonatomic) BOOL uploadMaximumDelayReached; // ivar: _uploadMaximumDelayReached


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataSyncStateAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topErrorsAtIndex:(NSUInteger)arg0 ;
-(id)topReasonsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDataSyncState:(id)arg0 ;
-(void)addTopErrors:(id)arg0 ;
-(void)addTopReasons:(id)arg0 ;
-(void)clearTopErrors;
-(void)clearTopReasons;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif