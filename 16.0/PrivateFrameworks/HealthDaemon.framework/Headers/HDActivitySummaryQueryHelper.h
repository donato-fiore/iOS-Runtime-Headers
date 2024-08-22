// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDACTIVITYSUMMARYQUERYHELPER_H
#define HDACTIVITYSUMMARYQUERYHELPER_H

@class _HKFilter, NSMutableDictionary, NSString;
@protocol HDDataObserver, HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSQLitePredicate.h"
#import "HDActivitySummaryBuilder.h"

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver>

 {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    BOOL _initialResultsSent;
    BOOL _needsUpdateAfterUnlock;
    BOOL _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    NSInteger _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSInteger _enumeratedSummaryCount;
}


@property (readonly, copy, nonatomic) id *batchedInitialResultsHandler; // ivar: _batchedInitialResultsHandler
@property (readonly, copy, nonatomic) id *batchedUpdateHandler; // ivar: _batchedUpdateHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger enumeratedSummaryCount;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit;
@property (nonatomic) BOOL orderByDateAscending;
@property BOOL shouldIncludePrivateProperties;
@property BOOL shouldIncludeStatistics;
@property (readonly) Class superclass;


// -(id)initWithProfile:(id)arg0 filter:(id)arg1 batchedInitialResultsHandler:(id)arg2 batchedUpdateHandler:(unk)arg3  ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif