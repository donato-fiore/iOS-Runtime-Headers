// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLEHANDWASHINGEVENT_H
#define HKCODABLEHANDWASHINGEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableHandwashingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger averageDailyCount; // ivar: _averageDailyCount
@property (retain, nonatomic) HKCodableQuantity *averageDuration; // ivar: _averageDuration
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasAverageDailyCount;
@property (readonly, nonatomic) BOOL hasAverageDuration;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasMeetsGoal;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL meetsGoal; // ivar: _meetsGoal
@property (nonatomic) CGFloat startDate; // ivar: _startDate


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