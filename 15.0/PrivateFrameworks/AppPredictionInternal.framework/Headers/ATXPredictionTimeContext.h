// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPREDICTIONTIMECONTEXT_H
#define ATXPREDICTIONTIMECONTEXT_H

@class NSDate;


#import "ATXPredictionContextDomain.h"

@interface ATXPredictionTimeContext : ATXPredictionContextDomain {
    CGFloat _absoluteDate;
}


@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL dateInWeekend; // ivar: _dateInWeekend
@property (readonly, nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (readonly, nonatomic) int timeOfDay; // ivar: _timeOfDay


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionTimeContext:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithDate:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;


@end


#endif