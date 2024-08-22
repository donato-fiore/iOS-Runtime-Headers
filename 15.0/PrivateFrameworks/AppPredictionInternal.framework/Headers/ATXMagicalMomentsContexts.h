// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMAGICALMOMENTSCONTEXTS_H
#define ATXMAGICALMOMENTSCONTEXTS_H


#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsContexts : NSObject



+(NSUInteger)getMinTemporalDistanceFromDate:(id)arg0 toVisitsToLOI:(id)arg1 ;
+(NSUInteger)minDistanceFromDate:(id)arg0 toDateRange:(struct _NSRange )arg1 ;
+(id)eventIdentifierPredicateForValue:(id)arg0 ;
+(id)getCurrentLOI;
+(id)locationOfInterestForDate:(id)arg0 dateIntervalForSearch:(id)arg1 ;
+(id)loiPredicateForUUIDString:(id)arg0 ;
+(id)partOfWeekPredicatesUsingStartDate:(BOOL)arg0 ;
+(id)timeOfDayPredicatesWithRequestedDurationInHours:(NSUInteger)arg0 shouldPredicateOnStartDate:(BOOL)arg1 ;


@end


#endif