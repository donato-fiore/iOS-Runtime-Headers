// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPTRANSITSTORAGELINE_H
#define MSPTRANSITSTORAGELINE_H

@class PBCodable, PBUnknownFields, NSString, GEOMapItemIdentifier, GEOLatLng, NSArray;
@protocol GEOTransitLine, NSCopying, GEOTransitArtworkDataSource, GEOTransitSystem;


#import "MSPTransitStorageArtwork.h"
#import "MSPTransitStorageSystem.h"

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *alternateArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork; // ivar: _alternateArtwork
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork; // ivar: _artwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlternateArtwork;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) BOOL hasLocationHint;
@property (readonly, nonatomic) BOOL hasModeArtwork;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSystem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hasheaderArtwork; // ivar: _hasheaderArtwork
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *headerArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *headerArtwork; // ivar: _headerArtwork
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) NSString *lineColorString;
@property (retain, nonatomic) NSString *lineColorString; // ivar: _lineColorString
@property (retain, nonatomic) GEOLatLng *locationHint; // ivar: _locationHint
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *modeArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *modeArtwork; // ivar: _modeArtwork
@property (readonly, nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *system;
@property (retain, nonatomic) MSPTransitStorageSystem *system; // ivar: _system
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)hasHeaderArtwork;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithLine:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif