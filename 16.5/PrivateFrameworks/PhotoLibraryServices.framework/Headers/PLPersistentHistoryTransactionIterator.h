// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTENTHISTORYTRANSACTIONITERATOR_H
#define PLPERSISTENTHISTORYTRANSACTIONITERATOR_H

@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSArray *_transactions;
    NSUInteger _transactionIndex;
}


@property (readonly, nonatomic) NSManagedObjectContext *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken; // ivar: _lastIteratedToken
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


+(id)iteratorSinceMarker:(id)arg0 withFetchRequest:(id)arg1 managedObjectObjectContext:(id)arg2 error:(*id)arg3 ;
+(id)iteratorSinceToken:(id)arg0 withManagedObjectObjectContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)enumerateOneTransactionWithBlock:(id)arg0 ;
-(BOOL)hasMoreTransactions;
-(id)_safeTransactionAtIndex:(NSUInteger)arg0 ;
-(id)initWithTransactions:(id)arg0 managedObjectObjectContext:(id)arg1 ;
-(void)enumerateRemainingTransactionsWithBlock:(id)arg0 ;


@end


#endif