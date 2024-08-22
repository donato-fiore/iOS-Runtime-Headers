// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDACTIVITYSUMMARYBUILDER_H
#define HDACTIVITYSUMMARYBUILDER_H

@class _HKFilter;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseTransactionContext.h"

@interface HDActivitySummaryBuilder : NSObject {
    HDProfile *_profile;
    _HKFilter *_filter;
}


@property (copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // ivar: _databaseTransactionContext
@property (readonly, nonatomic) NSInteger enumeratedSummaryCount; // ivar: _enumeratedSummaryCount
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) BOOL orderByDateAscending; // ivar: _orderByDateAscending
@property (nonatomic) BOOL shouldIncludePrivateProperties; // ivar: _shouldIncludePrivateProperties
@property (nonatomic) BOOL shouldIncludeStatistics; // ivar: _shouldIncludeStatistics


-(BOOL)enumerateActivitySummariesWithPredicate:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 filter:(id)arg1 ;
-(void)activitySummariesWithPredicate:(id)arg0 handler:(id)arg1 ;
-(void)batchedActivitySummariesWithPredicate:(id)arg0 maxBatchSize:(NSUInteger)arg1 handler:(id)arg2 ;


@end


#endif