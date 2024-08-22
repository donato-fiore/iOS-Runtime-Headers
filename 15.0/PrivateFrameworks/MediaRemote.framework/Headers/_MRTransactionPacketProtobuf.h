// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRTRANSACTIONPACKETPROTOBUF_H
#define _MRTRANSACTIONPACKETPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "_MRTransactionKeyProtobuf.h"

@interface _MRTransactionPacketProtobuf : PBCodable <NSCopying>

 {
    NSUInteger _totalLength;
    NSUInteger _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    ? _has;
}




+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDictionaryRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif