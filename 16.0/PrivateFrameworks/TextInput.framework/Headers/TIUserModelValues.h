// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERMODELVALUES_H
#define TIUSERMODELVALUES_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol TIUserModelDataStoring;

#import <Foundation/Foundation.h>

#import "TIAnalyticsMetricsContext.h"

@interface TIUserModelValues : NSObject {
    NSMutableDictionary *_transientCounters;
}


@property (readonly, nonatomic) TIAnalyticsMetricsContext *context; // ivar: _context
@property (readonly, nonatomic) NSDictionary *durableCounters; // ivar: _durableCounters
@property (readonly, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (readonly, nonatomic) NSDictionary *settingsDictionary; // ivar: _settingsDictionary
@property (readonly, nonatomic) NSObject<TIUserModelDataStoring> *userModelDataStore; // ivar: _userModelStore


-(id)aggregatedCountFromTransientCounterWithName:(id)arg0 forNumberOfDays:(int)arg1 fromLoadedDate:(id)arg2 ;
-(id)countsFromTransientCounterWithName:(id)arg0 forNumberOfDays:(int)arg1 fromLoadedDate:(id)arg2 ;
-(id)getTransientCounterForKey:(id)arg0 ;
-(id)initWithInputMode:(id)arg0 context:(id)arg1 userModelDataStore:(id)arg2 durableCounters:(id)arg3 settingsDictionary:(id)arg4 ;
-(id)settingValueFromName:(id)arg0 ;
-(int)indexFromCandidateLength:(int)arg0 forCounter:(id)arg1 ;
-(void)addDouble:(CGFloat)arg0 toCounterWithKey:(id)arg1 andCandidateLength:(int)arg2 ;
-(void)addEntry:(id)arg0 toCounter:(id)arg1 forDaysPrior:(int)arg2 ;
-(void)addInteger:(int)arg0 toCounterWithKey:(id)arg1 andCandidateLength:(int)arg2 ;
-(void)addToTransientCounterFromDatabaseEntry:(id)arg0 withWeeklyMetricKeys:(id)arg1 fromLoadedDate:(id)arg2 ;
-(void)extendCountersForWeeklyMetricKeys:(id)arg0 ;
-(void)loadTransientCounter:(id)arg0 forNumberOfDays:(int)arg1 fromLoadedDate:(id)arg2 ;
-(void)persistForDate:(id)arg0 ;


@end


#endif