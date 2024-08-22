// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTBACKGROUNDASSERTION_H
#define MTBACKGROUNDASSERTION_H

@class NSString, NSTimer, BKSProcessAssertion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTBackgroundAssertion : NSObject {
    NSString *_name;
    NSTimer *_invalidationTimer;
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)description;
-(id)initWithName:(id)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 ;
-(void)_cancelInvalidationTimer;
-(void)_createScheduledTimerWithInterval:(CGFloat)arg0 ;
-(void)_invalidate;
-(void)_invalidationTimerFired;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateAfterDelay:(CGFloat)arg0 ;


@end


#endif