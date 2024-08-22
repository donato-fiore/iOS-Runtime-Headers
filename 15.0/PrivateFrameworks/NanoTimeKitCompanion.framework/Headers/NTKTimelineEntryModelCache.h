// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTIMELINEENTRYMODELCACHE_H
#define NTKTIMELINEENTRYMODELCACHE_H

@class NSMutableArray, NSDate;
@protocol NTKTimelineEntryModelCacheDataSource;

#import <Foundation/Foundation.h>


@interface NTKTimelineEntryModelCache : NSObject {
    NSMutableArray *_cachedEntryModels;
}


@property (readonly, nonatomic) NSDate *cacheEndDate; // ivar: _cacheEndDate
@property (readonly, nonatomic) NSDate *cacheStartDate; // ivar: _cacheStartDate
@property (weak, nonatomic) NSObject<NTKTimelineEntryModelCacheDataSource> *dataSource; // ivar: _dataSource


+(id)_endOfDayForDate:(id)arg0 ;
+(id)_startOfDayAfterDate:(id)arg0 ;
+(id)_startOfDayBeforeDate:(id)arg0 ;
+(id)_startOfDayForDate:(id)arg0 ;
-(BOOL)hasEntryModelForDate:(id)arg0 ;
-(id)_cachedEntryModelAfterDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_cachedEntryModelBeforeDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_cachedEntryModelForDate:(id)arg0 ;
-(id)calendar;
-(id)entryModelForDate:(id)arg0 ;
-(id)entryModelsAfterDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)entryModelsBeforeDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)init;
-(void)_extendCacheTowardDate:(id)arg0 ;
-(void)invalidate;


@end


#endif