// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNPENDERQUEUE_H
#define BNPENDERQUEUE_H

@class NSMutableArray, NSMutableSet, NSSet, NSString;
@protocol BNPresentableQueueDelegate, BNPending;

#import <Foundation/Foundation.h>

#import "BNSuspensionController.h"

@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNPending>

 {
    NSMutableArray *_penderQueue;
    NSMutableSet *_suspendedPenders;
    BNSuspensionController *_suspensionController;
}


@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *penderIdentifier; // ivar: _penderIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


-(BOOL)setPenderSuspended:(BOOL)arg0 forRequesterWithIdentifier:(id)arg1 reason:(id)arg2 ;
-(id)_penderForRequesterWithIdentifier:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)peekPresentable;
-(id)pullPresentablesWithIdentification:(id)arg0 ;
-(void)enqueuePresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)presentableQueue:(id)arg0 didDequeuePresentableWithPendingIdentifier:(id)arg1 ;


@end


#endif