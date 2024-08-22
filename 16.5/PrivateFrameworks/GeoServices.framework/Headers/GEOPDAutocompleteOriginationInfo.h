// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDAUTOCOMPLETEORIGINATIONINFO_H
#define GEOPDAUTOCOMPLETEORIGINATIONINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDAutocompleteOriginationRoutePlanningParameters.h"

@interface GEOPDAutocompleteOriginationInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteOriginationRoutePlanningParameters *_routePlanningParameters;
    int _autocompleteOriginationType;
    ? _flags;
}


@property (nonatomic) int autocompleteOriginationType;
@property (nonatomic) BOOL hasAutocompleteOriginationType;
@property (readonly, nonatomic) BOOL hasRoutePlanningParameters;
@property (retain, nonatomic) GEOPDAutocompleteOriginationRoutePlanningParameters *routePlanningParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autocompleteOriginationTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAutocompleteOriginationType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif