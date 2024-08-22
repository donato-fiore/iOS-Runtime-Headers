// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKCLOUDSERVICESETUPVIEWCONTROLLER_H
#define SKCLOUDSERVICESETUPVIEWCONTROLLER_H

@class UIViewController, SURedeemCameraViewController, _UIResilientRemoteViewContainerViewController, SFSafariViewController, NSString;
@protocol SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate, SKCloudServiceSetupViewControllerDelegate;


#import "SKCloudServiceSetupReloadContext.h"
#import "SKCloudServiceSetupConfiguration.h"

@interface SKCloudServiceSetupViewController : UIViewController <SFSafariViewControllerDelegate, SKCloudServiceSetupRemoteViewControllerDelegate>

 {
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    BOOL _isRemoteViewControllerReady;
    BOOL _isUnableToLoadRemoteViewController;
    BOOL _hasInitializedServiceViewController;
    BOOL _isFullyAppeared;
    SKCloudServiceSetupReloadContext *_activeCloudServiceSetupReloadContext;
    id *_loadCompletionHandler;
    SFSafariViewController *_safariViewController;
}


@property (readonly, copy, nonatomic) SKCloudServiceSetupConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKCloudServiceSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isModalInPresentation;
-(id)_errorWithCode:(NSInteger)arg0 errorDescriptionLocalizationKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_didReceiveRemoteViewController:(id)arg0 ;
-(void)_dismissCloudServiceSetupViewControllerWithAnimation:(BOOL)arg0 completion:(id)arg1 ;
-(void)_reloadWithActiveCloudServiceSetupReloadContext;
-(void)_remoteViewControllerExtensionWasInterrupted;
-(void)_reportErrorForMissingSystemMusicApplication;
-(void)_requestRemoteViewController;
-(void)cloudServiceSetupRemoteViewController:(id)arg0 didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg0 requestsDismissalWithAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg0 requestsDismissingSafariViewControllerAnimated:(BOOL)arg1 completion:(id)arg2 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg0 requestsPresentingSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)handleSafariScriptURL:(id)arg0 ;
-(void)loadWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)overrideCreditCardPresentationWithCompletion:(id)arg0 ;
-(void)overrideRedeemCameraPerformAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)reloadWithContext:(id)arg0 ;
-(void)safariViewController:(id)arg0 didCompleteInitialLoad:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)setModalInPresentation:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif