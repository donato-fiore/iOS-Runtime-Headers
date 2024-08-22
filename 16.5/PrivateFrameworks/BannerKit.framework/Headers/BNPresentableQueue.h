// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNPRESENTABLEQUEUE_H
#define BNPRESENTABLEQUEUE_H

@class NSMutableArray, NSMapTable, NSSet, NSString;
@protocol BNPending, BNPresentableQueueDelegate;

#import <Foundation/Foundation.h>

#import "BNSuspensionController.h"

@interface BNPresentableQueue : NSObject <BNPending>

 {
    NSMutableArray *_postingContextQueue;
    NSMapTable *_postingContextsToDequeuePromises;
    BNSuspensionController *_suspensionController;
}


@property (readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNPresentableQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *penderIdentifier; // ivar: _penderIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


+(void)initialize;
-(id)_pullPresentablesPassingTest:(id)arg0 ;
-(id)peekPresentable;
-(id)pullPresentablesWithIdentification:(id)arg0 ;
-(void)enqueuePresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 ;


@end


#endif