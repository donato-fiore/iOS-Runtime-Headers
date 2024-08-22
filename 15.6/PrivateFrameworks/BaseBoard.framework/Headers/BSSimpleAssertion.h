// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSSIMPLEASSERTION_H
#define BSSIMPLEASSERTION_H

@class NSString;
@protocol BSInvalidatable, BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSAtomicSignal.h"

@interface BSSimpleAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

 {
    BSAtomicSignal *_invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    id *_invalidationBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 invalidationBlock:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 queue:(id)arg2 invalidationBlock:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif