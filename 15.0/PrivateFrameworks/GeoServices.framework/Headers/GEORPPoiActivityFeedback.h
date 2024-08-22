// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPOIACTIVITYFEEDBACK_H
#define GEORPPOIACTIVITYFEEDBACK_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"

@interface GEORPPoiActivityFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _representativeHours;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isDataCorrect;
    BOOL _isDataUseful;
    BOOL _isVisualRepresentationValid;
    ? _flags;
}


@property (nonatomic) BOOL hasIsDataCorrect;
@property (nonatomic) BOOL hasIsDataUseful;
@property (nonatomic) BOOL hasIsVisualRepresentationValid;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL isDataCorrect;
@property (nonatomic) BOOL isDataUseful;
@property (nonatomic) BOOL isVisualRepresentationValid;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) *unsigned int representativeHours;
@property (readonly, nonatomic) NSUInteger representativeHoursCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)representativeHoursAtIndex:(NSUInteger)arg0 ;
-(void)addRepresentativeHours:(unsigned int)arg0 ;
-(void)clearRepresentativeHours;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif