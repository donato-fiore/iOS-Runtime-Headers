// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEROUTINEPREDICTEDLOCATION_H
#define HDCODABLEROUTINEPREDICTEDLOCATION_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HDCodableRoutineLocation.h"

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSData *geoData; // ivar: _geoData
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (readonly, nonatomic) BOOL hasLocationOfInterest;
@property (nonatomic) BOOL hasModeOfTransportation;
@property (nonatomic) BOOL hasNextEntryTime;
@property (nonatomic) BOOL hasSourceType;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest; // ivar: _locationOfInterest
@property (nonatomic) int modeOfTransportation; // ivar: _modeOfTransportation
@property (nonatomic) CGFloat nextEntryTime; // ivar: _nextEntryTime
@property (nonatomic) int sourceType; // ivar: _sourceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modeOfTransportationAsString:(int)arg0 ;
-(id)sourceTypeAsString:(int)arg0 ;
-(int)StringAsModeOfTransportation:(id)arg0 ;
-(int)StringAsSourceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif