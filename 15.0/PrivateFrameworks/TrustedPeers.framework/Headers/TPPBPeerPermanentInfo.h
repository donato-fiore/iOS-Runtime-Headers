// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBPEERPERMANENTINFO_H
#define TPPBPEERPERMANENTINFO_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface TPPBPeerPermanentInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *encryptionPubKey; // ivar: _encryptionPubKey
@property (nonatomic) NSUInteger epoch; // ivar: _epoch
@property (readonly, nonatomic) BOOL hasEncryptionPubKey;
@property (nonatomic) BOOL hasEpoch;
@property (readonly, nonatomic) BOOL hasMachineId;
@property (readonly, nonatomic) BOOL hasModelId;
@property (readonly, nonatomic) BOOL hasSigningPubKey;
@property (retain, nonatomic) NSString *machineId; // ivar: _machineId
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) NSData *signingPubKey; // ivar: _signingPubKey


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