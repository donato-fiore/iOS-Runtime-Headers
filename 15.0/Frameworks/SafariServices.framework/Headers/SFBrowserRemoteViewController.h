// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBROWSERREMOTEVIEWCONTROLLER_H
#define SFBROWSERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIWindowScene;
@protocol MPVolumeDisplaying, SFRemoteViewControllerProtocol, SFBrowserRemoteViewControllerDelegate;



@interface SFBrowserRemoteViewController : UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol>

 {
    BOOL _isInFullScreen;
    BOOL _hasBeenDisplayedAtLeastOnce;
    BOOL _shouldDetermineVisibilityOnNextLayout;
    BOOL _didLoadWebView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFBrowserRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_determineVisibilityIfNeeded;
-(void)_sf_sceneDidEnterBackground:(id)arg0 ;
-(void)_sf_sceneWillEnterForeground:(id)arg0 ;
-(void)didChangeFullScreen:(BOOL)arg0 ;
-(void)didDecideCookieSharingForURL:(id)arg0 shouldCancel:(BOOL)arg1 ;
-(void)didDecideShouldShowLinkPreviews:(BOOL)arg0 ;
-(void)didFinishInitialLoad:(BOOL)arg0 ;
-(void)didLoadWebView;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didResolveRedirectionWithURL:(id)arg0 appLink:(id)arg1 ;
-(void)executeCustomActivityProxyID:(id)arg0 ;
-(void)fetchActivityViewControllerInfoForURL:(id)arg0 title:(id)arg1 ;
-(void)initialLoadDidRedirectToURL:(id)arg0 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissServiceViewController;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willOpenCurrentPageInBrowser;
-(void)willOpenURLInHostApplication:(id)arg0 ;


@end


#endif