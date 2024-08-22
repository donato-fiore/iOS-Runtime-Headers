// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORMAUTOFILLCORRECTIONSHISTORYOBSERVER_H
#define WBSFORMAUTOFILLCORRECTIONSHISTORYOBSERVER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;

#import <Foundation/Foundation.h>

#import "WBSCrowdsourcedFeedbackDomainNormalizer.h"

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {
    NSMutableArray *_pendingRemovedHistoryItemsToProcess;
    NSMutableArray *_pendingRemovedHistoryVisitsToProcess;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    id<WBSFormAutoFillCorrectionsStore> *_correctionsStore;
}




-(id)_normalizeURL:(id)arg0 ;
-(id)initWithCorrectionsStore:(id)arg0 ;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)_historyVisitsWereRemoved:(id)arg0 ;
-(void)_historyWasCleared:(id)arg0 ;
-(void)_invalidateUpdateCoalescingTimer;
-(void)_updateCorrectionsStoreNow;
-(void)_updateCorrectionsStoreSoon;
-(void)dealloc;
-(void)flushPendingChangesAndDisconnectFromStoreAndHistory;


@end


#endif