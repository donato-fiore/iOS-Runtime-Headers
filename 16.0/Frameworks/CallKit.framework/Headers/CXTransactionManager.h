// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXTRANSACTIONMANAGER_H
#define CXTRANSACTIONMANAGER_H

@class NSMutableSet;
@protocol CXTransactionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXTransactionManager : NSObject

@property (weak, nonatomic) NSObject<CXTransactionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *outstandingTransactionGroups; // ivar: _outstandingTransactionGroups
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_setUpTimeoutForAction:(id)arg0 callSource:(id)arg1 ;
-(void)_timeoutReachedForAction:(id)arg0 callSource:(id)arg1 ;
-(void)addOutstandingTransactionGroup:(id)arg0 ;
-(void)failOutstandingActionsForCallWithUUID:(id)arg0 ;
-(void)failOutstandingActionsForChannelWithUUID:(id)arg0 ;
-(void)updateWithCompletedAction:(id)arg0 ;


@end


#endif