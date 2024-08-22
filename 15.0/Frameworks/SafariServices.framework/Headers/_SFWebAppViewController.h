// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBAPPVIEWCONTROLLER_H
#define _SFWEBAPPVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SFWebAppRemoteViewControllerProtocol, _SFWebAppViewControllerDelegate;



@interface _SFWebAppViewController : UIRemoteViewController <SFWebAppRemoteViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFWebAppViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_sf_sceneDidBecomeActive:(id)arg0 ;
-(void)_sf_sceneDidEnterBackground:(id)arg0 ;
-(void)_sf_sceneWillEnterForeground:(id)arg0 ;
-(void)_sf_sceneWillResignActive:(id)arg0 ;
-(void)didChangeFullScreen:(BOOL)arg0 ;
-(void)didChangeLoadingState:(BOOL)arg0 ;
-(void)didDecideCookieSharingForURL:(id)arg0 shouldCancel:(BOOL)arg1 ;
-(void)didDecideShouldShowLinkPreviews:(BOOL)arg0 ;
-(void)didFinishInitialLoad:(BOOL)arg0 ;
-(void)didLoadWebView;
-(void)didResolveRedirectionWithURL:(id)arg0 appLink:(id)arg1 ;
-(void)executeCustomActivityProxyID:(id)arg0 ;
-(void)fetchActivityViewControllerInfoForURL:(id)arg0 title:(id)arg1 ;
-(void)initialLoadDidRedirectToURL:(id)arg0 ;
-(void)loadWebAppWithIdentifier:(id)arg0 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)willDismissServiceViewController;
-(void)willOpenCurrentPageInBrowser;
-(void)willOpenURLInHostApplication:(id)arg0 ;


@end


#endif