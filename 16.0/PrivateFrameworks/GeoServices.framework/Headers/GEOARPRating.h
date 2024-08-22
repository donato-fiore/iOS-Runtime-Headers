// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOARPRATING_H
#define GEOARPRATING_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOARPRating : PBCodable <NSCopying>

 {
    NSString *_displayedText;
    BOOL _rating;
    ? _flags;
}


@property (retain, nonatomic) NSString *displayedText;
@property (readonly, nonatomic) BOOL hasDisplayedText;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL rating;


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