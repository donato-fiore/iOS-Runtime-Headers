// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKSAMPLEQUERYUTILITY_H
#define _HKSAMPLEQUERYUTILITY_H

@class NSPredicate, NSMutableArray;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKSampleType.h"
#import "HKAnchoredObjectQuery.h"
#import "HKQueryAnchor.h"

@interface _HKSampleQueryUtility : NSObject {
    HKHealthStore *_healthStore;
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
    HKAnchoredObjectQuery *_query;
    HKQueryAnchor *_queryAnchor;
    NSMutableArray *_samples;
}


@property (nonatomic) BOOL sortStartDateAscending; // ivar: _sortStartDateAscending
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)init;
-(id)initWithHealthStore:(id)arg0 sampleType:(id)arg1 predicate:(id)arg2 completionHandler:(id)arg3 ;
// -(id)initWithHealthStore:(id)arg0 sampleType:(id)arg1 predicate:(id)arg2 completionHandler:(id)arg3 updateHandler:(unk)arg4  ;
-(id)initWithHealthStore:(id)arg0 sampleType:(id)arg1 predicate:(id)arg2 resultsHandler:(id)arg3 ;
-(void)execute;
-(void)handleAddedObjects:(id)arg0 deletedObjects:(id)arg1 queryAnchor:(id)arg2 error:(id)arg3 resultsHandler:(id)arg4 ;
-(void)setupQueryWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif