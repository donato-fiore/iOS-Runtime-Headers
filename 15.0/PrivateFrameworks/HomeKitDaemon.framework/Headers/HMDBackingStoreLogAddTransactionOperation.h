// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORELOGADDTRANSACTIONOPERATION_H
#define HMDBACKINGSTORELOGADDTRANSACTIONOPERATION_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreTransactionBlock.h"

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation

@property (readonly, nonatomic) BOOL isAtomicSaveEnabled; // ivar: _isAtomicSaveEnabled
@property (nonatomic) NSInteger pushFlags; // ivar: _pushFlags
@property (retain, nonatomic) HMDBackingStoreTransactionBlock *transaction; // ivar: _transaction


-(id)initWithAtomicSaveEnabled:(BOOL)arg0 transaction:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 ;
-(id)mainReturningError;


@end


#endif