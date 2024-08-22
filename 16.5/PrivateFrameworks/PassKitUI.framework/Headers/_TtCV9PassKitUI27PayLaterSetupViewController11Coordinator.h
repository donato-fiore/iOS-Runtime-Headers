// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI27PAYLATERSETUPVIEWCONTROLLER11COORDINATOR_H
#define _TTCV9PASSKITUI27PAYLATERSETUPVIEWCONTROLLER11COORDINATOR_H

@protocol PKPayLaterSetupFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI27PayLaterSetupViewController11Coordinator : NSObject <PKPayLaterSetupFlowControllerDelegate>

 {
    ? parent;
    ? didSelectAction;
    ? changeFundingModeTabAction;
    ? didFinishAction;
    ? controllerContext;
}




-(id)init;
-(void)payLaterSetupFlowController:(id)arg0 didSelect:(id)arg1 ;
-(void)payLaterSetupFlowController:(id)arg0 didTerminateApplicationState:(NSUInteger)arg1 ;
-(void)payLaterSetupFlowControllerDidFinish:(id)arg0 ;


@end


#endif