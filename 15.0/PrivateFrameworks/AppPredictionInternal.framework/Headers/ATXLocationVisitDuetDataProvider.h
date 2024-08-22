// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXLOCATIONVISITDUETDATAPROVIDER_H
#define ATXLOCATIONVISITDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXLocationVisitDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 limit:(NSUInteger)arg3 ascending:(BOOL)arg4 ;


@end


#endif