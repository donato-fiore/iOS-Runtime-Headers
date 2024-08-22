// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCALENDARSCRUBBERDATASOURCE_H
#define HUCALENDARSCRUBBERDATASOURCE_H

@class NSHashTable, HMCameraClipManager, NSArray, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface HUCalendarScrubberDataSource : NSObject

@property (retain, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (weak, nonatomic) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (retain, nonatomic) NSArray *dates; // ivar: _dates
@property (retain, nonatomic) NSMutableDictionary *datesContainingClips; // ivar: _datesContainingClips
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)eventExistsForItemAtIndexPath:(id)arg0 ;
-(BOOL)eventExistsOnDate:(id)arg0 ;
-(NSInteger)dayOfMonthForItemAtIndexPath:(id)arg0 ;
-(NSUInteger)totalNumberOfWeeks;
-(id)dateAtIndexPath:(id)arg0 ;
-(id)dayOfWeekForItemAtIndexPath:(id)arg0 ;
-(id)indexPathForDate:(id)arg0 ;
-(id)init;
-(id)initWithCameraClipManager:(id)arg0 ;
-(id)shortMonthNameForItemAtIndexPath:(id)arg0 ;
-(void)_updateDateBoundariesIfNeeded;
-(void)addChangeObserver:(id)arg0 ;
-(void)loadDatesContainingClips;
-(void)reloadDates;
-(void)removeChangeObserver:(id)arg0 ;
-(void)removeEvents:(id)arg0 ;
-(void)updateEvents:(id)arg0 ;


@end


#endif