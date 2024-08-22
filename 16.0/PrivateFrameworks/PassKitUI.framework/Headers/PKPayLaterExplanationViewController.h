// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATEREXPLANATIONVIEWCONTROLLER_H
#define PKPAYLATEREXPLANATIONVIEWCONTROLLER_H

@class PKPayLaterDynamicContentPage, NSString;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable;


#import "PKExplanationViewController.h"
#import "PKPayLaterSetupFlowController.h"
#import "PKApplyController.h"

@interface PKPayLaterExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable>

 {
    PKPayLaterSetupFlowController *_setupController;
    PKApplyController *_applyController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    PKPayLaterDynamicContentPage *_languageDisclosureDynamicContentPage;
    BOOL _didBeginAnalyticsReporter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)analyticsDictionaryWithAdditionalDictionary:(id)arg0 pageTag:(id)arg1 setupController:(id)arg2 ;
-(id)_analyticsDictionaryWithAdditionalDictionary:(id)arg0 ;
-(id)_genericError;
-(id)initWithSetupFlowController:(id)arg0 ;
-(void)_reportAnalyticsBackPressed;
-(void)_setDynamicContentPage;
-(void)_showLanguageDisclosureIfNecessaryWithCompletion:(id)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif