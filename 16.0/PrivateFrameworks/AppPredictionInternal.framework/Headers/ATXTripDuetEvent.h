// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTRIPDUETEVENT_H
#define ATXTRIPDUETEVENT_H



#import "ATXDuetEvent.h"

@interface ATXTripDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly, nonatomic) CGFloat durationAtOrigin; // ivar: _durationAtOrigin
@property (readonly, nonatomic) NSUInteger origin; // ivar: _origin


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXTripDuetEvent:(id)arg0 ;
-(NSUInteger)rtLocationToBMSemanticLocation:(NSInteger)arg0 ;
-(id)convertToUpcomingCommuteEventWithWindowDuration:(CGFloat)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithCurrentContextStoreValues;
-(id)initWithCurrentContextStoreValuesWithOriginLOI:(id)arg0 ignoreBeforeDate:(id)arg1 ;
-(id)initWithOrigin:(NSUInteger)arg0 destination:(NSUInteger)arg1 durationAtOrigin:(CGFloat)arg2 startDate:(id)arg3 endDate:(id)arg4 ;


@end


#endif