// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OTESCROWRECORDMETADATA_H
#define OTESCROWRECORDMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "OTEscrowRecordMetadataClientMetadata.h"

@interface OTEscrowRecordMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *backupKeybagDigest; // ivar: _backupKeybagDigest
@property (retain, nonatomic) NSString *bottleId; // ivar: _bottleId
@property (retain, nonatomic) NSString *bottleValidity; // ivar: _bottleValidity
@property (retain, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata; // ivar: _clientMetadata
@property (retain, nonatomic) NSData *escrowedSpki; // ivar: _escrowedSpki
@property (readonly, nonatomic) BOOL hasBackupKeybagDigest;
@property (readonly, nonatomic) BOOL hasBottleId;
@property (readonly, nonatomic) BOOL hasBottleValidity;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasEscrowedSpki;
@property (readonly, nonatomic) BOOL hasPeerInfo;
@property (nonatomic) BOOL hasSecureBackupTimestamp;
@property (nonatomic) BOOL hasSecureBackupUsesMultipleIcscs;
@property (readonly, nonatomic) BOOL hasSerial;
@property (retain, nonatomic) NSData *peerInfo; // ivar: _peerInfo
@property (nonatomic) NSUInteger secureBackupTimestamp; // ivar: _secureBackupTimestamp
@property (nonatomic) NSUInteger secureBackupUsesMultipleIcscs; // ivar: _secureBackupUsesMultipleIcscs
@property (retain, nonatomic) NSString *serial; // ivar: _serial


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