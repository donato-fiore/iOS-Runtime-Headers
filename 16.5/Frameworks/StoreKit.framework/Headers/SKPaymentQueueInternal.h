// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPAYMENTQUEUEINTERNAL_H
#define SKPAYMENTQUEUEINTERNAL_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, SKPaymentQueueDelegate;

#import <Foundation/Foundation.h>

#import "SKPaymentQueueClient.h"
#import "SKXPCConnection.h"

@interface SKPaymentQueueInternal : NSObject {
    BOOL _checkedIn;
    BOOL _isRedemptionSheetShowing;
    BOOL _isRefreshing;
    BOOL _restoreFinishedDuringRefresh;
    BOOL _restoringCompletedTransactions;
    NSString *_identifier;
    SKPaymentQueueClient *_client;
    NSMutableDictionary *_downloads;
    NSMutableArray *_localTransactions;
    NSMutableArray *_transactions;
    NSMutableArray *_weakObservers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    id<SKPaymentQueueDelegate> *_delegate;
}




-(id)init;
-(void)dealloc;


@end


#endif