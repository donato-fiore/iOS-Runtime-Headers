// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSPROCESSASSERTION_H
#define FBSPROCESSASSERTION_H

@class BKSProcessAssertion, NSString;
@protocol BSDescriptionProviding, FBSProcess;

#import <Foundation/Foundation.h>

#import "FBSProcessExecutionPolicy.h"

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic) NSUInteger activationCount; // ivar: _activationCount
@property (readonly, nonatomic) BKSProcessAssertion *assertion; // ivar: _assertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) FBSProcessExecutionPolicy *policy; // ivar: _policy
@property (readonly, weak, nonatomic) NSObject<FBSProcess> *process; // ivar: _process
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithName:(id)arg0 process:(id)arg1 policy:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)invalidate;


@end


#endif