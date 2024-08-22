// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDIALOGCONTROLLER_H
#define _SFDIALOGCONTROLLER_H

@class WBSTabDialogManager, UIViewController, NSString, _SFDialog<_SFAuthenticatorDialog>;
@protocol _SFDialogViewDelegate, _SFDialogControllerDelegate, _SFDialogViewPresenting, _SFDialogViewControllerPresenting;

#import <Foundation/Foundation.h>

#import "_SFDialogView.h"
#import "_SFDialog.h"

@interface _SFDialogController : NSObject <_SFDialogViewDelegate>

 {
    WBSTabDialogManager *_dialogManager;
    _SFDialogView *_dialogView;
    UIViewController *_dialogViewController;
    int _webProcessID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFDialogControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<_SFDialogViewPresenting> *dialogPresenter; // ivar: _dialogPresenter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFDialog<_SFAuthenticatorDialog> *presentedAuthenticatorDialog;
@property (readonly, nonatomic) _SFDialog *presentedDialog; // ivar: _presentedDialog
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_SFDialogViewControllerPresenting> *viewControllerPresenter; // ivar: _viewControllerPresenter


+(void)applicationDidEnterBackground;
-(BOOL)_isPresentingDialog;
-(NSInteger)_presentDialog:(id)arg0 forWebProcessID:(int)arg1 withAdditionalAnimations:(id)arg2 ;
-(NSUInteger)_tabID;
-(id)_initWithDialogManager:(id)arg0 ;
-(id)init;
-(int)_currentWebProcessID;
-(struct ? )_currentSlot;
-(void)_dismissCurrentDialogWithResponse:(id)arg0 ;
-(void)_dismissDialogWithAdditionalAnimations:(id)arg0 ;
-(void)cancelPresentedDialogIfNeeded;
-(void)dialogView:(id)arg0 didSelectActionAtIndex:(NSUInteger)arg1 withInputText:(id)arg2 passwordText:(id)arg3 ;
-(void)owningTabWillClose;
-(void)owningWebViewDidChangeProcessID;
-(void)owningWebViewDidCommitNavigationWithURL:(id)arg0 ;
-(void)owningWebViewWillBecomeActive;
-(void)owningWebViewWillNavigate;
-(void)presentDialog:(id)arg0 ;
// -(void)presentDialog:(id)arg0 animateAlongsidePresentation:(id)arg1 dismissal:(unk)arg2  ;
-(void)presentNextDialogIfNeeded;


@end


#endif