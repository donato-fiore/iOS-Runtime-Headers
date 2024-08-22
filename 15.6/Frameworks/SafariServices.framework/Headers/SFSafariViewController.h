// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSAFARIVIEWCONTROLLER_H
#define SFSAFARIVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, UIView, NSArray, _WKActivatedElementInfo, NSMutableDictionary, _UIRemoteViewController, NSString, NSURL, UIColor, SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol>;
@protocol SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFLinkPreviewHeaderDelegate, _UIRemoteViewControllerContaining, SFSafariViewControllerDelegate;


#import "SFBrowserRemoteViewController.h"
#import "SFInteractiveDismissController.h"
#import "SFSafariLaunchPlaceholderView.h"
#import "SFSafariViewControllerConfiguration.h"
#import "_SFURLTextPreviewViewController.h"

@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFLinkPreviewHeaderDelegate, _UIRemoteViewControllerContaining>

 {
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    BOOL _hasBeenDisplayedAtLeastOnce;
    BOOL _remoteViewControllerHasBeenAdded;
    BOOL _hasNotifiedDelegateAboutInitialLoadCompleted;
    BOOL _hasRestartedViewService;
    UIView *_nanoHeaderView;
    NSArray *_previewActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    NSArray *_activityItemsForCustomActivities;
    BOOL _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    SFSafariLaunchPlaceholderView *_launchPlaceholderView;
    NSInteger _displayMode;
    SFSafariViewControllerConfiguration *_configuration;
    BOOL _viewSizeIsTransitioning;
    UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIView *_linkPreviewHitTestView;
}


@property (retain, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property (nonatomic, setter=_setShowingLinkPreview:) BOOL _showingLinkPreview;
@property (nonatomic, setter=_setShowingLinkPreviewWithMinimalUI:) BOOL _showingLinkPreviewWithMinimalUI;
@property (readonly, copy, nonatomic) SFSafariViewControllerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defersAddingRemoteViewController; // ivar: _defersAddingRemoteViewController
@property (weak, nonatomic) NSObject<SFSafariViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dismissButtonStyle; // ivar: _dismissButtonStyle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *initialURL; // ivar: _initialURL
@property (retain, nonatomic) UIColor *preferredBarTintColor; // ivar: _preferredBarTintColor
@property (retain, nonatomic) UIColor *preferredControlTintColor; // ivar: _preferredControlTintColor
@property (readonly, nonatomic) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)_supportsPrewarming;
+(id)prewarmConnectionsToURLs:(id)arg0 ;
-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(id)_defaultPreviewActionItems;
-(id)_fetchCustomActivitiesForURL:(id)arg0 title:(id)arg1 ;
-(id)_fetchExcludedActivityTypesForURL:(id)arg0 title:(id)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 ;
-(id)initWithURL:(id)arg0 entersReaderIfAvailable:(BOOL)arg1 ;
-(id)previewActionItems;
-(void)_addLaunchPlaceholderView;
-(void)_addRemoteView;
-(void)_addRemoteViewControllerIfNeeded;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_connectToService;
-(void)_didLoadRemoteViewController:(id)arg0 ;
-(void)_forwardNotificationToViewService:(id)arg0 ;
-(void)_removeLaunchPlaceholderView;
-(void)_removeRemoteViewController;
-(void)_restartServiceViewController;
-(void)_setEdgeSwipeDismissalEnabled:(BOOL)arg0 ;
-(void)_setUpWithURL:(id)arg0 configuration:(id)arg1 ;
-(void)_updateLinkPreviewHitTestView;
-(void)_updatePreviewViewControllerWithLinkPreviewEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateScrollViewIndicatorInsets;
-(void)dealloc;
-(void)interactiveDismissControllerDidBegin:(id)arg0 ;
-(void)interactiveDismissControllerDidCancel:(id)arg0 ;
-(void)interactiveDismissControllerDidEnd:(id)arg0 ;
-(void)linkPreviewHeader:(id)arg0 didEnableLinkPreview:(BOOL)arg1 ;
-(void)loadView;
-(void)remoteViewController:(id)arg0 didDecideShouldShowLinkPreviews:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg0 didFinishInitialLoad:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg0 executeCustomActivityProxyID:(id)arg1 ;
-(void)remoteViewController:(id)arg0 fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 ;
-(void)remoteViewController:(id)arg0 hostApplicationOpenURL:(id)arg1 ;
-(void)remoteViewController:(id)arg0 initialLoadDidRedirectToURL:(id)arg1 ;
-(void)remoteViewController:(id)arg0 setSwipeGestureEnabled:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg0 viewServiceDidTerminateWithError:(id)arg1 ;
-(void)remoteViewControllerDidLoadWebView:(id)arg0 ;
-(void)remoteViewControllerWillDismiss:(id)arg0 ;
-(void)remoteViewControllerWillOpenCurrentPageInBrowser:(id)arg0 ;
-(void)serviceProxyWillQueueInvocation:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)setTransitioningDelegate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif