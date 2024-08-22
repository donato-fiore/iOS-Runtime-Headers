// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHWORKOUTITERATOR_H
#define ACHWORKOUTITERATOR_H

@class HKHealthStore, HKSampleIteratorQuery;

#import <Foundation/Foundation.h>


@interface ACHWorkoutIterator : NSObject

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKSampleIteratorQuery *query; // ivar: _query


-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)_runQueryForDateInterval:(id)arg0 lastCursor:(id)arg1 completion:(id)arg2 ;
// -(void)enumerateWorkoutsForDateInterval:(id)arg0 handler:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif