// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUILOCATIONSERVICESPRIVACYALERTSLEVELCONTROLLER_H
#define PUILOCATIONSERVICESPRIVACYALERTSLEVELCONTROLLER_H

@class NSNumber;


#import "PUILocationServicesListController.h"

@interface PUILocationServicesPrivacyAlertsLevelController : PUILocationServicesListController {
    NSNumber *_authorizationPromptMapDisplayEnabled;
}




-(BOOL)shouldReloadSpecifiersOnResume;
-(id)authorizationPromptMapDisplayEnabled:(id)arg0 ;
-(id)specifiers;
-(void)setAuthorizationPromptMapDisplayEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif