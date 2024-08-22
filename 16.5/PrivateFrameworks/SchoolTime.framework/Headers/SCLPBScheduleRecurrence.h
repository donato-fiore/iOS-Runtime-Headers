// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLPBSCHEDULERECURRENCE_H
#define SCLPBSCHEDULERECURRENCE_H

@class PBCodable;
@protocol NSCopying;


#import "SCLPBTimeInterval.h"

@interface SCLPBScheduleRecurrence : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int day; // ivar: _day
@property (nonatomic) BOOL hasDay;
@property (readonly, nonatomic) BOOL hasTimeInterval;
@property (retain, nonatomic) SCLPBTimeInterval *timeInterval; // ivar: _timeInterval


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsDay:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif