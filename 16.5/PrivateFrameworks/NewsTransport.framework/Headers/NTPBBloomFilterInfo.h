// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBBLOOMFILTERINFO_H
#define NTPBBLOOMFILTERINFO_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBBloomFilterInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *bloomFilterData; // ivar: _bloomFilterData
@property (nonatomic) int hashFunctionCount; // ivar: _hashFunctionCount


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