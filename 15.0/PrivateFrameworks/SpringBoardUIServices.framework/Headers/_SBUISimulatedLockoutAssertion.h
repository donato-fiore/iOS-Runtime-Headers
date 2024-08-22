// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUISIMULATEDLOCKOUTASSERTION_H
#define _SBUISIMULATEDLOCKOUTASSERTION_H

@class BSSimpleAssertion, NSString;
@protocol BSDescriptionProviding;



@interface _SBUISimulatedLockoutAssertion : BSSimpleAssertion <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lockoutState; // ivar: _lockoutState
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 queue:(id)arg2 invalidationBlock:(id)arg3 ;
-(id)initWithLockoutState:(NSUInteger)arg0 reason:(id)arg1 invalidationBlock:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif