// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLAYOUTSTATETRANSITIONCONTEXT_H
#define SBLAYOUTSTATETRANSITIONCONTEXT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBLayoutState.h"
#import "SBWorkspaceTransaction.h"

@interface SBLayoutStateTransitionContext : NSObject

@property (readonly, nonatomic) BOOL animationsDisabled; // ivar: _animationsDisabled
@property (readonly, weak, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationTransitionContext; // ivar: _applicationTransitionContext
@property (readonly, nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) SBLayoutState *fromLayoutState; // ivar: _fromLayoutState
@property (readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) SBLayoutState *toLayoutState; // ivar: _toLayoutState
@property (readonly, weak, nonatomic) SBWorkspaceTransaction *workspaceTransaction; // ivar: _workspaceTransaction


-(id)init;
-(id)initWithWorkspaceTransaction:(id)arg0 ;
-(void)transitionCompletedWithError:(id)arg0 ;


@end


#endif