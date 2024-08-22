// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFUNCAMERAVIEWCONTROLLER_H
#define CKFUNCAMERAVIEWCONTROLLER_H

@class UIViewController, IMBalloonPlugin, NSString, UIViewController<CKBrowserViewControllerProtocol>, UIView;
@protocol CKBrowserViewControllerSendDelegate, CKCamPhysicalCaptureNotifierDelegate, CKFunCameraViewControllerDelegate;


#import "CKConversation.h"
#import "CKCamPhysicalCaptureNotifier.h"

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate, CKCamPhysicalCaptureNotifierDelegate>



@property (retain, nonatomic) IMBalloonPlugin *balloonPlugin; // ivar: _balloonPlugin
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKFunCameraViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController; // ivar: _funCameraAppViewController
@property (retain, nonatomic) UIView *funCameraView; // ivar: _funCameraView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDismissing; // ivar: _isDismissing
@property (retain, nonatomic) CKCamPhysicalCaptureNotifier *physicalCaptureNotifier; // ivar: _physicalCaptureNotifier
@property (readonly) Class superclass;


-(BOOL)commitPayload:(id)arg0 forPlugin:(id)arg1 allowAllCommits:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(id)configuredContentViewControllerForPlugin:(id)arg0 ;
-(id)contentViewControllerForPlugin:(id)arg0 ;
-(id)dragControllerTranscriptDelegate;
-(id)initWithConversation:(id)arg0 ;
-(id)traitCollection;
-(void)_dismissAndPresentPhotosApp:(BOOL)arg0 ;
-(void)_handleRemoteConnectionInterrupted:(id)arg0 ;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)dismiss;
-(void)dismissAndPresentPhotosApp;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)openURL:(id)arg0 applicationIdentifier:(id)arg1 pluginID:(id)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 pluginID:(id)arg1 completionHandler:(id)arg2 ;
-(void)physicalCaptureNotifierDidChangeState:(id)arg0 ;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif