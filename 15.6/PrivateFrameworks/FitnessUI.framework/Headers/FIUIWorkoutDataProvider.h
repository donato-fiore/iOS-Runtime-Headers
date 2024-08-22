// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIWORKOUTDATAPROVIDER_H
#define FIUIWORKOUTDATAPROVIDER_H

@class HKHealthStore, NSMutableDictionary, NSMutableArray, HKAnchoredObjectQuery, NSCalendar, NSDate;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutDataProvider : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
    BOOL _shouldSortAscending;
    os_unfair_lock_s _lock;
}




-(BOOL)hasWorkouts;
-(id)allWorkouts;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 shouldSortAscending:(BOOL)arg1 ;
-(id)workoutsForDay:(id)arg0 ;
-(void)_commonInit;
-(void)_fetchAllWorkoutsFromDate:(id)arg0 ;
-(void)_handleAddedSamples:(id)arg0 ;
-(void)_handleRemovedObjects:(id)arg0 ;
-(void)_retryQuery:(id)arg0 ;
-(void)_retryQueryOnDidBecomeActiveWithDate:(id)arg0 ;
-(void)_runUpdateHandlers;
-(void)_timeZoneDidChange:(id)arg0 ;
-(void)addUpdateHandler:(id)arg0 ;
-(void)dealloc;
-(void)startFetchingFromDate:(id)arg0 ;
-(void)stopFetching;


@end


#endif