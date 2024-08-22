// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFTASKASSERTION_H
#define MFTASKASSERTION_H

@class EFProcessTransaction, BKSProcessAssertion;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MFTaskAssertion : NSObject {
    EFProcessTransaction *_transaction;
    BKSProcessAssertion *_assertion;
    NSObject<OS_dispatch_source> *_timer;
}




+(id)log;
-(BOOL)isValid;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 expiration:(CGFloat)arg1 preventIdleSleep:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 preventIdleSleep:(BOOL)arg1 ;
-(void)cancelTimer;
-(void)dealloc;
-(void)invalidate;


@end


#endif