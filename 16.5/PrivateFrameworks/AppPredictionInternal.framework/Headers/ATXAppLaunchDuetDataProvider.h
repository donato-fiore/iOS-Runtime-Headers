// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPLAUNCHDUETDATAPROVIDER_H
#define ATXAPPLAUNCHDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXAppLaunchDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
+(id)biomePublisher:(id)arg0 andEndDate:(id)arg1 isIncluded:(id)arg2 ;


@end


#endif