// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSLAUNCHCONTENTVIEWCONTROLLER_H
#define CPSLAUNCHCONTENTVIEWCONTROLLER_H

@class UIViewController, UIView, UIImageView, UIStackView, CPSClipMetadata, CPSSessionProxy, NSLayoutConstraint, NSError, UIButton, UIImage, NSString, NSNumber;
@protocol CPSSessionProxyDelegate, CPSPermissionsViewControllerDelegate, PRXCardContentProviding, OS_nw_path_monitor, OS_nw_path, CPSLaunchContentViewControllerDelegate;


#import "CPSVibrantLabel.h"
#import "CPSAppMetadataView.h"
#import "CPSPermissionView.h"
#import "CPSAppClipUnavailableView.h"
#import "CPSPermissionsViewController.h"
#import "CPSVibrantButton.h"

@interface CPSLaunchContentViewController : UIViewController <CPSSessionProxyDelegate, CPSPermissionsViewControllerDelegate, PRXCardContentProviding>

 {
    UIView *_heroContainerView;
    UIImageView *_heroImageView;
    UIImageView *_heroMirrorImageView;
    UIView *_separatorView;
    UIView *_informationContainerView;
    UIStackView *_informationContentView;
    UIView *_clipInformationContainerView;
    CPSVibrantLabel *_clipNameVibrantLabel;
    CPSVibrantLabel *_clipDescriptionVibrantLabel;
    CPSAppMetadataView *_appMetadataView;
    CPSClipMetadata *_clipMetadata;
    CPSSessionProxy *_sessionProxy;
    CPSPermissionView *_permissionView;
    CPSAppClipUnavailableView *_unavailableView;
    CPSPermissionsViewController *_permissionsViewController;
    NSLayoutConstraint *_heroContainerAspectRatioConstraint;
    BOOL _shouldPlaySoundAndHaptic;
    BOOL _didInstallApplicationPlaceholder;
    BOOL _didSendAnalytics;
    NSObject<OS_nw_path_monitor> *_networkPathMonitor;
    NSObject<OS_nw_path> *_networkPath;
    NSError *_proxyLoadingError;
    UIButton *_openButton;
    CPSVibrantButton *_closeButton;
    CPSVibrantButton *_openVibrantButton;
    NSUInteger _displayMode;
    id *_delayedPermissionViewUnhideBlock;
    BOOL _willConfigurePermissionView;
}


@property (retain, nonatomic, setter=_setHeroImage:) UIImage *_heroImage;
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (readonly, nonatomic) NSInteger cardStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSLaunchContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissalInProgress; // ivar: _dismissalInProgress
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, setter=uiMock_setOpenButtonEnabled:) NSNumber *uiMock_openButtonEnabled; // ivar: _uiMock_openButtonEnabled


-(BOOL)_canLaunchAppSimultaneouslyWithInvocationCardDismissal;
-(BOOL)_canShowWhileLocked;
-(BOOL)_userNotificationAuthorizationDenied;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)shouldRequestLocationConfirmationPermission;
-(id)_reasonStringForError:(id)arg0 ;
-(id)_setUpOpenButtonIfNeeded;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 displayMode:(NSUInteger)arg1 ;
-(void)_dismissCardWithClipDidOpen:(BOOL)arg0 andPerformBlockToLaunchApp:(id)arg1 ;
-(void)_dismissCardWithClipDidOpen:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dismissWithClipDidOpen:(BOOL)arg0 completion:(id)arg1 ;
-(void)_openAppClip:(id)arg0 ;
-(void)_sendAnalyticsIfNeeded;
-(void)_updateContent;
-(void)_updateCornerRadiusForButtons;
-(void)_updateHeroImageIfNeeded;
-(void)cancelSession;
-(void)configurePermissionView;
-(void)createNetworkPathMonitor;
-(void)determineClipCompatibility;
-(void)disableOpenButton;
-(void)dismiss:(id)arg0 ;
-(void)enableOpenButton;
-(void)handlePolicyRecovery;
-(void)loadView;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)logDismissalFromCloseButton:(BOOL)arg0 ;
-(void)openAppStore;
-(void)permissionsViewControllerDidFinish:(id)arg0 ;
-(void)playSoundAndHaptic;
-(void)proxy:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)proxy:(id)arg0 didRetrieveApplicationIcon:(id)arg1 ;
-(void)proxy:(id)arg0 didRetrieveHeroImage:(id)arg1 ;
-(void)proxyDidInstallApplicationPlaceholder:(id)arg0 ;
-(void)proxyDidUpdateMetadata:(id)arg0 ;
-(void)proxyRemoteServiceDidCrash:(id)arg0 ;
-(void)setUnavailableViewHidden:(BOOL)arg0 ;
-(void)setUpCard;
-(void)setUpClipInformationContainerView;
-(void)setUpHeroSection;
-(void)setUpInformationSection;
-(void)showUnavailableViewWithReason:(id)arg0 ;
-(void)signInToAppStore;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateOpenButton;
-(void)updatePreferredContentSizeForCardWidth:(CGFloat)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif