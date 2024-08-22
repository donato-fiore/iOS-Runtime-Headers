// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMICROLOCATIONVISITDUETDATAPROVIDER_H
#define ATXMICROLOCATIONVISITDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXMicrolocationVisitDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
-(id)fetchEventsBetweenStartDate:(id)arg0 andEndDate:(id)arg1 withPredicates:(id)arg2 ;
-(void)adjustDatesForMicrolocationEvents:(id)arg0 ;


@end


#endif