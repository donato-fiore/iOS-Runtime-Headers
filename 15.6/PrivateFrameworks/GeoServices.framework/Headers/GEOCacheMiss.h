// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCACHEMISS_H
#define GEOCACHEMISS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOCacheMiss : PBCodable <NSCopying>

 {
    NSMutableArray *_errors;
    unsigned int _bytes;
    unsigned int _count;
    unsigned int _httpStatus;
    int _missType;
    int _requestorType;
    ? _flags;
}


@property (nonatomic) unsigned int bytes;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) BOOL hasMissType;
@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) unsigned int httpStatus;
@property (nonatomic) int missType;
@property (nonatomic) int requestorType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)missTypeAsString:(int)arg0 ;
-(id)requestorTypeAsString:(int)arg0 ;
-(int)StringAsMissType:(id)arg0 ;
-(int)StringAsRequestorType:(id)arg0 ;
-(void)addErrors:(id)arg0 ;
-(void)clearErrors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif