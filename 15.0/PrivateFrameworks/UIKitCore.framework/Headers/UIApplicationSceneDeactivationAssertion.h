// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAPPLICATIONSCENEDEACTIVATIONASSERTION_H
#define UIAPPLICATIONSCENEDEACTIVATIONASSERTION_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "UIApplicationSceneDeactivationManager.h"

@interface UIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic, getter=isAcquired) BOOL acquired; // ivar: _acquired
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIApplicationSceneDeactivationManager *manager; // ivar: _manager
@property (readonly, copy, nonatomic) id *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithReason:(NSInteger)arg0 manager:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)acquire;
// -(void)acquireWithPredicate:(id)arg0 transitionContext:(unk)arg1  ;
-(void)dealloc;
-(void)relinquish;


@end


#endif