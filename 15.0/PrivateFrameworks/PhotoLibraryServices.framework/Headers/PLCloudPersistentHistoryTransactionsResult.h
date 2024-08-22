// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDPERSISTENTHISTORYTRANSACTIONSRESULT_H
#define PLCLOUDPERSISTENTHISTORYTRANSACTIONSRESULT_H

@class NSArray, NSString, NSPersistentHistoryToken;
@protocol PLCloudChangeEventsResult;

#import <Foundation/Foundation.h>

#import "PLPersistentHistoryTransactionIterator.h"

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult>

 {
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    id *_isTransactionSyncableFilter;
}


@property (readonly, copy) NSString *currentTokenDescription; // ivar: _currentTokenDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken; // ivar: _lastProcessedCoreDataToken
@property (readonly) NSInteger resultType; // ivar: _resultType
@property (readonly) Class superclass;


+(id)fetchTransactionsSinceToken:(id)arg0 inContext:(id)arg1 ;
+(id)isTransactionSyncableFilter:(SEL)arg0 ;
-(id)initWithResultType:(NSInteger)arg0 transactionIterator:(id)arg1 ;
-(id)initWithSuccesfulTransactionIterator:(id)arg0 ;
-(id)initWithUnsuccessfulResultType:(NSInteger)arg0 ;
-(id)localEventForAllTransactions;
-(void)enumerateLocalEventsWithBlock:(id)arg0 ;
-(void)sendLocalEvent:(id)arg0 toEnumerationBlock:(id)arg1 ;
-(void)updateLastProcessedCoreDataToken;


@end


#endif