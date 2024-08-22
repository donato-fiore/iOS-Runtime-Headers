// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTAGEXPIRATION_H
#define NTPBTAGEXPIRATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTagExpiration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger expireUtcTime; // ivar: _expireUtcTime
@property (nonatomic) BOOL hasExpireUtcTime;
@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId; // ivar: _tagId


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