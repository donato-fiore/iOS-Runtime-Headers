// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSQUERY_H
#define CLSQUERY_H

@class NSMutableArray, NSString, NSDate;
@protocol NSLocking, CLSQuery;


#import "CLSDataObserver.h"
#import "CLSSearchSpecification.h"

@interface CLSQuery : CLSDataObserver <NSLocking, CLSQuery>

 {
    NSMutableArray *_results;
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic) NSInteger fetchLimit; // ivar: _fetchLimit
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) CLSSearchSpecification *searchSpec; // ivar: _searchSpec
@property (nonatomic) BOOL shouldAddResultsToDataStore; // ivar: _shouldAddResultsToDataStore
@property (nonatomic) BOOL shouldFaultResults; // ivar: _shouldFaultResults
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)queryWithObjectType:(Class)arg0 predicate:(id)arg1 ;
+(id)queryWithObjectType:(Class)arg0 predicate:(id)arg1 error:(*id)arg2 ;
// +(id)queryWithQuerySpecification:(id)arg0 completion:(id)arg1 error:(unk)arg2  ;
+(id)queryWithSearchSpecification:(id)arg0 ;
-(id)initWithObjectType:(Class)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 error:(*id)arg3 ;
// -(id)initWithQuerySpecification:(id)arg0 completion:(id)arg1 error:(unk)arg2  ;
-(id)initWithQuerySpecification:(id)arg0 error:(*id)arg1 ;
-(id)initWithSearchSpecification:(id)arg0 error:(*id)arg1 ;
-(void)_faultResultsAndComplete;
-(void)_notifyOfCompletionWithError:(id)arg0 ;
-(void)_notifyOfCompletionWithResults:(id)arg0 error:(id)arg1 ;
-(void)clientRemote_deliverObject:(id)arg0 ;
-(void)clientRemote_finishWithOffset:(NSUInteger)arg0 error:(id)arg1 ;
-(void)clientRemote_invalidate;
-(void)lock;
-(void)reset;
-(void)unlock;


@end


#endif