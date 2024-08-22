// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESLEEPSCHEDULE_H
#define HDCODABLESLEEPSCHEDULE_H

@class PBCodable, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableSleepSchedule : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger bedHour; // ivar: _bedHour
@property (nonatomic) NSInteger bedMinute; // ivar: _bedMinute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL friday; // ivar: _friday
@property (nonatomic) BOOL hasBedHour;
@property (nonatomic) BOOL hasBedMinute;
@property (nonatomic) BOOL hasFriday;
@property (nonatomic) BOOL hasMonday;
@property (nonatomic) BOOL hasOverrideDayIndex;
@property (readonly, nonatomic) BOOL hasSample;
@property (nonatomic) BOOL hasSaturday;
@property (nonatomic) BOOL hasSunday;
@property (nonatomic) BOOL hasThursday;
@property (nonatomic) BOOL hasTuesday;
@property (nonatomic) BOOL hasWakeHour;
@property (nonatomic) BOOL hasWakeMinute;
@property (nonatomic) BOOL hasWednesday;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL monday; // ivar: _monday
@property (nonatomic) NSInteger overrideDayIndex; // ivar: _overrideDayIndex
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (nonatomic) BOOL saturday; // ivar: _saturday
@property (nonatomic) BOOL sunday; // ivar: _sunday
@property (readonly) Class superclass;
@property (nonatomic) BOOL thursday; // ivar: _thursday
@property (nonatomic) BOOL tuesday; // ivar: _tuesday
@property (nonatomic) NSInteger wakeHour; // ivar: _wakeHour
@property (nonatomic) NSInteger wakeMinute; // ivar: _wakeMinute
@property (nonatomic) BOOL wednesday; // ivar: _wednesday


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)applyToObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif