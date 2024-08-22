// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCESSORYDEVICEEXPRESSALERTVIEWCONTROLLER_H
#define PKACCESSORYDEVICEEXPRESSALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, NSString, SBSAssertion, PKAssertion, CLInUseAssertion, NSMutableDictionary, PKAccessoryDevice, PKAccessoryDeviceMonitor, PKFieldProperties, NSArray;
@protocol SBSHardwareButtonEventConsuming, PKAccessoryDeviceMonitorDelegate, PKAccessoryDeviceViewDelegate, BSInvalidatable;


#import "PKAccessoryDeviceView.h"

@interface PKAccessoryDeviceExpressAlertViewController : SBUIRemoteAlertServiceViewController <SBSHardwareButtonEventConsuming, PKAccessoryDeviceMonitorDelegate, PKAccessoryDeviceViewDelegate>

 {
    BOOL _deviceUILocked;
    NSInteger _presentationSource;
    NSString *_passUniqueIdentifier;
    id *_staticGlyphResources;
    id<BSInvalidatable> *_lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    BOOL _brightnessRampingAllowed;
    BOOL _backlightActive;
    BOOL _processHomeButtonEvents;
    CLInUseAssertion *_passbookForegroundAssertion;
    BOOL _appeared;
    NSMutableDictionary *_registeredExpressObservers;
    BOOL _hasMultiple;
    NSInteger _accessoryDeviceViewState;
    BOOL _presentedOnView;
    PKAccessoryDeviceView *_accessoryDeviceView;
    PKAccessoryDevice *_accessoryDevice;
    PKAccessoryDeviceMonitor *_accessoryDeviceMonitor;
    CGRect _windowedAccessoryCutoutFrameInScreen;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canShowWhileLocked;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_expressNotificationNames;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_appearIfNecessary;
-(void)_changeStateIfNecessaryTo:(NSInteger)arg0 ;
-(void)_contactlessInterfaceSessionDidAuthorize:(id)arg0 ;
-(void)_contactlessInterfaceSessionFinishTransaction:(id)arg0 ;
-(void)_dismiss;
-(void)_dismissIfRestricted;
-(void)_dismissImmediately:(BOOL)arg0 ;
-(void)_handleExpressNotification:(id)arg0 ;
-(void)_invalidate;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg0 ;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg0 ;
-(void)_registerObserverForNotificationName:(id)arg0 center:(id)arg1 handler:(id)arg2 ;
-(void)accessoryDeviceDidChangeStateTo:(NSInteger)arg0 ;
-(void)accessoryDeviceDidReachHardTimeout;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didAttachSleeveAccessory:(id)arg0 ;
-(void)didDetachSleeveAccessory;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif