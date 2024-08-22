// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAPPSETTINGSFACADE_H
#define VSAPPSETTINGSFACADE_H

@class VSAccountChannels, NSArray, NSOperation, VSIdentityProvider, UIViewController, NSOperationQueue, VSRestrictionsCenter, VSPersistentStorage;

#import <Foundation/Foundation.h>

#import "VSAppSettingsViewModel.h"

@interface VSAppSettingsFacade : NSObject

@property (retain, nonatomic) VSAccountChannels *accountChannels; // ivar: _accountChannels
@property (copy, nonatomic) NSArray *availableApps; // ivar: _availableApps
@property (retain, nonatomic) NSOperation *currentPresentationOperation; // ivar: _currentPresentationOperation
@property (copy, nonatomic) NSArray *decidedApps; // ivar: _decidedApps
@property (nonatomic) BOOL hasChannelApps; // ivar: _hasChannelApps
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (copy, nonatomic) NSArray *knownAppBundles; // ivar: _knownAppBundles
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel; // ivar: _mvpdAppSettingsViewModel
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController; // ivar: _mvpdInstallPromptPresentingViewController
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable; // ivar: _needsPresentationOfMVPDAppInstallPromptIfAvailable
@property (nonatomic) BOOL needsUpdateApps; // ivar: _needsUpdateApps
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (nonatomic) int registrationToken; // ivar: _registrationToken
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // ivar: _restrictionsCenter
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (copy, nonatomic) NSArray *unredeemedVouchers; // ivar: _unredeemedVouchers


-(BOOL)shouldShowMVPDAppInstallPrompt;
-(BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)arg0 ;
-(id)autorelease;
-(id)init;
-(id)initWithStorage:(id)arg0 restrictionsCenter:(id)arg1 ;
-(id)retain;
-(id)viewModelsForAppDescriptions:(id)arg0 bundleByBundleID:(id)arg1 vouchersForProvider:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4 ;
-(id)viewModelsForChannelAppDescriptions:(id)arg0 andNonChannelAppDescriptions:(id)arg1 ;
-(void)_updateApps;
-(void)dealloc;
-(void)presentMVPDAppInstallPromptFromViewController:(id)arg0 ;
-(void)release;


@end


#endif