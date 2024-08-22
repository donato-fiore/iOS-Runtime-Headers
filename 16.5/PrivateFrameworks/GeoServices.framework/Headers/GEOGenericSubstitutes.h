// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGENERICSUBSTITUTES_H
#define GEOGENERICSUBSTITUTES_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEOGenericSubstitutes : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_substitute;
    int _waypointCategory;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasSubstitute;
@property (nonatomic) BOOL hasWaypointCategory;
@property (retain, nonatomic) GEOFormattedString *substitute;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int waypointCategory;


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
-(id)waypointCategoryAsString:(int)arg0 ;
-(int)StringAsWaypointCategory:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif