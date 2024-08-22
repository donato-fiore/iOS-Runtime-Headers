// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBBLENDINGSESSIONDEVICECONTEXT_H
#define ATXPBBLENDINGSESSIONDEVICECONTEXT_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBBlendingSessionDeviceContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int currentLOIType; // ivar: _currentLOIType
@property (nonatomic) BOOL dateInWeekend; // ivar: _dateInWeekend
@property (nonatomic) unsigned int dayOfWeek; // ivar: _dayOfWeek
@property (nonatomic) BOOL hasCurrentLOIType;
@property (nonatomic) BOOL hasDateInWeekend;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasLastUnlockMoreThan1HourAgo;
@property (nonatomic) BOOL hasLastUnlockMoreThan30MinutesAgo;
@property (nonatomic) BOOL hasSecondsBeforeBlendingUpdate;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) BOOL lastUnlockMoreThan1HourAgo; // ivar: _lastUnlockMoreThan1HourAgo
@property (nonatomic) BOOL lastUnlockMoreThan30MinutesAgo; // ivar: _lastUnlockMoreThan30MinutesAgo
@property (nonatomic) CGFloat secondsBeforeBlendingUpdate; // ivar: _secondsBeforeBlendingUpdate
@property (nonatomic) unsigned int timeOfDay; // ivar: _timeOfDay


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentLOITypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCurrentLOIType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif