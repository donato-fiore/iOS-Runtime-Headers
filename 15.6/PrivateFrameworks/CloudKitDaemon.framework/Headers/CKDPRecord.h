// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORD_H
#define CKDPRECORD_H

@class PBCodable, NSData, NSMutableArray, CKDPIdentifier, NSString, CKDPDate, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecordChainParent.h"
#import "CKDPProtectionInfo.h"
#import "CKDPShareIdentifier.h"
#import "CKDPShare.h"
#import "CKDPRecordStableUrl.h"
#import "CKDPStorageExpiration.h"
#import "CKDPDateStatistics.h"
#import "CKDPRecordType.h"

@interface CKDPRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPRecordChainParent *chainParent; // ivar: _chainParent
@property (retain, nonatomic) NSData *chainPrivateKey; // ivar: _chainPrivateKey
@property (retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo; // ivar: _chainProtectionInfo
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags; // ivar: _conflictLoserEtags
@property (retain, nonatomic) CKDPIdentifier *createdBy; // ivar: _createdBy
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) CKDPDate *expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL expired; // ivar: _expired
@property (retain, nonatomic) NSMutableArray *fields; // ivar: _fields
@property (readonly, nonatomic) BOOL hasChainParent;
@property (readonly, nonatomic) BOOL hasChainPrivateKey;
@property (readonly, nonatomic) BOOL hasChainProtectionInfo;
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasExpired;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (nonatomic) BOOL hasPermission;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasShareId;
@property (readonly, nonatomic) BOOL hasShareInfo;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (readonly, nonatomic) BOOL hasStorageExpiration;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasZoneishMasterKeyId;
@property (retain, nonatomic) CKDPIdentifier *modifiedBy; // ivar: _modifiedBy
@property (retain, nonatomic) NSString *modifiedByDevice; // ivar: _modifiedByDevice
@property (nonatomic) int permission; // ivar: _permission
@property (retain, nonatomic) NSMutableArray *pluginFields; // ivar: _pluginFields
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId
@property (retain, nonatomic) CKDPShare *shareInfo; // ivar: _shareInfo
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl; // ivar: _stableUrl
@property (retain, nonatomic) CKDPStorageExpiration *storageExpiration; // ivar: _storageExpiration
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics; // ivar: _timeStatistics
@property (retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs; // ivar: _tombstonedPublicKeyIDs
@property (retain, nonatomic) CKDPRecordType *type; // ivar: _type
@property (retain, nonatomic) NSData *zoneishMasterKeyId; // ivar: _zoneishMasterKeyId


+(id)recordFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)conflictLoserEtagsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldData;
-(id)fieldForKey:(id)arg0 ;
-(id)fieldsAtIndex:(NSUInteger)arg0 ;
-(id)permissionAsString:(int)arg0 ;
-(id)pluginFieldsAtIndex:(NSUInteger)arg0 ;
-(id)tombstonedPublicKeyIDsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPermission:(id)arg0 ;
-(void)_inflateFieldsFromData:(id)arg0 ;
-(void)addConflictLoserEtags:(id)arg0 ;
-(void)addFields:(id)arg0 ;
-(void)addPluginFields:(id)arg0 ;
-(void)addTombstonedPublicKeyIDs:(id)arg0 ;
-(void)clearConflictLoserEtags;
-(void)clearFields;
-(void)clearPluginFields;
-(void)clearTombstonedPublicKeyIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif