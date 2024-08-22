// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCANALYSISPROVIDER_H
#define HKMCANALYSISPROVIDER_H

@class HKObserverSet, NSMutableArray, NSError, HKHealthStore;

#import <Foundation/Foundation.h>

#import "HKMCAnalysisQuery.h"
#import "HKMCAnalysis.h"

@interface HKMCAnalysisProvider : NSObject {
    HKObserverSet *_observers;
    os_unfair_lock_s _lock;
    NSMutableArray *_nextAnalysisQueryResultBlocks;
    HKMCAnalysisQuery *_analysisQuery;
    HKMCAnalysis *_lastAnalysis;
    NSError *_lastError;
}


@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(id)description;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 startAnalysisQueryImmediately:(BOOL)arg1 ;
-(void)_handleAnalysisQueryResult:(id)arg0 error:(id)arg1 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)analysisWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)startAnalysisQuery;


@end


#endif