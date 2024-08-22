// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBBUCKETGROUPCONFIG_H
#define NTPBBUCKETGROUPCONFIG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBBucketGroupConfig : PBCodable <NSCopying>



@property (nonatomic) NSInteger byteCount; // ivar: _byteCount
@property (nonatomic) NSInteger numberOfBuckets; // ivar: _numberOfBuckets
@property (nonatomic) NSInteger validUntilDate; // ivar: _validUntilDate
@property (nonatomic) int version; // ivar: _version


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