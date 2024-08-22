// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUPGRADEFLOWMANAGER_H
#define ICQUPGRADEFLOWMANAGER_H

@class AAUIServerUIHookHandler, NSDictionary, NSString, UINavigationController, ICQOffer, NSData, AAUIRemoteUIController;
@protocol UINavigationControllerDelegate, ICQPageDelegate, RemoteUIControllerDelegate, ICQServerHookDelegate, ICQUpgradeFlowManagerDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeOfferViewController.h"
#import "ICQUpgradeFlowOptions.h"
#import "ICQAlertController.h"

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate, RemoteUIControllerDelegate, ICQServerHookDelegate>

 {
    id *_didComplete;
    BOOL _didReceiveiTunesCode;
    BOOL _didCompleteICQAction;
    ICQUpgradeOfferViewController *_busyOfferViewController;
    int _renewCredentialsCount;
    AAUIServerUIHookHandler *_serverHookHandler;
}


@property (retain, nonatomic) NSDictionary *bindings; // ivar: _bindings
@property (copy, nonatomic) NSString *closeURL; // ivar: _closeURL
@property (nonatomic) BOOL completedFamilySetup; // ivar: _completedFamilySetup
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQUpgradeFlowManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // ivar: _flowOptions
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *hostingNavigationController; // ivar: _hostingNavigationController
@property (readonly, nonatomic) ICQOffer *offer; // ivar: _offer
@property (retain, nonatomic) NSData *preloadedRemoteUIData; // ivar: _preloadedRemoteUIData
@property (retain, nonatomic) AAUIRemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (nonatomic) BOOL shouldNavigationControllerBeDismissed; // ivar: _shouldNavigationControllerBeDismissed
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQAlertController *upgradeAlertController; // ivar: _upgradeAlertController


+(BOOL)shouldShowForOffer:(id)arg0 ;
+(BOOL)shouldShowForPremiumOffer:(id)arg0 ;
+(BOOL)shouldSubclassShowForOffer:(id)arg0 ;
+(Class)subclassForOfferType:(NSInteger)arg0 ;
+(id)activeFlowManagers;
+(void)addActiveFlowManager:(id)arg0 ;
+(void)addHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
+(void)needsToRunWithCompletion:(id)arg0 ;
+(void)removeActiveFlowManager:(id)arg0 ;
-(BOOL)_shouldPresentRemoteFlow;
-(BOOL)needsNetwork;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_ICQNavigationControllerWithRootViewController:(id)arg0 ;
-(id)_whitelistedInProcessClients;
-(id)addParams:(id)arg0 toJourneyURL:(id)arg1 ;
-(id)init;
-(id)initBaseclassWithOffer:(id)arg0 ;
-(id)initSubclassWithOffer:(id)arg0 ;
-(id)initWithJourneyId:(id)arg0 ;
-(id)initWithJourneyId:(id)arg0 params:(id)arg1 ;
-(id)initWithOffer:(id)arg0 ;
-(void)_addAlertActionForAlertSpec:(id)arg0 buttonIndex:(NSInteger)arg1 ;
-(void)_addBlurEffectToNavigationController:(id)arg0 ;
-(void)_beginRemoteFlow;
-(void)_beginRemoteFlowWithURL:(id)arg0 ;
-(void)_cancelFlow;
-(void)_clearBusyOfferViewController;
-(void)_configurePresentingViewController:(id)arg0 ;
-(void)_configurePresentingViewController:(id)arg0 preloadedRemoteUIData:(id)arg1 ;
-(void)_initiateFamilySetupFlow;
-(void)_openURL:(id)arg0 completion:(id)arg1 ;
-(void)_performPageButtonActionWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)_presentPageWithSpecification:(id)arg0 ;
-(void)_presentRemoteUIUsingViewController:(id)arg0 ;
-(void)_presentRemoteUIUsingViewController:(id)arg0 withData:(id)arg1 ;
-(void)_presentUpgradeComplete;
-(void)_sendDelegateCancel;
-(void)_sendDelegateComplete;
-(void)_sendDelegateDidPresentViewController:(id)arg0 ;
-(void)_setBusyOfferViewController:(id)arg0 ;
-(void)_simulateDoneButton;
-(void)_tappedAlertLink:(id)arg0 ;
-(void)beginFlowWithPresentingViewController:(id)arg0 ;
-(void)beginJourney;
-(void)dismissUpgradeFlowWithSuccess:(BOOL)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentFlowHostedInNavigationController:(id)arg0 ;
-(void)presentRemoteViewWithData:(id)arg0 andURL:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)sender:(id)arg0 action:(NSInteger)arg1 parameters:(id)arg2 ;
-(void)shouldNotSignalDelegateOnDismiss;
-(void)showNetworkFailurePage;
-(void)showUpgradeFailurePage;


@end


#endif