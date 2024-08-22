// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQINTERNETPRIVACYSPECIFIERPROVIDER_H
#define ICQINTERNETPRIVACYSPECIFIERPROVIDER_H

@class AIDAAccountManager, NSString, PSSpecifier, NSArray;
@protocol ICQUpgradeFlowManagerDelegate, AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeFlowManager.h"
#import "ICQInternetPrivacyViewController.h"
#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacySpecifierProvider : NSObject <ICQUpgradeFlowManagerDelegate, AAUISpecifierProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICQUpgradeFlowManager *flowManager; // ivar: _flowManager
@property (nonatomic) BOOL hasProfileRestriction; // ivar: _hasProfileRestriction
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internetPrivacyAvailability; // ivar: _internetPrivacyAvailability
@property (retain, nonatomic) ICQInternetPrivacyViewController *internetPrivacyController; // ivar: _internetPrivacyController
@property (retain, nonatomic) PSSpecifier *internetPrivacySpecifier; // ivar: _internetPrivacySpecifier
@property (retain, nonatomic) NSObject *observationToken; // ivar: _observationToken
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (retain, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(BOOL)_handleLocalBackupControllerURL:(id)arg0 ;
-(BOOL)_handleQuotaJourneyURL:(id)arg0 ;
-(BOOL)_shouldShowInternetPrivacySpecifier;
-(BOOL)handleURL:(id)arg0 ;
-(id)_valueForInternetPrivacySpecifier:(id)arg0 ;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;
-(id)makeDefaultInternetPrivacySpecifier;
-(void)_configureInternetPrivacySpecifier:(id)arg0 ;
-(void)_controllerLoadAction;
-(void)_fetchStatus;
-(void)_fetchStatusWithCompletion:(id)arg0 ;
-(void)_internetPrivacySpecifierLoadJourney:(id)arg0 ;
-(void)_internetPrivacySpecifierWasTapped:(id)arg0 ;
-(void)_presentLearnMoreSubscriberPage;
-(void)_registerForNSPDarwinNotification;
-(void)_setupWithAltDSID:(id)arg0 ;
-(void)_unregisterForNSPDarwinNotification;
-(void)dealloc;
-(void)reloadQuotaInfo;
-(void)reloadSpecifer:(id)arg0 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif