// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXAPPDAILYDOSE_H
#define _ATXAPPDAILYDOSE_H

@class NSMutableDictionary, NSDate, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"
#import "_ATXAppDailyDoseCurrentStore.h"

@interface _ATXAppDailyDose : NSObject {
    _ATXDuetHelper *_duetHelper;
    _ATXAppDailyDoseCurrentStore *_currentDoseStore;
    NSMutableDictionary *_appHistoricalDoseMap;
    NSDate *_duetHistoryTimestamp;
    NSString *_previousAppId;
    NSDate *_previousAppLaunchDate;
}


@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_defaultCurrentDosePath;
+(id)_defaultHistoricalDosePath;
+(void)deleteCurrentDoseFile;
-(BOOL)_loadHistoricalDoseFrom:(id)arg0 ;
-(CGFloat)getCurrentDoseForApp:(id)arg0 ;
-(id)currentDoseStore;
-(id)getDoseForApp:(id)arg0 ;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 ;
-(id)initWithDuetHelper:(id)arg0 timeZone:(id)arg1 today:(id)arg2 alpha:(CGFloat)arg3 historicalDosePath:(id)arg4 completion:(id)arg5 ;
-(id)now;
-(id)previousBundleId;
-(id)todayWithTimeZone:(id)arg0 ;
-(void)_asyncStopAppUsageAtDate:(id)arg0 completion:(id)arg1 ;
-(void)_backfillAppDurationMapDBForToday;
-(void)_doTrainingOn:(id)arg0 timeZone:(id)arg1 completion:(id)arg2 ;
-(void)_recordAppDurationForApp:(id)arg0 withStartTime:(id)arg1 andEndTime:(id)arg2 ;
-(void)_writeHistoricalDoseWithCompletion:(id)arg0 ;
-(void)addLaunchForBundleId:(id)arg0 date:(id)arg1 completion:(id)arg2 ;
-(void)stopAppUsageAtDate:(id)arg0 ;
-(void)train;


@end


#endif