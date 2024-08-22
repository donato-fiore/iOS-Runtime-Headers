// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPINCIDENTANNOTATIONDETAILS_H
#define GEORPINCIDENTANNOTATIONDETAILS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEORPUserLocationDetails.h"

@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_incidentId;
    GEOLatLng *_incidentLocation;
    GEORPUserLocationDetails *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _annotationType;
    int _incidentType;
    ? _flags;
}


@property (nonatomic) int annotationType;
@property (nonatomic) BOOL hasAnnotationType;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (readonly, nonatomic) BOOL hasIncidentLocation;
@property (nonatomic) BOOL hasIncidentType;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) NSString *incidentId;
@property (retain, nonatomic) GEOLatLng *incidentLocation;
@property (nonatomic) int incidentType;
@property (retain, nonatomic) GEORPUserLocationDetails *userLocation;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)annotationTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)incidentTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAnnotationType:(id)arg0 ;
-(int)StringAsIncidentType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif