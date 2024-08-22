// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHAREDSUMMARYTRANSACTIONQUERY_H
#define HKSHAREDSUMMARYTRANSACTIONQUERY_H

@class NSString;
@protocol HKSharedSummaryTransactionQueryClientInterface;


#import "HKQuery.h"

@interface HKSharedSummaryTransactionQuery : HKQuery <HKSharedSummaryTransactionQueryClientInterface>

 {
    id *_initialHandler;
    BOOL _initialHandlerCalled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithHandler:(id)arg0 ;
-(void)client_deliverTransactions:(id)arg0 query:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif