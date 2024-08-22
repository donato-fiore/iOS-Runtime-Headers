// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTONBOARDINGNAVIGATIONCONTROLLER_H
#define NCDIGESTONBOARDINGNAVIGATIONCONTROLLER_H

@class UINavigationController, NSArray, NSSet, NSDate, NSString;
@protocol NCOnboardingViewControllerDelegate, NCDigestOnboardingNavigationControllerDelegate;


#import "NCAppPickerContentProvider.h"

@interface NCDigestOnboardingNavigationController : UINavigationController <NCOnboardingViewControllerDelegate>

 {
    NSArray *_appBundleIdentifiers;
    BOOL _appBundleIdentifiersMutated;
    NSArray *_deliveryTimes;
    BOOL _deliveryTimesMutated;
    NSSet *_shownAppBundleIdentifiers;
    BOOL _userFinishedOnboarding;
    NSDate *_startTime;
    BOOL _userDeferredOnboarding;
    BOOL _appPickerShowMoreButtonWasPressed;
    int _entrySource;
    int _finalUIShown;
    NCAppPickerContentProvider *_contentProvider;
    BOOL _waitingToPresentAppPicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NCDigestOnboardingNavigationControllerDelegate> *onboardingDelegate; // ivar: _onboardingDelegate
@property (readonly) Class superclass;


+(id)navigationControllerWithOnboardingDelegate:(id)arg0 deferButtonText:(id)arg1 ;
+(id)navigationControllerWithOnboardingDelegate:(id)arg0 deferButtonText:(id)arg1 previousBundleIdentifiersSelection:(id)arg2 previousDeliveryTimesSelection:(id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(id)_initWithWithOnboardingDelegate:(id)arg0 deferButtonText:(id)arg1 previousBundleIdentifiersSelection:(id)arg2 previousDeliveryTimesSelection:(id)arg3 entrySource:(int)arg4 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_pushToAppPicker;
-(void)_saveStateOfOnboardingViewController:(id)arg0 ;
-(void)onboardingViewControllerDidDeferSetup:(id)arg0 ;
-(void)onboardingViewControllerNextButtonTapped:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif