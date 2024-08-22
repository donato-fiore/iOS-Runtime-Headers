// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPZONERETRIEVERESPONSEZONESUMMARY_H
#define CKDPZONERETRIEVERESPONSEZONESUMMARY_H

@class PBCodable, NSData, CKDPDate, NSString;
@protocol NSCopying;


#import "CKDPZoneCapabilities.h"
#import "CKDPZone.h"

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger assetQuotaUsage; // ivar: _assetQuotaUsage
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities; // ivar: _capabilities
@property (retain, nonatomic) NSData *clientChangeToken; // ivar: _clientChangeToken
@property (retain, nonatomic) NSData *currentServerContinuationToken; // ivar: _currentServerContinuationToken
@property (nonatomic) int deviceCount; // ivar: _deviceCount
@property (retain, nonatomic) CKDPDate *expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL expired; // ivar: _expired
@property (nonatomic) BOOL hasAssetQuotaUsage;
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (readonly, nonatomic) BOOL hasClientChangeToken;
@property (readonly, nonatomic) BOOL hasCurrentServerContinuationToken;
@property (nonatomic) BOOL hasDeviceCount;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL hasMetadataQuotaUsage;
@property (readonly, nonatomic) BOOL hasTargetZone;
@property (nonatomic) BOOL hasZoneKeyRollAllowed;
@property (readonly, nonatomic) BOOL hasZonePcsModificationDevice;
@property (readonly, nonatomic) BOOL hasZonePcsModificationTime;
@property (nonatomic) BOOL hasZoneishPcsNeedsRolled;
@property (nonatomic) NSInteger metadataQuotaUsage; // ivar: _metadataQuotaUsage
@property (retain, nonatomic) CKDPZone *targetZone; // ivar: _targetZone
@property (nonatomic) BOOL zoneKeyRollAllowed; // ivar: _zoneKeyRollAllowed
@property (retain, nonatomic) NSString *zonePcsModificationDevice; // ivar: _zonePcsModificationDevice
@property (retain, nonatomic) CKDPDate *zonePcsModificationTime; // ivar: _zonePcsModificationTime
@property (nonatomic) BOOL zoneishPcsNeedsRolled; // ivar: _zoneishPcsNeedsRolled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif