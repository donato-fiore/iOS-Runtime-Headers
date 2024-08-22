// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEROUTINELOCATION_H
#define HDCODABLEROUTINELOCATION_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface HDCodableRoutineLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSData *geoData; // ivar: _geoData
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLocationOfInterestType;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasUncertainty;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) int locationOfInterestType; // ivar: _locationOfInterestType
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat uncertainty; // ivar: _uncertainty
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) NSMutableArray *visits; // ivar: _visits


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationOfInterestTypeAsString:(int)arg0 ;
-(id)visitsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsLocationOfInterestType:(id)arg0 ;
-(void)addVisits:(id)arg0 ;
-(void)clearVisits;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif