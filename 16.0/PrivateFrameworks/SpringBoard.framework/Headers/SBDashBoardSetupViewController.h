// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDSETUPVIEWCONTROLLER_H
#define SBDASHBOARDSETUPVIEWCONTROLLER_H

@class CSCoverSheetViewControllerBase, CSCoverSheetViewController, NSString, NSTimer, NSDictionary, NSArray, NSMutableArray, UITapGestureRecognizer, UIHoverGestureRecognizer;
@protocol STTelephonyStateObserver, CSEventHandling, UIGestureRecognizerDelegate;


#import "SBSetupWiFiScanner.h"
#import "SBActivationInfoViewController.h"
#import "SBSetupRegulatoryInfoViewController.h"
#import "SBSetupManager.h"
#import "SBTelephonyManager.h"

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <STTelephonyStateObserver, CSEventHandling, UIGestureRecognizerDelegate>

 {
    SBSetupWiFiScanner *_wifiScanner;
    SBActivationInfoViewController *_activationInfoViewController;
    SBSetupRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBSetupManager *_setupManager;
    CSCoverSheetViewController *_coverSheetViewController;
    SBTelephonyManager *_telephonyManager;
    NSString *_configureKey;
    NSString *_wifiPrimaryLanguage;
    NSString *_telephonyPrimaryLanguage;
    NSTimer *_cycleStartTimer;
    NSDictionary *_storeRestrictedStrings;
    NSDictionary *_activationLockStrings;
    NSString *_maskedAppleID;
    NSArray *_stringsOrdering;
    NSMutableArray *_currentStringsOrdering;
    NSUInteger _currentStringsIndex;
    BOOL _shouldResetOrderingOnNextCycle;
    BOOL _isCyclingComponents;
    NSUInteger _componentsToCycle;
    CGFloat _customDelayDuration;
    BOOL _isStoreRestricted;
    BOOL _isActivationLocked;
    UITapGestureRecognizer *_pointerClickGestureRecognizer;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isSecurityResearchDevice;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isCyclingComponents:(NSUInteger)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationType;
-(NSUInteger)_componentsRelevantToPointerSuppression;
-(NSUInteger)_componentsToStartCycling;
-(id)_alignedMarketingOrdering;
-(id)_applicableIdentifierForDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)_currentActivationLockStringsDictionary;
-(id)_currentLanguageIdentifier;
-(id)_currentStoreRestrictedStringsDictionary;
-(id)_displayStringForLocalizedString:(id)arg0 fallbackString:(id)arg1 ;
-(id)_importantLanguageIdentifiers;
-(id)_subcriptionDataSourceDescription:(NSInteger)arg0 ;
-(id)_subscriptionInfoForSubscriptionDataSource:(NSInteger)arg0 ;
-(id)_supportedLanguageIdentifierFromRegionalLanguageIdentifier:(id)arg0 countryCode:(id)arg1 ;
-(id)firstSupportedLanguageIdentifierInRegionalLanguageIdentifiers:(id)arg0 countryCode:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(id)initWithCoverSheetViewController:(id)arg0 telephonyManager:(id)arg1 ;
-(id)setupView;
-(void)_animateComponentsForNewCycle;
-(void)_cancelWifiScan;
-(void)_checkIfActivationLocked;
-(void)_didClickHomeAffordance:(id)arg0 ;
-(void)_handleHoverEvent:(id)arg0 ;
-(void)_incrementLocalizedStringsForNewCycle;
-(void)_infoButtonTapped:(id)arg0 ;
-(void)_regulatoryInfoButtonTapped:(id)arg0 ;
-(void)_resetDisplayedLocalizedStringsImmediately:(BOOL)arg0 ;
-(void)_startCyclingComponents:(NSUInteger)arg0 withDelay:(CGFloat)arg1 ;
-(void)_startWifiScan;
-(void)_stopCyclingComponents:(NSUInteger)arg0 ;
-(void)_updateDisplayedStrings;
-(void)_updateForLockInfo:(id)arg0 ;
-(void)_updateLanguageFromSubscriptionDataSource:(NSInteger)arg0 ;
-(void)_updateLanguageFromTelephony;
-(void)_updateStringOrderingForLanguageChange;
-(void)_updateWifiPrimaryLanguageFromDiscoveredCountryCodes:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif