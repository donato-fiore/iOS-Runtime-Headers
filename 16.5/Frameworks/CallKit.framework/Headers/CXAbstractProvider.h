// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXABSTRACTPROVIDER_H
#define CXABSTRACTPROVIDER_H

@class NSString, NSMutableArray, NSArray;
@protocol CXActionDelegate, CXAbstractProvider, CXAbstractProviderDelegate, OS_dispatch_queue, CXActionDelegateInternal;

#import <Foundation/Foundation.h>


@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProvider>



@property (copy) id *connectionInterruptionHandler; // ivar: _connectionInterruptionHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXAbstractProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CXActionDelegateInternal> *internalActionDelegate; // ivar: _internalActionDelegate
@property (readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // ivar: _mutablePendingTransactions
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)_pendingActionWithUUID:(id)arg0 ;
-(id)init;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)_syncSetDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_updatePendingTransactions;
-(void)actionCompleted:(id)arg0 ;
-(void)handleConnectionInterruptionForProvider:(id)arg0 ;
-(void)invalidate;
-(void)performDelegateCallback:(id)arg0 ;
-(void)provider:(id)arg0 commitTransaction:(id)arg1 ;
-(void)provider:(id)arg0 handleTimeoutForAction:(id)arg1 ;
-(void)sendDidBeginForProvider:(id)arg0 ;


@end


#endif