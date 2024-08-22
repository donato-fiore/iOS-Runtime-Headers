// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARFILTER_H
#define EKCALENDARFILTER_H

@class NSMutableSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKCalendarFilter : NSObject <NSCopying>

 {
    _opaque_pthread_mutex_t _lock;
    NSMutableSet *_calendarUIDs;
    ? _database;
    int _entityType;
}


@property (nonatomic) BOOL includeDisabledStores; // ivar: _includeDisabledStores
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm


+(?)_addCalendarUIDsFromPrefs:(?)arg0 toSetdatabase;
+(?)_addCalendarWithUID:(?)arg0 toSetdatabase;
+(?)_addCalendarsForStoreWithUID:(?)arg0 toSetdatabase;
-(?)initFilteringAllWithDatabase;
-(?)initWithDatabase;
-(?)initWithDatabase:(?)arg0 entityTypecalendarUIDs;
-(?)initWithDatabase:(?)arg0 entityTypefilteringCalendars;
-(?)initWithDatabase:(?)arg0 entityTypefilteringCalendarsWithUIDs;
-(?)initWithDatabase:(?)arg0 entityTypeshowingCalendarsWithUIDs;
-(?)initWithDatabaseentityType;
-(?)initWithDatabaseshowingCalendars;
-(?)initWithDatabaseshowingCalendarsWithUIDs;
-(BOOL)_isFilteringAllWhileLocked;
-(BOOL)isCalendarUIDVisible:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFilteringAll;
-(BOOL)isShowingAll;
-(id)_UIDAntiSetWithCalendars:(id)arg0 ;
-(id)_UIDSetWithCalendars:(id)arg0 ;
-(id)_addFilterToQuery:(id)arg0 creator:(*unk)arg1 userInfo:(*void)arg2 ;
-(id)_generateUIDSetToFilterAllCalendars;
-(id)_generateUIDSetToFilterCalendars:(id)arg0 ;
-(id)_generateUIDSetToShowCalendarUIDs:(id)arg0 ;
-(id)_generateUIDSetToShowCalendars:(id)arg0 ;
-(id)calendarIDClauseForQueryWithVariableName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filterQueryForKey:(id)arg0 prefix:(id)arg1 whereClause:(id)arg2 creator:(*unk)arg3 userInfo:(*void)arg4 ;
-(id)filterQueryForQueryString:(id)arg0 creator:(*unk)arg1 userInfo:(*void)arg2 ;
-(id)filteredCalendars;
-(id)visibleCalendarsWithOptions:(int)arg0 ;
-(int)visibleCalendarCountWithOptions:(int)arg0 ;
-(void)dealloc;
-(void)removeCalendarWithUID:(id)arg0 ;
-(void)validate;


@end


#endif