// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPCONTAINERNAVIGATIONCONTROLLER_H
#define CKAPPCONTAINERNAVIGATIONCONTROLLER_H

@class UINavigationController, UIViewController<CKBrowserViewControllerProtocol>, NSString;
@protocol _UISheetPresentationControllerDelegate, CKBrowserViewControllerSendDelegate;



@interface CKAppContainerNavigationController : UINavigationController <_UISheetPresentationControllerDelegate, CKBrowserViewControllerSendDelegate>



@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserVC; // ivar: _browserVC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dragControllerTranscriptDelegate;
-(id)initWithRemoteViewController:(id)arg0 ;
-(void)_sheetPresentationController:(id)arg0 didChangeIndexOfCurrentDetent:(NSInteger)arg1 ;
-(void)closeButtonPressed:(id)arg0 ;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)dismiss;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)openURL:(id)arg0 applicationIdentifier:(id)arg1 pluginID:(id)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 pluginID:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)transitionBrowserToLargeDetent;
-(void)transitionBrowserToMediumDetent;


@end


#endif