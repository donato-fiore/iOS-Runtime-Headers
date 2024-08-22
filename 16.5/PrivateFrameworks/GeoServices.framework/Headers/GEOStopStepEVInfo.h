// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSTOPSTEPEVINFO_H
#define GEOSTOPSTEPEVINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOStopStepEVInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _gainedBatteryPercentage;
    NSUInteger _muid;
    CGFloat _remainingBatteryPercentage;
    unsigned int _chargingTime;
    unsigned int _gainedBatteryCharge;
    unsigned int _gainedTravelRange;
    unsigned int _zilchPathIndex;
    ? _flags;
}


@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) unsigned int gainedBatteryCharge;
@property (nonatomic) CGFloat gainedBatteryPercentage;
@property (nonatomic) unsigned int gainedTravelRange;
@property (nonatomic) BOOL hasChargingTime;
@property (nonatomic) BOOL hasGainedBatteryCharge;
@property (nonatomic) BOOL hasGainedBatteryPercentage;
@property (nonatomic) BOOL hasGainedTravelRange;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) CGFloat remainingBatteryPercentage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif