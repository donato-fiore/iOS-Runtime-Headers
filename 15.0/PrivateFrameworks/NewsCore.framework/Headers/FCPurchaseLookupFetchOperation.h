// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPURCHASELOOKUPFETCHOPERATION_H
#define FCPURCHASELOOKUPFETCHOPERATION_H

@class NSArray;


#import "FCFetchOperation.h"
#import "FCPurchaseLookupRecordSource.h"

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSArray *purchaseIDs; // ivar: _purchaseIDs
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // ivar: _purchaseLookupRecordSource


-(id)_prefixedPurchasedIDs:(id)arg0 ;
-(id)init;
-(id)initWithPurchaseIDs:(id)arg0 purchaseLookupRecordSource:(id)arg1 ;
-(id)processFetchedResults:(id)arg0 ;
-(void)performOperation;


@end


#endif