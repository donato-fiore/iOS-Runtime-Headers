// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRTRANSACTIONPACKETPROTOBUF_H
#define _MRTRANSACTIONPACKETPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "_MRTransactionKeyProtobuf.h"

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasPacketData;
@property (nonatomic) BOOL hasTotalLength;
@property (nonatomic) BOOL hasTotalWritePosition;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _MRTransactionKeyProtobuf *key; // ivar: _key
@property (retain, nonatomic) NSData *packetData; // ivar: _packetData
@property (nonatomic) NSUInteger totalLength; // ivar: _totalLength
@property (nonatomic) NSUInteger totalWritePosition; // ivar: _totalWritePosition


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDictionaryRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif