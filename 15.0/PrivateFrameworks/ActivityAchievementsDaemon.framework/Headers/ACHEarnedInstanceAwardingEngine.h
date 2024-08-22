// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHEARNEDINSTANCEAWARDINGENGINE_H
#define ACHEARNEDINSTANCEAWARDINGENGINE_H

@class HDProfile, NSMutableDictionary, NSCalendar, NSDate, NSString;
@protocol HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHDataStore.h"
#import "ACHEarnedInstanceStore.h"

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver>

 {
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ? _historicalEvaluationPolicy;
    NSMutableDictionary *_sourceRegistry;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_currentDateOverride;
    NSMutableDictionary *_queuedIncrementalEvaluations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)sourceCount;
-(id)currentDate;
-(id)dataStorePropertyProviderForSource:(id)arg0 ;
-(id)initWithProfile:(id)arg0 dataStore:(id)arg1 earnedInstanceStore:(id)arg2 historicalEvaluationPolicy:(struct ? )arg3 ;
-(void)_queue_evaluateHistoryForSource:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)deregisterSource:(id)arg0 ;
-(void)registerSource:(id)arg0 ;
-(void)requestHistoricalEvaluationForAllSourcesWithCompletion:(id)arg0 ;
-(void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)arg0 completion:(id)arg1 ;
-(void)requestIncrementalEvaluationForSource:(id)arg0 evaluationBlock:(id)arg1 ;
-(void)setCurrentDateOverride:(id)arg0 ;


@end


#endif