// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPRATINGVALUE_H
#define GEORPRATINGVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLocalizedString.h"

@interface GEORPRatingValue : PBCodable <NSCopying>

 {
    GEOLocalizedString *_categoryName;
    int _score;
    ? _flags;
}


@property (retain, nonatomic) GEOLocalizedString *categoryName;
@property (readonly, nonatomic) BOOL hasCategoryName;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int score;


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