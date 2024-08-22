// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLPBTIMEINTERVAL_H
#define SCLPBTIMEINTERVAL_H

@class PBCodable;
@protocol NSCopying;


#import "SCLPBScheduleTime.h"

@interface SCLPBTimeInterval : PBCodable <NSCopying>



@property (retain, nonatomic) SCLPBScheduleTime *endTime; // ivar: _endTime
@property (readonly, nonatomic) BOOL hasEndTime;
@property (readonly, nonatomic) BOOL hasStartTime;
@property (retain, nonatomic) SCLPBScheduleTime *startTime; // ivar: _startTime


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