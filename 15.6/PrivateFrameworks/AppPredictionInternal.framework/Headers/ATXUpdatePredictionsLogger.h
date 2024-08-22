// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUPDATEPREDICTIONSLOGGER_H
#define ATXUPDATEPREDICTIONSLOGGER_H

@class NSUserDefaults, NSDate;
@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXUpdatePredictionsLogger : NSObject {
    NSUserDefaults *_userDefaults;
    id<ATXPETEventTracker2Protocol> *_petLogger;
}


@property (retain, nonatomic) NSDate *now; // ivar: _now


-(CGFloat)_normalizeCountPer24HoursWithStartDate:(id)arg0 endDate:(id)arg1 count:(NSUInteger)arg2 ;
-(id)_countDictionaryDefaultsKeyForClient:(NSUInteger)arg0 ;
-(id)_countDictionaryForClient:(NSUInteger)arg0 ;
-(id)_lastLogDate;
-(id)_protobufForTriggerType:(int)arg0 client:(NSUInteger)arg1 ;
-(id)_stringForATXUpdatePredictionsClient:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 petLogger:(id)arg1 ;
-(int)_clientTypeForUpdatePredictionsClient:(NSUInteger)arg0 ;
-(int)_triggerTypeForUpdatePredictionsReason:(NSUInteger)arg0 ;
-(void)_incrementCountInDictionary:(id)arg0 forTriggerType:(int)arg1 ;
-(void)_logPredictionUpdatesForClient:(NSUInteger)arg0 lastLogDate:(id)arg1 now:(id)arg2 ;
-(void)_resetCountDictionariesForAllClients;
-(void)_setCountDictionary:(id)arg0 forClient:(NSUInteger)arg1 ;
-(void)_setLastLogDate:(id)arg0 ;
-(void)countPredictionUpdateWithReason:(NSUInteger)arg0 client:(NSUInteger)arg1 ;
-(void)flushCountedPredictionUpdatesToLogger;


@end


#endif