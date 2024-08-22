// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMOBILITYANALYTICSUTILITIES_H
#define HKMOBILITYANALYTICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKMobilityAnalyticsUtilities : NSObject



+(id)activeWatchProductType;
+(id)ageWithHealthStore:(id)arg0 error:(*id)arg1 ;
+(id)biologicalSexWithHealthStore:(id)arg0 error:(*id)arg1 ;
+(id)numberOfDaysBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)payloadStringForBiologicalSex:(id)arg0 ;
+(id)payloadValueForAge:(id)arg0 ;
+(id)yearsBetweenStartDateComponents:(id)arg0 endDate:(id)arg1 ;


@end


#endif