// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLRETRYVIEWCONTROLLER_H
#define WLRETRYVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "WLOnboardingViewController.h"
#import "WLWelcomeController.h"

@interface WLRetryViewController : WLOnboardingViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *retryBlock; // ivar: _retryBlock
@property (readonly) Class superclass;


-(id)initWithWelcomeController:(id)arg0 ;
-(void)_retry:(id)arg0 ;


@end


#endif