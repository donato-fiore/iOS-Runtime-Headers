// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCANALYSISPROVIDER_H
#define HKMCANALYSISPROVIDER_H

@class HKObserverSet, HKHealthStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKMCAnalysisQuery.h"
#import "HKMCAnalysis.h"

@interface HKMCAnalysisProvider : NSObject {
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    HKMCAnalysisQuery *_analysisQuery;
    HKMCAnalysis *_analysis;
    BOOL _didUpdate;
}


@property (retain, nonatomic) HKMCAnalysis *_test_analysis; // ivar: __test_analysis
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(id)description;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 initialAnalysisForTest:(id)arg1 ;
-(void)_startAnalysisQuery;
-(void)_updateAnalysis:(id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif