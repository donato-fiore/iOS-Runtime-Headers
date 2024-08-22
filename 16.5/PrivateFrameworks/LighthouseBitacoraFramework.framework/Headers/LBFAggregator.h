// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFAGGREGATOR_H
#define LBFAGGREGATOR_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "LBFTrialStatusDetector.h"

@interface LBFAggregator : NSObject

@property (readonly, nonatomic) NSMutableArray *buckets; // ivar: _buckets
@property (readonly, nonatomic) NSMutableDictionary *stateDict; // ivar: _stateDict
@property (nonatomic) BOOL strictDictChecks; // ivar: _strictDictChecks
@property (readonly, nonatomic) LBFTrialStatusDetector *trialStatusDetector; // ivar: _trialStatusDetector


-(BOOL)dumpFetchedEvents;
-(BOOL)fetchBucket:(NSInteger)arg0 ;
-(BOOL)fetchBuckets:(id)arg0 ;
-(BOOL)fetchEvents;
-(BOOL)setUpBuckets;
-(BOOL)upload;
-(BOOL)upload:(BOOL)arg0 uploadRawEvents:(BOOL)arg1 skipNullIdentifiers:(BOOL)arg2 ;
-(id)dateToStringInUTCAndLocal:(id)arg0 ;
-(id)dumpAggregate;
-(id)ensureDeploymentEventsHolderInBucket:(id)arg0 bucketIndex:(NSUInteger)arg1 ;
-(id)ensureExperimentEventsHolderInBucket:(id)arg0 bucketIndex:(NSUInteger)arg1 ;
-(id)fetchedEventsInDictionaries;
-(id)getAggregatedStatesUpdateTimestamp:(BOOL)arg0 skipNullIdentifiers:(BOOL)arg1 ;
-(id)getBucketEndDate;
-(id)getBucketsNotAggregated;
-(id)getTransitionProcessingEventArray:(id)arg0 mlRuntimeInCurrentBucket:(BOOL)arg1 mlRuntimeInPreviousBucket:(BOOL)arg2 ;
-(id)getTrialIdentifierFromBMEvent:(id)arg0 ;
-(id)init;
-(void)dumpTimestamps;
-(void)enumerateAggregation:(id)arg0 ;


@end


#endif