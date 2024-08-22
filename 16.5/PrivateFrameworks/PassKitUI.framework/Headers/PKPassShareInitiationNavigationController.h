// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREINITIATIONNAVIGATIONCONTROLLER_H
#define PKPASSSHAREINITIATIONNAVIGATIONCONTROLLER_H

@class PKSharedPassSharesController, MFMessageComposeViewController, NSString;
@protocol PKPassSharePreviewViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate, MFMessageComposeViewControllerDelegate, PKPassShareActivationOverviewViewControllerDelegate, PKClientShareSecureElementPassViewControllerDelegate;


#import "PKNavigationController.h"
#import "PKShareableCredentialsMessageComposeViewController.h"
#import "PKPassShareInitiationContext.h"
#import "PKShareInitiationAnalyticsReporter.h"
#import "PKPassSharePreviewViewController.h"
#import "PKInterceptableActivityViewController.h"

@interface PKPassShareInitiationNavigationController : PKNavigationController <PKPassSharePreviewViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate, MFMessageComposeViewControllerDelegate, PKPassShareActivationOverviewViewControllerDelegate>

 {
    PKSharedPassSharesController *_sharesController;
    PKShareableCredentialsMessageComposeViewController *_messageComposer;
    MFMessageComposeViewController *_carKeyMessageComposer;
    PKPassShareInitiationContext *_context;
    PKShareInitiationAnalyticsReporter *_analyticsReporter;
    PKPassSharePreviewViewController *_previewViewController;
    PKInterceptableActivityViewController *_activityViewController;
    NSUInteger _currentStep;
    BOOL _hasAppeared;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFromPeopleScreen; // ivar: _isFromPeopleScreen
@property (weak, nonatomic) NSObject<PKClientShareSecureElementPassViewControllerDelegate> *shareDelegate; // ivar: _shareDelegate
@property (nonatomic) BOOL shouldPromptUserToShare;
@property (readonly) Class superclass;


-(BOOL)interceptableActivityViewController:(id)arg0 shouldInterceptActivitySelectionOfType:(id)arg1 ;
-(NSUInteger)_transitionToNextStepIsMockTransition:(BOOL)arg0 ;
-(id)_activityItemForActivationCode;
-(id)_placeholderActivityItem;
-(id)initWithSharesController:(id)arg0 environment:(NSUInteger)arg1 ;
-(void)_flowDidCancel;
-(void)_flowDidCancelWithError:(id)arg0 ;
-(void)_flowDidFinishWithSuccess;
-(void)_revokeCreatedShareWithCompletion:(id)arg0 ;
-(void)_sendOverLegacyCarKeyiMessage;
-(void)_sendOverSelectedChannel;
-(void)_sendOveriMessage;
-(void)_sendOveriMessageUsingComposeViewController;
-(void)_transitionToNextStep;
-(void)_transitionToStep:(NSUInteger)arg0 ;
-(void)_updateShareActivationOptions;
-(void)interceptableActivityViewController:(id)arg0 didFinishWithShare:(BOOL)arg1 ;
-(void)interceptableActivityViewController:(id)arg0 didInterceptActivitySelectionOfType:(id)arg1 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)passShareIntroductionExplanationViewControllerDidCancel:(id)arg0 ;
-(void)passShareIntroductionExplanationViewControllerDidContinue:(id)arg0 ;
-(void)shareActivationOverviewViewControllerDidFinish:(id)arg0 ;
-(void)shareActivationOverviewViewControllerDidSelectShareCode:(id)arg0 ;
-(void)shareActivityDidFinishWithShare:(BOOL)arg0 ;
-(void)sharePreviewViewControllerDidCancel:(id)arg0 ;
-(void)sharePreviewViewControllerDidContinue:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif