// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCOREDUETLOGGER_H
#define ATXCOREDUETLOGGER_H

@class NSDate, NSString;
@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "_ATXDuetHelper.h"

@interface ATXCoreDuetLogger : NSObject {
    _ATXDataStore *_dataStore;
    _ATXDuetHelper *_duetHelper;
    NSDate *_currentDate;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSString *_abGroup;
}




-(BOOL)actionTypeIsActivity:(id)arg0 ;
-(id)abGroup;
-(id)init;
-(id)initWithDataStore:(id)arg0 duetHelper:(id)arg1 currentDate:(id)arg2 tracker:(id)arg3 ;
-(void)logCoreDuetActionLogDonationMetrics;
-(void)logDonationCountWithAlogEventCount:(NSUInteger)arg0 forIntents:(BOOL)arg1 ;
-(void)logDonationRatioWithDuetEventCount:(NSUInteger)arg0 alogEventCount:(NSUInteger)arg1 forIntents:(BOOL)arg2 ;
-(void)setabGroup:(id)arg0 ;


@end


#endif