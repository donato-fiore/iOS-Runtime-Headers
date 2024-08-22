// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBWRAPPINGKEYMAPENTRY_H
#define NTPBWRAPPINGKEYMAPENTRY_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasWrappingKey;
@property (readonly, nonatomic) BOOL hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKey; // ivar: _wrappingKey
@property (retain, nonatomic) NSData *wrappingKeyId; // ivar: _wrappingKeyId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif