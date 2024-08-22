// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXTRIPDUETDATAPROVIDER_H
#define ATXTRIPDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXTripDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 limit:(NSUInteger)arg3 ascending:(BOOL)arg4 ;
-(id)groupTripsFromPublisher:(id)arg0 startTimestamp:(CGFloat)arg1 endTimestamp:(CGFloat)arg2 ;


@end


#endif