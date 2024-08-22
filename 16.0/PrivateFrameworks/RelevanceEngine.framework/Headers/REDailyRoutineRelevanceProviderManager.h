// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDAILYROUTINERELEVANCEPROVIDERMANAGER_H
#define REDAILYROUTINERELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties>

 {
    BOOL _inMorningRoutine;
    BOOL _inEveningRoutine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEveningRoutine;
@property (readonly, nonatomic) BOOL isInMorningRoutine;
@property (readonly) Class superclass;


+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(BOOL)_isInRoutine:(NSUInteger)arg0 forDate:(id)arg1 ;
-(id)_valueForProvider:(id)arg0 context:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(void)_prepareForUpdate;
-(void)_updateRoutines;
-(void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg0 ;
-(void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg0 ;
-(void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg0 ;
-(void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg0 ;
-(void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif