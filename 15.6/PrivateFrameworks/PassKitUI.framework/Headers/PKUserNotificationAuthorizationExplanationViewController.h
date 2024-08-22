// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKUSERNOTIFICATIONAUTHORIZATIONEXPLANATIONVIEWCONTROLLER_H
#define PKUSERNOTIFICATIONAUTHORIZATIONEXPLANATIONVIEWCONTROLLER_H

@class PKUserNotificationAuthorizationController, NSString;
@protocol PKPassLibraryDataProvider;


#import "PKExplanationViewController.h"

@interface PKUserNotificationAuthorizationExplanationViewController : PKExplanationViewController {
    PKUserNotificationAuthorizationController *_controller;
    id<PKPassLibraryDataProvider> *_dataProvider;
    NSUInteger _contentTypeToDisplay;
    BOOL _didBeginWalletSettingsSubject;
    NSString *_referralSource;
    NSString *_productType;
}


@property (readonly, nonatomic) BOOL isPresentingNotificationAuthorizationPrompt; // ivar: _isPresentingNotificationAuthorizationPrompt
@property (copy, nonatomic) id *nextStepHandler; // ivar: _nextStepHandler


-(NSUInteger)contentTypeToDisplay;
-(id)_analyticsPartialEventDictionaryWithButtonTag:(id)arg0 pageTag:(id)arg1 ;
-(id)initWithController:(id)arg0 context:(NSInteger)arg1 dataProvider:(id)arg2 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)_reportContinueButtonTapped;
-(void)_reportNotNowButtonTapped;
-(void)_reportNotificationAuthorizationButtonTapped:(BOOL)arg0 ;
-(void)_reportNotificationPromptDidAppear;
-(void)_reportViewDidAppear;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif