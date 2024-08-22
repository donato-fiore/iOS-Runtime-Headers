// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOIMPRESSIONOBJECTID_H
#define GEOIMPRESSIONOBJECTID_H

@class PBCodable;
@protocol NSCopying;



@interface GEOImpressionObjectId : PBCodable <NSCopying>

 {
    NSUInteger _high;
    NSUInteger _low;
    ? _flags;
}


@property (nonatomic) BOOL hasHigh;
@property (nonatomic) BOOL hasLow;
@property (nonatomic) NSUInteger high;
@property (nonatomic) NSUInteger low;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif