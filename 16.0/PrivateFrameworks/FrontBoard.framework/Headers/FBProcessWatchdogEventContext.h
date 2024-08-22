// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBPROCESSWATCHDOGEVENTCONTEXT_H
#define FBPROCESSWATCHDOGEVENTCONTEXT_H

@class NSString, FBSSceneSettings, FBSSceneTransitionContext;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSceneUpdateContext.h"

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSSceneSettings *sceneSettings; // ivar: _sceneSettings
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *sceneTransitionContext; // ivar: _sceneTransitionContext
@property (readonly, nonatomic) FBSceneUpdateContext *sceneUpdateContext; // ivar: _sceneUpdateContext
@property (readonly) Class superclass;


+(id)contextForEvent:(NSInteger)arg0 settings:(id)arg1 transitionContext:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif