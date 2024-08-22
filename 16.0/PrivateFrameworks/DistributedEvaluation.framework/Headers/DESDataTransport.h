// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESDATATRANSPORT_H
#define DESDATATRANSPORT_H

@class PBCodable;
@protocol NSCopying;


#import "DESBfloat16Transport.h"
#import "DESBinary32Transport.h"
#import "DESBinary64Transport.h"

@interface DESDataTransport : PBCodable <NSCopying>



@property (retain, nonatomic) DESBfloat16Transport *bfloat16; // ivar: _bfloat16
@property (retain, nonatomic) DESBinary32Transport *binary32; // ivar: _binary32
@property (retain, nonatomic) DESBinary64Transport *binary64; // ivar: _binary64
@property (readonly, nonatomic) BOOL hasBfloat16;
@property (readonly, nonatomic) BOOL hasBinary32;
@property (readonly, nonatomic) BOOL hasBinary64;


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