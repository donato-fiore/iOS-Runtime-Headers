// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPINTENTDUETDATAPROVIDER_H
#define ATXAPPINTENTDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 ;


@end


#endif