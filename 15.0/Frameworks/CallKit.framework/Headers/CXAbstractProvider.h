// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXABSTRACTPROVIDER_H
#define CXABSTRACTPROVIDER_H

@class NSString, NSMutableArray, NSArray;
@protocol CXActionDelegate, CXAbstractProviderVendorProtocol, CXAbstractProviderDelegate, OS_dispatch_queue, CXAbstractProviderHostProtocol;

#import <Foundation/Foundation.h>


@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXAbstractProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CXAbstractProviderHostProtocol> *hostProtocolDelegate;
@property (readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // ivar: _mutablePendingTransactions
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)_pendingActionWithUUID:(id)arg0 ;
-(id)init;
-(void)_handleConnectionInterruption;
-(void)_performAction:(id)arg0 ;
-(void)_performDelegateCallback:(id)arg0 ;
-(void)_updatePendingTransactions;
-(void)actionCompleted:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleConnectionInterruption;
-(void)invalidate;
-(void)performDelegateCallback:(id)arg0 ;
-(void)sendProviderDidBegin;


@end


#endif