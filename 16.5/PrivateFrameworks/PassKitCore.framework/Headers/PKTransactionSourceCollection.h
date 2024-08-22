// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONSOURCECOLLECTION_H
#define PKTRANSACTIONSOURCECOLLECTION_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources; // ivar: _transactionSources


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)account;
-(id)description;
-(id)initWithTransactionSource:(id)arg0 ;
-(id)initWithTransactionSources:(id)arg0 ;
-(id)paymentPass;
-(id)transactionSourceForTransactionSourceIdentifier:(id)arg0 ;
-(id)transactionSourceIdentifiers;
-(id)transactionSourcesForType:(NSUInteger)arg0 ;


@end


#endif