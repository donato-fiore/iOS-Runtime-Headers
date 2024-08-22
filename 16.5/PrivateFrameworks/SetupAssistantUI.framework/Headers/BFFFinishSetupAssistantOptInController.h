// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFFINISHSETUPASSISTANTOPTINCONTROLLER_H
#define BFFFINISHSETUPASSISTANTOPTINCONTROLLER_H

@class VTUIEnrollTrainingViewController, NSString;
@protocol VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling;

#import <Foundation/Foundation.h>

#import "BFFFinishSetupAssistantOptInController.h"

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling>

 {
    BFFFinishSetupAssistantOptInController *_selfReference;
    VTUIEnrollTrainingViewController *_enrollmentController;
    BOOL _willOfferVoiceTrigger;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)finishSetupAssistantOptInController;
-(id)init;
-(id)viewControllerWithCompletion:(id)arg0 ;
-(void)continueSetup;
-(void)performExtendedInitializationWithCompletion:(id)arg0 ;
-(void)showLearnMore;
-(void)skipSetup;


@end


#endif