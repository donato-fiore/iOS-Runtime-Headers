// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXTRANSACTIONGROUP_H
#define CXTRANSACTIONGROUP_H

@class NSArray, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CXTransactionGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *allActions;
@property (readonly, nonatomic) NSMutableDictionary *callSourceIdentifierToTransaction; // ivar: _callSourceIdentifierToTransaction
@property (readonly, copy, nonatomic) NSArray *callSources;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSMutableArray *mutableCallSources; // ivar: _mutableCallSources
@property (readonly, nonatomic) NSMutableArray *mutableProviderSources; // ivar: _mutableProviderSources
@property (readonly, nonatomic) NSMutableArray *mutableServiceClients; // ivar: _mutableServiceClients
@property (readonly, nonatomic) NSMutableDictionary *providerSourceIdentifierToTransaction; // ivar: _providerSourceIdentifierToTransaction
@property (readonly, copy, nonatomic) NSArray *providerSources;
@property (readonly, copy, nonatomic) NSArray *serviceClientActions;
@property (readonly, nonatomic, getter=isServiceClientGroupComplete) BOOL serviceClientGroupComplete;
@property (readonly, nonatomic) NSMutableDictionary *serviceClientIdentifierToTransaction; // ivar: _serviceClientIdentifierToTransaction
@property (readonly, copy, nonatomic) NSArray *serviceClientTransactions;
@property (readonly, copy, nonatomic) NSArray *serviceClients;
@property (readonly, copy, nonatomic) NSArray *transactions;


-(id)description;
-(id)init;
-(id)transactionForCallSource:(id)arg0 ;
-(id)transactionForProviderSource:(id)arg0 ;
-(id)transactionForServiceClient:(id)arg0 ;
-(void)addAction:(id)arg0 forCallSource:(id)arg1 ;
-(void)addAction:(id)arg0 forProviderSource:(id)arg1 ;
-(void)addAction:(id)arg0 forServiceClient:(id)arg1 ;


@end


#endif