// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRKDATACOLLECTIONONBOARDINGVIEWCONTROLLER_H
#define BRKDATACOLLECTIONONBOARDINGVIEWCONTROLLER_H

@class OBTextWelcomeController;


#import "BRKSettings.h"

@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {
    BRKSettings *_settings;
}




+(BOOL)shouldPresentOnboarding;
+(void)presentInViewController:(id)arg0 ;
-(void)openSettings;
-(void)tappedDisable;
-(void)tappedEnable;
-(void)tappedLearnMore;
-(void)viewDidLoad;


@end


#endif