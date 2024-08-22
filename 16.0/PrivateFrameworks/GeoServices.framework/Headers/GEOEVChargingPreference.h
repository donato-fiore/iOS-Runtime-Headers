// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOEVCHARGINGPREFERENCE_H
#define GEOEVCHARGINGPREFERENCE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOPreferenceEntity.h"

@interface GEOEVChargingPreference : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOPreferenceEntity *_preferenceEntity;
    int _preferenceType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPreferenceEntity;
@property (nonatomic) BOOL hasPreferenceType;
@property (retain, nonatomic) GEOPreferenceEntity *preferenceEntity;
@property (nonatomic) int preferenceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)preferenceTypeAsString:(int)arg0 ;
-(int)StringAsPreferenceType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif