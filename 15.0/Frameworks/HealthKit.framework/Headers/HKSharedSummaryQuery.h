// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSHAREDSUMMARYQUERY_H
#define HKSHAREDSUMMARYQUERY_H

@class NSString;
@protocol HKSharedSummaryQueryClientInterface;


#import "HKQuery.h"
#import "HKSharedSummaryTransaction.h"

@interface HKSharedSummaryQuery : HKQuery <HKSharedSummaryQueryClientInterface>

 {
    id *_resultsHandler;
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 package:(id)arg1 resultsHandler:(id)arg2 ;
-(void)client_deliverSummaries:(id)arg0 query:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif