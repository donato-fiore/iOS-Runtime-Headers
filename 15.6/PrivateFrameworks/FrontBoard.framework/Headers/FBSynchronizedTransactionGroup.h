// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSYNCHRONIZEDTRANSACTIONGROUP_H
#define FBSYNCHRONIZEDTRANSACTIONGROUP_H

@class NSMutableSet, NSString;
@protocol FBSynchronizedTransaction, FBSynchronizedTransactionDelegate;


#import "FBTransaction.h"

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>

 {
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<FBSynchronizedTransactionDelegate> *synchronizationDelegate; // ivar: _synchronizationDelegate


-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg0 ;
-(BOOL)isReadyForSynchronizedCommit;
-(id)init;
-(id)synchronizedTransactions;
-(void)_checkPreconditionsAndCommitIfReady;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg0 ;
-(void)_performSynchronizedCommitIfReady;
-(void)addSynchronizedTransaction:(id)arg0 ;
-(void)performSynchronizedCommit;
-(void)synchronizedTransaction:(id)arg0 didCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg0 willCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg0 ;


@end


#endif