// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDPAGINGCONTEXT_H
#define WDMEDICALRECORDPAGINGCONTEXT_H

@class NSMutableSet, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WDMedicalRecordPagingContext : NSObject

@property (retain, nonatomic) NSMutableSet *computingDaySummaries; // ivar: _computingDaySummaries
@property (retain, nonatomic) NSMutableArray *contextDependentBlockQueue; // ivar: _contextDependentBlockQueue
@property (nonatomic) BOOL fetchingCurrentPage; // ivar: _fetchingCurrentPage
@property (nonatomic) BOOL hasMoreData; // ivar: _hasMoreData
@property (nonatomic) BOOL pagingContextReady; // ivar: _pagingContextReady
@property (retain, nonatomic) NSMutableArray *removedRecords; // ivar: _removedRecords
@property (nonatomic) BOOL shouldClearDisplayItemGroups; // ivar: _shouldClearDisplayItemGroups
@property (retain, nonatomic) NSMutableArray *unprocessedRecords; // ivar: _unprocessedRecords


+(id)sortDateComponentsOfDate:(id)arg0 ;
+(id)sortDateComponentsOfDateComponents:(id)arg0 withDayOffset:(NSInteger)arg1 ;
-(BOOL)shouldQueryForNextBatch;
-(id)init;
-(void)resetPagingContext;


@end


#endif