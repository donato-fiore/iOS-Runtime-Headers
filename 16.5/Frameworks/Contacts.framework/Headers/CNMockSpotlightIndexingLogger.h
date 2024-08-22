// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMOCKSPOTLIGHTINDEXINGLOGGER_H
#define CNMOCKSPOTLIGHTINDEXINGLOGGER_H

@class NSString;
@protocol CNSpotlightIndexingLogger;

#import <Foundation/Foundation.h>


@interface CNMockSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)deferringReindexAsFailedToPrepareForReindexing;
-(void)didNotFinishIndexingForDeltaSyncWithError:(id)arg0 ;
-(void)didNotFinishIndexingForFullSyncWithError:(id)arg0 ;
-(void)failedToBeginIndexBatchWithSpotlight:(id)arg0 ;
-(void)failedToClearChangeHistory:(id)arg0 toChangeAnchor:(id)arg1 error:(id)arg2 ;
-(void)failedToCreateSearchableItemForContactIdentifier:(id)arg0 ;
-(void)failedToCreateUnarchiverForClientStateWithError:(id)arg0 ;
-(void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg0 willRetry:(BOOL)arg1 ;
-(void)failedToEndIndexBatchWithSpotlight:(id)arg0 willRetry:(BOOL)arg1 ;
-(void)failedToFetchClientStateFromSpotlight:(id)arg0 willRetry:(BOOL)arg1 ;
-(void)failedToFetchContactForChange:(id)arg0 ;
-(void)failedToFetchSearchableForContactIdentifiers:(id)arg0 error:(id)arg1 ;
-(void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg0 identifiers:(id)arg1 willRetry:(BOOL)arg2 ;
-(void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg0 identifiers:(id)arg1 willRetry:(BOOL)arg2 ;
-(void)failedToUnarchiveClientStateData:(id)arg0 ;
-(void)finishedBatchIndexWithUpdateIdentifiers:(id)arg0 deleteIdentifiers:(id)arg1 ;
-(void)finishedIndexingForDeltaSyncWithUpdateCount:(NSUInteger)arg0 deleteCount:(NSUInteger)arg1 ;
-(void)finishedIndexingForFullSyncWithCount:(NSUInteger)arg0 ;
-(void)indexingContacts:(id)arg0 ;
-(void)noContactChangesToIndex;
-(void)reindexingAllSearchableItems:(id)arg0 ;
-(void)reindexingSearchableItemsWithIdentifiers:(id)arg0 ;
-(void)verifiedIndexWithSummmary:(id)arg0 ;
-(void)verifyingIndex:(id)arg0 ;
-(void)willBatchIndexForDeltaSyncWithUpdateCount:(NSUInteger)arg0 deleteCount:(NSUInteger)arg1 ;
-(void)willBatchIndexForFullSyncWithCount:(NSUInteger)arg0 lastOffset:(NSInteger)arg1 doneFullSync:(BOOL)arg2 ;
-(void)willClearChangeHistory:(id)arg0 toChangeAnchor:(id)arg1 ;
-(void)willReindexAsChangeHistoryIsTruncated:(id)arg0 ;
-(void)willReindexAsFailedToFetchChangeHistory:(id)arg0 error:(id)arg1 ;
-(void)willReindexAsFailedToFetchClientState;
-(void)willReindexAsFailedToRegisterForChangeHistory:(id)arg0 error:(id)arg1 ;
-(void)willReindexAsIndexVersionChangedFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)willReindexAsSnapshotAnchorChangedFrom:(id)arg0 to:(id)arg1 ;
-(void)willReindexItemsWithIdentifiers:(id)arg0 ;
-(void)willResumeIndexingAfterOffset:(NSInteger)arg0 ;
-(void)willResumeReindexingAsNotFinished;
-(void)willStartIndexingWithClientState:(id)arg0 ;


@end


#endif