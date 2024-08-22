// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLPBUNLOCKHISTORYITEM_H
#define SCLPBUNLOCKHISTORYITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SCLPBUnlockHistoryItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasScheduleEndHour;
@property (nonatomic) BOOL hasScheduleEndMinute;
@property (nonatomic) BOOL hasScheduleStartHour;
@property (nonatomic) BOOL hasScheduleStartMinute;
@property (nonatomic) BOOL hasStartTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) unsigned int scheduleEndHour; // ivar: _scheduleEndHour
@property (nonatomic) unsigned int scheduleEndMinute; // ivar: _scheduleEndMinute
@property (nonatomic) unsigned int scheduleStartHour; // ivar: _scheduleStartHour
@property (nonatomic) unsigned int scheduleStartMinute; // ivar: _scheduleStartMinute
@property (nonatomic) CGFloat startTimeIntervalSinceReferenceDate; // ivar: _startTimeIntervalSinceReferenceDate
@property (retain, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif