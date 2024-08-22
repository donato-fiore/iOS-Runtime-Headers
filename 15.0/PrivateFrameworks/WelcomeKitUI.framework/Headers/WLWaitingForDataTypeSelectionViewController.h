// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLWAITINGFORDATATYPESELECTIONVIEWCONTROLLER_H
#define WLWAITINGFORDATATYPESELECTIONVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLWaitingForDataTypeSelectionViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSourceDevice:(id)arg0 welcomeController:(id)arg1 ;


@end


#endif