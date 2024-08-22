// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSLEEPFORAUTOSU_H
#define _CDSLEEPFORAUTOSU_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_CDAutoSuConfig.h"

@interface _CDSleepForAutoSu : NSObject

@property (retain) _CDAutoSuConfig *autoSuConfig; // ivar: _autoSuConfig
@property BOOL enableCaching; // ivar: _enableCaching
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore


+(id)defaultTuningConfiguration;
+(id)readConfigurationFromDefaults;
+(id)sanitizeTuningConfiguration:(id)arg0 ;
+(id)tuningDictionary;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg0 ;
-(id)defaultTimesWhenPredictionUnavailable:(id)arg0 withConfig:(id)arg1 ;
-(id)getUnlockAndSoftwareUpdateTimes;
-(id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg0 referenceDate:(id)arg1 ;
-(id)init;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg0 ;
-(id)predicitLastUnlockForDay:(id)arg0 ;
-(id)predictForDate:(id)arg0 fromState:(id)arg1 ;
-(id)predictForDate:(id)arg0 fromState:(id)arg1 withConfig:(id)arg2 ;
-(id)predictNextDateForLastUnlockAttemptOfTheDay;
-(id)predictedSleepDictionaryForDate:(id)arg0 ;
-(id)predictedSleepDictionaryForDate:(id)arg0 usingKnowledge:(id)arg1 ;
-(id)proposeTimesFromRelativeOffsetsForDate:(id)arg0 lastUnlock:(int)arg1 suStart:(int)arg2 suEnd:(int)arg3 unrestrictedSleepEnd:(int)arg4 config:(id)arg5 ;
-(id)retrieveSleepProbabilities:(id)arg0 ;


@end


#endif