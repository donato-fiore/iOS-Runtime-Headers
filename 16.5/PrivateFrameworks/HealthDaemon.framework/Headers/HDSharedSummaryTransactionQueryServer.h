// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSHAREDSUMMARYTRANSACTIONQUERYSERVER_H
#define HDSHAREDSUMMARYTRANSACTIONQUERYSERVER_H

@protocol HDSharedSummaryManagerObserver;


#import "HDQueryServer.h"

@interface HDSharedSummaryTransactionQueryServer : HDQueryServer <HDSharedSummaryManagerObserver>





+(Class)queryClass;
-(void)_queue_didDeactivate;
-(void)_queue_start;
-(void)sharedSummaryManagerCommittedTransactionsDidChange:(id)arg0 ;


@end


#endif