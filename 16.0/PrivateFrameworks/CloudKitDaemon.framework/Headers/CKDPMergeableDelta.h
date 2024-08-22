// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPMERGEABLEDELTA_H
#define CKDPMERGEABLEDELTA_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "CKDPAsset.h"
#import "CKDPMergeableDeltaMetadata.h"

@interface CKDPMergeableDelta : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) CKDPAsset *encryptedAsset; // ivar: _encryptedAsset
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly, nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) BOOL hasEncryptedAsset;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasPayload;
@property (retain, nonatomic) CKDPMergeableDeltaMetadata *metadata; // ivar: _metadata
@property (nonatomic) int payload; // ivar: _payload


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)payloadAsString:(int)arg0 ;
-(int)StringAsPayload:(id)arg0 ;
-(void)clearOneofValuesForPayload;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif