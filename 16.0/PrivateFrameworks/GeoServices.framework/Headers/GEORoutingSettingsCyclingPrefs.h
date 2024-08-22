// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOROUTINGSETTINGSCYCLINGPREFS_H
#define GEOROUTINGSETTINGSCYCLINGPREFS_H

@class PBCodable;
@protocol NSCopying;



@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying>

 {
    BOOL _autoRecordWorkout;
    BOOL _avoidBusyRoads;
    BOOL _avoidHills;
    BOOL _avoidStairs;
    BOOL _eBike;
    ? _flags;
}


@property (nonatomic) BOOL autoRecordWorkout;
@property (nonatomic) BOOL avoidBusyRoads;
@property (nonatomic) BOOL avoidHills;
@property (nonatomic) BOOL avoidStairs;
@property (nonatomic) BOOL eBike;
@property (nonatomic) BOOL hasAutoRecordWorkout;
@property (nonatomic) BOOL hasAvoidBusyRoads;
@property (nonatomic) BOOL hasAvoidHills;
@property (nonatomic) BOOL hasAvoidStairs;
@property (nonatomic) BOOL hasEBike;


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