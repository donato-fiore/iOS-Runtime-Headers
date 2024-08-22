// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI21WELCOMEVIEWCONTROLLER_H
#define _TTC9SEYMOURUI21WELCOMEVIEWCONTROLLER_H



#import "SMUOBWelcomeController.h"

@interface _TtC9SeymourUI21WelcomeViewController : SMUOBWelcomeController {
    ? dismissHandler;
    ? privacyPreferenceClient;
    ? storefrontLocalizer;
    ? version;
    ? sheet;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapContinueButton;
-(void)viewDidLoad;


@end


#endif