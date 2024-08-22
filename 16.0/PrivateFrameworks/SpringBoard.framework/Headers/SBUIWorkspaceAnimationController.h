// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIWORKSPACEANIMATIONCONTROLLER_H
#define SBUIWORKSPACEANIMATIONCONTROLLER_H



#import "SBUIAnimationController.h"
#import "SBWorkspaceTransitionRequest.h"

@interface SBUIWorkspaceAnimationController : SBUIAnimationController

@property (readonly, nonatomic) SBWorkspaceTransitionRequest *workspaceTransitionRequest;


-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 ;


@end


#endif