// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCACHEHIT_H
#define GEOCACHEHIT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOCacheHit : PBCodable <NSCopying>

 {
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    ? _flags;
}


@property (nonatomic) unsigned int bytes;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) BOOL hasTileSourceType;
@property (nonatomic) int requestorType;
@property (nonatomic) int tileSourceType;


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
-(id)requestorTypeAsString:(int)arg0 ;
-(id)tileSourceTypeAsString:(int)arg0 ;
-(int)StringAsRequestorType:(id)arg0 ;
-(int)StringAsTileSourceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif