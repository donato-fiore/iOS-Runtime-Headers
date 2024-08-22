// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITVEHICLEPOSITIONINFO_H
#define GEOTRANSITVEHICLEPOSITIONINFO_H

@class PBCodable, PBUnknownFields, NSMutableArray, NSString, NSArray;
@protocol GEOTransitVehicleEntries, NSCopying;



@interface GEOTransitVehiclePositionInfo : PBCodable <GEOTransitVehicleEntries, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_departureEntrys;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *departureEntrys;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger firstTripID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tripIDForNextUpcomingDeparture;
@property (readonly, copy, nonatomic) NSArray *tripIDs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, copy, nonatomic) NSArray *upcomingTripIDs;


+(BOOL)isValid:(id)arg0 ;
+(Class)departureEntryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)departureEntryAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addDepartureEntry:(id)arg0 ;
-(void)clearDepartureEntrys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif