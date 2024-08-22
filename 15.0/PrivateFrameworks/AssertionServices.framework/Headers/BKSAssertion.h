// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSASSERTION_H
#define BKSASSERTION_H

@class RBSAssertion, RBSTarget, NSMutableArray, NSString;
@protocol RBSAssertionObserving;

#import <Foundation/Foundation.h>


@interface BKSAssertion : NSObject <RBSAssertionObserving>

 {
    RBSAssertion *_internalAssertion;
    id *_acquisitionHandler;
    id *_invalidationHandler;
    RBSTarget *_target;
    NSMutableArray *_attributes;
    NSString *_name;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL valid;


-(BOOL)acquire;
-(NSUInteger)_bksErrorForRBSAssertionError:(NSUInteger)arg0 ;
-(id)_acquisitionHandler:(SEL)arg0 ;
-(id)_attributes;
-(id)_initWithName:(id)arg0 handler:(id)arg1 ;
-(id)_internalAssertion;
-(id)_lock_acquisitionHandler:(SEL)arg0 ;
-(id)_lock_attributes;
-(id)_lock_internalAssertion;
-(id)_target;
-(id)init;
-(void)_acquireAsynchronously;
-(void)_invalidateSynchronously:(BOOL)arg0 ;
-(void)_lock:(id)arg0 ;
-(void)_lock_reaquireAssertion;
-(void)_lock_setAttributes:(id)arg0 ;
-(void)_lock_setInternalAssertion:(id)arg0 ;
-(void)_setAttributes:(id)arg0 ;
-(void)_setTarget:(id)arg0 ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)assertionWillInvalidate:(id)arg0 ;
-(void)dealloc;


@end


#endif