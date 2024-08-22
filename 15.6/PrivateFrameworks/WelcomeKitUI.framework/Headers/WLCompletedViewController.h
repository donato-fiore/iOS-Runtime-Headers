// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLCOMPLETEDVIEWCONTROLLER_H
#define WLCOMPLETEDVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLCompletedViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
}


@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWelcomeController:(id)arg0 errorInfo:(id)arg1 ;
-(void)_continueTapped:(id)arg0 ;


@end


#endif