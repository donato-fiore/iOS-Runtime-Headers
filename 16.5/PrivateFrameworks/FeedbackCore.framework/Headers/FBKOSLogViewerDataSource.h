// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKOSLOGVIEWERDATASOURCE_H
#define FBKOSLOGVIEWERDATASOURCE_H

@class NSString, NSURL, OSLogPersistence, NSDate, NSMutableArray;
@protocol OSLogPersistenceDelegate;

#import <Foundation/Foundation.h>


@interface FBKOSLogViewerDataSource : NSObject <OSLogPersistenceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger eventCountForCurrentPage; // ivar: _eventCountForCurrentPage
@property (copy) id *fetchErrorBlock; // ivar: _fetchErrorBlock
@property NSInteger fetchWatchdog; // ivar: _fetchWatchdog
@property BOOL foundCorruptDate; // ivar: _foundCorruptDate
@property BOOL gotDelegateCallbackInLastFetch; // ivar: _gotDelegateCallbackInLastFetch
@property (readonly) NSUInteger hash;
@property (retain) NSURL *logArchivePath; // ivar: _logArchivePath
@property (retain) OSLogPersistence *loggerLib; // ivar: _loggerLib
@property NSUInteger numberOfEmptyFetches; // ivar: _numberOfEmptyFetches
@property NSUInteger numberOfEventsInLastFetch; // ivar: _numberOfEventsInLastFetch
@property NSUInteger oldestEventMachTime; // ivar: _oldestEventMachTime
@property (retain) NSDate *oldestEventTimestamp; // ivar: _oldestEventTimestamp
@property (copy) id *pageFetchCompletion; // ivar: _pageFetchCompletion
@property NSInteger pageSize; // ivar: _pageSize
@property NSInteger pendingNextPageRequest; // ivar: _pendingNextPageRequest
@property (retain) NSMutableArray *savedEvents; // ivar: _savedEvents
@property (readonly) Class superclass;


-(BOOL)hasMoreLogs;
-(BOOL)isCurrentPageComplete;
-(BOOL)lastFetchReturnedZeroEvents;
-(BOOL)persistence:(id)arg0 results:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldContinue;
-(NSInteger)numberOfLogs;
// -(id)initWithArchive:(id)arg0 pageSize:(NSInteger)arg1 pageCompletion:(id)arg2 error:(unk)arg3  ;
-(id)logAtIndex:(NSInteger)arg0 ;
-(id)loggerLibWithArchive:(id)arg0 pageSize:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)fetchNextBatch;
-(void)nextPage;
-(void)nextPageForReal;
-(void)persistenceDidFinishReadingForStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)prepareForNextDateRangeFetch;
-(void)prepareForNextPage;


@end


#endif