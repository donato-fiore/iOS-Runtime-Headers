// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDPLACESUMMARYFORMAT_H
#define GEOPDPLACESUMMARYFORMAT_H

@class PBCodable;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"
#import "GEOMapItemIdentifier.h"

@interface GEOPDPlaceSummaryFormat : PBCodable <NSCopying>

 {
    GEOPDMapsIdentifier *_tapPlaceId;
    unsigned int _endIndex;
    int _formatType;
    unsigned int _startIndex;
    ? _flags;
}


@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int formatType;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) BOOL hasFormatType;
@property (nonatomic) BOOL hasStartIndex;
@property (readonly, nonatomic) BOOL hasTapPlaceId;
@property (nonatomic) unsigned int startIndex;
@property (retain, nonatomic) GEOPDMapsIdentifier *tapPlaceId;
@property (readonly, nonatomic) GEOMapItemIdentifier *tappableEntryIdentifier;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formatTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFormatType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif