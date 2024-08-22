// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPROCESSASSERTION_H
#define PGPROCESSASSERTION_H

@class NSString, RBSAssertion, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PGProcessAssertion : NSObject {
    BOOL _lock_invalidated;
    NSString *_explanation;
    RBSAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    BOOL _acquired;
    os_unfair_lock_s _lock;
}




+(id)assertionWithDomainAttribute:(id)arg0 forProcessWithIdentifier:(int)arg1 explanation:(id)arg2 ;
+(id)pipVisibleAssertionForProcessWithIdentifier:(int)arg0 explanation:(id)arg1 ;
+(id)pipVisibleDomainAttribute;
+(id)transientTaskAssertionForProcessWithIdentifier:(int)arg0 explanation:(id)arg1 ;
+(id)transientTaskDomainAttribute;
-(BOOL)_isInvalidated;
-(id)description;
-(id)initWithExplanation:(id)arg0 ;
-(void)_setInvalidated:(BOOL)arg0 ;
-(void)acquireWithTarget:(id)arg0 domainAttribute:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif