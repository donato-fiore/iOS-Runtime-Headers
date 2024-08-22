// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUIINTENTHANDLINGVIEWCONTROLLER_H
#define APUIINTENTHANDLINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, ATXAction, CRKCardPresentation, UIViewController<CRKCardViewControlling>, NSString, INIntent;
@protocol CRKCardPresentationDelegate, CRKCardViewControllerDelegate, APUIWFLIntentControllerDelegate, APUIIntentHandlingViewControllerDelegate;


#import "APUIWFLIntentController.h"

@interface APUIIntentHandlingViewController : UIViewController <CRKCardPresentationDelegate, CRKCardViewControllerDelegate, APUIWFLIntentControllerDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) ATXAction *atxAction; // ivar: _atxAction
@property (retain, nonatomic) CRKCardPresentation *cardPresentation; // ivar: _cardPresentation
@property (readonly, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // ivar: _currentCardViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUIIntentHandlingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (nonatomic) BOOL intentIsDirty; // ivar: _intentIsDirty
@property (nonatomic) CGFloat preferredPlatterContentHeight; // ivar: _preferredPlatterContentHeight
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressSpinner; // ivar: _suppressSpinner
@property (retain, nonatomic) APUIWFLIntentController *wfIntentController; // ivar: _wfIntentController


-(BOOL)_canShowWhileLocked;
-(BOOL)intentController:(id)arg0 shouldRequireConfirmationForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(NSUInteger)_cardFormatForContentRequest:(id)arg0 ;
-(id)_contentForCardRequestWithInteraction:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(id)titleForConfirmAction;
-(void)_constructCardViewControllerForInteraction:(id)arg0 completion:(id)arg1 ;
-(void)_createOrUpdateCardViewControllerForInteraction:(id)arg0 completion:(id)arg1 ;
-(void)_installChildViewController:(id)arg0 ;
-(void)_setupProgressIndicator;
-(void)_updateCardViewControllerForInteraction:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)beginRunningIntent;
-(void)cardViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)confirmationGranted:(BOOL)arg0 ;
-(void)intentController:(id)arg0 didFailWithError:(id)arg1 forInteraction:(id)arg2 ;
-(void)intentController:(id)arg0 didHandleInteraction:(id)arg1 ;
-(void)intentController:(id)arg0 requiresConfirmationForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(void)intentController:(id)arg0 requiresContinuingInAppForIntent:(id)arg1 proceedHandler:(id)arg2 ;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg0 ;
-(void)launchAppWithCompletionHandler:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif