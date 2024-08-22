// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPTRANSITPOICORRECTIONS_H
#define GEORPTRANSITPOICORRECTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEORPAccessPointCorrections.h"
#import "GEORPAmenityCorrections.h"
#import "GEORPPlaceContainmentCorrections.h"
#import "GEORPCorrectedCoordinate.h"
#import "GEORPMapLocation.h"

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPPlaceContainmentCorrections *_containmentCorrections;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    NSString *_name;
    NSString *_originalName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _lineScheduleDelay;
    BOOL _lineShapeIncorrect;
    ? _flags;
}


@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (retain, nonatomic) GEORPAmenityCorrections *amenity;
@property (retain, nonatomic) NSMutableArray *businessHours;
@property (retain, nonatomic) GEORPPlaceContainmentCorrections *containmentCorrections;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (readonly, nonatomic) BOOL hasAccessPoint;
@property (readonly, nonatomic) BOOL hasAmenity;
@property (readonly, nonatomic) BOOL hasContainmentCorrections;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasLineScheduleDelay;
@property (nonatomic) BOOL hasLineShapeIncorrect;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (nonatomic) BOOL lineScheduleDelay;
@property (nonatomic) BOOL lineShapeIncorrect;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)businessHoursAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addBusinessHours:(id)arg0 ;
-(void)clearBusinessHours;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif