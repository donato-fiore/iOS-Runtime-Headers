// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBROTATEHOMESCREENWORKSPACETRANSACTION_H
#define SBROTATEHOMESCREENWORKSPACETRANSACTION_H

@class NSString;
@protocol SBUIAnimationControllerObserver;


#import "SBMainWorkspaceTransaction.h"
#import "SBDismissOverlaysAnimationController.h"

@interface SBRotateHomeScreenWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>

 {
    SBDismissOverlaysAnimationController *_animationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)begin;


@end


#endif