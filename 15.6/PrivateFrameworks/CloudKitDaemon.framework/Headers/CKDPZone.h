// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPZONE_H
#define CKDPZONE_H

@class PBCodable, NSMutableArray, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"
#import "CKDPShareIdentifier.h"
#import "CKDPRecordStableUrl.h"
#import "CKDPStorageExpiration.h"

@interface CKDPZone : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (readonly, nonatomic) BOOL hasShareId;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves; // ivar: _protectionInfoKeysToRemoves
@property (retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // ivar: _recordProtectionInfo
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl; // ivar: _stableUrl
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration; // ivar: _storageExpiration
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)protectionInfoKeysToRemoveAtIndex:(NSUInteger)arg0 ;
-(void)addProtectionInfoKeysToRemove:(id)arg0 ;
-(void)clearProtectionInfoKeysToRemoves;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif