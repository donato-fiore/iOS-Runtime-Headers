// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPTRANSITSTORAGELINEITEM_H
#define MSPTRANSITSTORAGELINEITEM_H

@class PBCodable, PBUnknownFields, NSString, GEOMapItemIdentifier, NSArray, NSMutableArray, GEOMapRegion;
@protocol GEOTransitLineItem, NSCopying, GEOTransitArtworkDataSource, GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitSystem;


#import "MSPTransitStorageLine.h"
#import "MSPTransitStorageAttribution.h"

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *alternateArtwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (readonly, nonatomic) NSObject<GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<GEOEncyclopedicInfo> *encyclopedicInfo;
@property (readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) BOOL hasIncidentComponent;
@property (readonly, nonatomic) BOOL hasLine;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) BOOL hasStoredMapRegion;
@property (readonly, nonatomic) BOOL hasTransitAttribution;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *headerArtwork;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSArray *incidents;
@property (retain, nonatomic) NSMutableArray *incidents; // ivar: _incidents
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property (readonly, nonatomic) NSArray *labelItems;
@property (retain, nonatomic) MSPTransitStorageLine *line; // ivar: _line
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *modeArtwork;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (retain, nonatomic) GEOMapRegion *storedMapRegion; // ivar: _storedMapRegion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *system;
@property (retain, nonatomic) MSPTransitStorageAttribution *transitAttribution; // ivar: _transitAttribution
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)incidentsAtIndex:(NSUInteger)arg0 ;
-(id)initWithLineItem:(id)arg0 ;
-(void)addIncidents:(id)arg0 ;
-(void)clearIncidents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif