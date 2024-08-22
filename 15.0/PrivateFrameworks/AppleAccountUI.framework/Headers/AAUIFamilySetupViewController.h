// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIFAMILYSETUPVIEWCONTROLLER_H
#define AAUIFAMILYSETUPVIEWCONTROLLER_H

@class ACAccount, ACAccountStore, AAGrandSlamSigner, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, NSArray, UINavigationItem, NSString;
@protocol FAFamilySetupPageDelegate, RemoteUIControllerDelegate, AAUIFamilySetupDelegate;


#import "AAUIBleachedNavigationController.h"

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate>

 {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
    BOOL _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_originalRightBarButtonItems;
    UINavigationItem *_navigationItemShowingSpinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIFamilySetupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isRunningInSettings;
-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(id)_createCloseButton;
-(id)_initWithAccount:(id)arg0 grandSlamSigner:(id)arg1 rootViewController:(id)arg2 ;
-(id)_urlForLaunchingSettings;
-(id)initTrimmedFlowWithAccount:(id)arg0 grandSlamSigner:(id)arg1 ;
-(id)initWithAccount:(id)arg0 grandSlamSigner:(id)arg1 familyEligibilityResponse:(id)arg2 ;
-(id)initWithAccount:(id)arg0 store:(id)arg1 ;
-(void)_closeButtonWasTapped:(id)arg0 ;
-(void)_hideActivitySpinnerInNavigationBar;
-(void)_loadRemoteUIPages;
-(void)_remoteUIDidCancel;
-(void)_sendUserToiTunesSettings;
-(void)_showActivitySpinnerInNavigationBar;
-(void)dealloc;
-(void)familySetupPage:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif