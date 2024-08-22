// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASETTINGSSPECIFIERPROVIDER_H
#define FASETTINGSSPECIFIERPROVIDER_H

@class FAFamilyCircle, PSListController, PSSpecifier, NSMutableArray, AAFamilyEligibilityResponse, NSString, NSOperationQueue, AIDAAccountManager, AAGrandSlamSigner, FARequestConfigurator, NSDictionary, NSArray;
@protocol FASetupDelegate, FAFamilySettingsViewControllerDelegate, RemoteUIControllerDelegate, _TtP14FamilyCircleUI40FAFamilySettingsViewControllerV2Delegate_, AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>

#import "FATableViewDecorator.h"
#import "FACircleContext.h"
#import "FAProfilePictureStore.h"

@interface FASettingsSpecifierProvider : NSObject <FASetupDelegate, FAFamilySettingsViewControllerDelegate, RemoteUIControllerDelegate, _TtP14FamilyCircleUI40FAFamilySettingsViewControllerV2Delegate_, AAUISpecifierProvider>

 {
    FAFamilyCircle *_familyCircle;
    BOOL _didFailToGetFamilyDetails;
    FATableViewDecorator *_remoteUIDecorator;
    PSListController *_presenter;
    PSSpecifier *_familyCellSpecifier;
    PSSpecifier *_invitationsCellSpecifier;
    BOOL _isLoadingFamilyDetails;
    NSMutableArray *_pendingFamilyDetailsCompletionBlocks;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    NSMutableArray *_pendingInvites;
    NSString *_familyStatusSummary;
    NSString *_invitationSummary;
    NSInteger _familyEligibilityStatus;
    BOOL _isHandlingURLForInvite;
    NSOperationQueue *_networkActivityQueue;
    AIDAAccountManager *_accountManager;
    AAGrandSlamSigner *_grandSlamSigner;
    FARequestConfigurator *_requestConfigurator;
    FACircleContext *_context;
    BOOL _delayedEnterInitiateFlow;
    FAProfilePictureStore *_familyPictureStore;
    NSDictionary *_cachedResourceDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)_isEnabled;
-(BOOL)handleURL:(id)arg0 ;
-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(NSUInteger)_familyState;
-(NSUInteger)cachePolicy;
-(id)_accountStore;
-(id)_acuPresenter;
-(id)_appleAccount;
-(id)_configureContextWithType:(id)arg0 resourceDictionary:(id)arg1 ;
-(id)_familyBaseSpecifierWithState:(NSUInteger)arg0 ;
-(id)_familySpecifier;
-(id)_grandSlamSigner;
-(id)_invitationsCellSpecifier;
-(id)_requestConfigurator;
-(id)_valueForFamilySpecifier:(id)arg0 ;
-(id)_valueForInvitiationsSpecifier:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(void)_clearFamilyState;
-(void)_handleFamilyChanged:(id)arg0 ;
-(void)_handleFamilyDetailsResponse:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_handleFamilyEligibilityResponse:(id)arg0 completion:(id)arg1 ;
-(void)_handleObjectModelChangeForController:(id)arg0 objectModel:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_handleShowChildTransferActionURL:(id)arg0 ;
-(void)_handleShowFamilyInviteActionURL:(id)arg0 ;
-(void)_handleShowFamilySettingsURL:(id)arg0 ;
-(void)_handleShowInviteActionURL:(id)arg0 isChildTransfer:(BOOL)arg1 ;
-(void)_handleShowInvitesActionURL:(id)arg0 ;
-(void)_handleStartFamilySetupActionURL:(id)arg0 ;
-(void)_initiateFamily;
-(void)_initiateFamilyWithResources:(id)arg0 ;
-(void)_loadFamilyDetailsWithCompletion:(id)arg0 ;
-(void)_loadFamilyEligibilityWithCompletion:(id)arg0 ;
-(void)_pendingInvitationsSpecifierWasTapped:(id)arg0 ;
-(void)_presentPendingInvitesRemoteUI;
-(void)_reloadFamily;
-(void)_reloadFamilySpecifiers;
-(void)_reloadFamilySpecifiersAnimated:(BOOL)arg0 ;
-(void)_setUpFamilySpecifierWasTapped:(id)arg0 ;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg0 ;
-(void)_viewFamilySpecifierWasTapped;
-(void)_viewFamilyWithResourceDictionary:(id)arg0 ;
-(void)dealloc;
-(void)familySettingsViewController2StopFamilySharing:(id)arg0 ;
-(void)familySettingsViewControllerDidDeleteFamily:(id)arg0 ;
-(void)familySettingsViewControllerDidUpdateFamily:(id)arg0 ;
-(void)familySetupViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(void)remoteUIController:(id)arg0 didRefreshObjectModel:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;


@end


#endif