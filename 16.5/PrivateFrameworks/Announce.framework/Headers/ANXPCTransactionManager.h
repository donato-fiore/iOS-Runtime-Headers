// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANXPCTRANSACTIONMANAGER_H
#define ANXPCTRANSACTIONMANAGER_H

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANXPCTransactionManager : NSObject

@property (readonly, nonatomic) NSArray *activeTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger status;
@property (readonly, nonatomic) NSMutableDictionary *transactions; // ivar: _transactions


+(id)sharedManager;
-(NSUInteger)_currentStatus;
-(id)_createTransaction:(id)arg0 ;
-(id)_overview;
-(id)description;
-(id)init;
-(id)transaction:(id)arg0 forEndpointUUID:(id)arg1 ;
-(void)_cancelTimer:(id)arg0 ;
-(void)_createTransaction:(id)arg0 expiration:(CGFloat)arg1 ;
-(void)_removeTransaction:(id)arg0 ;
-(void)_resetTimer:(id)arg0 expiration:(CGFloat)arg1 ;
-(void)_startTimer:(id)arg0 expiration:(CGFloat)arg1 ;
-(void)_transaction:(id)arg0 setActive:(BOOL)arg1 ;
-(void)_transaction:(id)arg0 setActiveForTimeInterval:(CGFloat)arg1 ;
-(void)transaction:(id)arg0 setActive:(BOOL)arg1 ;
-(void)transaction:(id)arg0 setActiveForTimeInterval:(CGFloat)arg1 ;


@end


#endif