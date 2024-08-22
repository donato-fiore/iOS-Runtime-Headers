// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOEVSTEPFEEDBACKINFO_H
#define GEOEVSTEPFEEDBACKINFO_H

@class PBCodable;
@protocol NSCopying;



@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying>

 {
    unsigned int _remainingBatteryCharge;
    unsigned int _remainingBatteryPercentage;
    unsigned int _remainingTravelRange;
    unsigned int _stateOfChargeDiff;
    ? _flags;
}


@property (nonatomic) BOOL hasRemainingBatteryCharge;
@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) BOOL hasRemainingTravelRange;
@property (nonatomic) BOOL hasStateOfChargeDiff;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic) unsigned int stateOfChargeDiff;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif