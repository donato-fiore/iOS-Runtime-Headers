// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBUIBIOMETRICOPERATIONASSERTION_H
#define _SBUIBIOMETRICOPERATIONASSERTION_H

@class BSSimpleAssertion, NSString, NSSet;
@protocol BSDescriptionProviding;



@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *operations; // ivar: _operations
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 queue:(id)arg2 invalidationBlock:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif