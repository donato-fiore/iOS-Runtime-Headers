// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLECANDIDATEWIDGETUTILITIES_H
#define PXPEOPLECANDIDATEWIDGETUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXPeopleCandidateWidgetUtilities : NSObject



+(BOOL)_pastMidnightBufferThreshold;
+(BOOL)shouldFetchCandidatesForPerson:(id)arg0 forDaysDictionary:(id)arg1 ;
+(id)_dateKeyForDay:(id)arg0 ;
+(id)_dateKeyForToday;
+(id)_dateKeyForTomorrow;
+(id)_localTimeZoneFormatStringForDate:(id)arg0 ;
+(id)_tomorrow;
+(id)insertPerson:(id)arg0 forDaysDictionary:(id)arg1 ;
+(id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)arg0 ;


@end


#endif