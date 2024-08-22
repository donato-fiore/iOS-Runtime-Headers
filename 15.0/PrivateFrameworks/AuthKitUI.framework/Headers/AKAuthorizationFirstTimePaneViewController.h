// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONFIRSTTIMEPANEVIEWCONTROLLER_H
#define AKAUTHORIZATIONFIRSTTIMEPANEVIEWCONTROLLER_H



#import "AKAuthorizationPaneViewController.h"

@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController



-(BOOL)shouldEmbedContentTrayIfNeeded;
-(void)_addContinueButtonToContext:(id)arg0 title:(id)arg1 ;
-(void)_addPrivacyLinkToContext:(id)arg0 ;
-(void)_addTitleToContext:(id)arg0 ;
-(void)_continueButtonSelected:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif