// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCCURRENCECACHEDATASOURCE_H
#define OCCURRENCECACHEDATASOURCE_H

@class EKEventStore, NSSet, NSArray, NSString;
@protocol OccurrenceCacheDataSourceProtocol;

#import <Foundation/Foundation.h>


@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>

 {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    NSArray *_cachedDays;
    int _cachedDaysSeed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)cachedOccurrencesAreBeingGenerated;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(NSInteger)cachedDayCount;
-(NSInteger)countOfOccurrencesAtDayIndex:(NSInteger)arg0 ;
-(NSInteger)sectionForCachedOccurrencesOnDate:(id)arg0 ;
-(id)_cachedDays;
-(id)cachedOccurrenceAtIndexPath:(id)arg0 ;
-(id)dateAtDayIndex:(NSInteger)arg0 ;
-(id)initWithEventStore:(id)arg0 calendars:(id)arg1 ;
-(void)fetchDaysInBackgroundStartingFromSection:(NSInteger)arg0 ;
-(void)invalidate;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg0 ;
-(void)stopSearching;


@end


#endif