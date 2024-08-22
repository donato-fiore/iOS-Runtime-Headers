// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSTRANSACTIONQUEUE_H
#define IDSTRANSACTIONQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IDSTransactionQueue : NSObject

@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *transactions; // ivar: _transactions


-(id)appendPendingItem:(SEL)arg0 ;
-(id)init;
-(void)_appendTransaction:(id)arg0 ;
-(void)_prependTransaction:(id)arg0 ;
-(void)_readyTransaction:(id)arg0 ;
-(void)_removeTransaction:(id)arg0 ;
-(void)appendItem:(id)arg0 ;
-(void)executeReadyItemsWithBlock:(id)arg0 ;
-(void)prependItem:(id)arg0 ;


@end


#endif