// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVAPPNAVIGATIONCONTROLLER_H
#define _TVAPPNAVIGATIONCONTROLLER_H

@class UINavigationController, IKAppTabBar, UIViewController, NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController, _TVAppNavigationControllerDelegate, NSObject;


#import "TVApplicationController.h"

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController>

 {
    ? _ancDelegateFlags;
}


@property (readonly, weak, nonatomic) TVApplicationController *appController; // ivar: _appController
@property (readonly, nonatomic) NSObject<IKAppNavigationController> *appNavigationController;
@property (weak, nonatomic) NSObject<_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate; // ivar: _appNavigationControllerDelegate
@property (readonly, nonatomic) IKAppTabBar *appTabBar;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxNavControllerStackDepth; // ivar: _maxNavControllerStackDepth
@property (retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // ivar: _menuRecognizer
@property (retain, nonatomic) NSObject<NSObject> *modalPresenterObserverToken; // ivar: _modalPresenterObserverToken
@property (retain, nonatomic) UIViewController *presentedModalViewController; // ivar: _presentedModalViewController
@property (readonly) Class superclass;


-(BOOL)_hasBeenCleared;
-(BOOL)_shouldIgnoreModalDismissal:(id)arg0 ;
-(BOOL)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg0 andExistingPlaybackDocument:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)activeDocument;
-(id)documents;
-(id)initWithApplicationController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)popToRootDocument:(BOOL)arg0 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(void)_doWillLoadAppDocumentWithController:(id)arg0 ;
-(void)_handleMenuAction:(id)arg0 ;
-(void)_presentModalDocumentController:(id)arg0 options:(id)arg1 ;
-(void)clear;
-(void)dealloc;
-(void)dismissAllModals:(id)arg0 ;
-(void)dismissModal;
-(void)dismissModal:(BOOL)arg0 ;
-(void)dismissed;
-(void)insertDocument:(id)arg0 beforeDocument:(id)arg1 options:(id)arg2 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popToRootDocument;
-(void)presentModal:(id)arg0 options:(id)arg1 ;
-(void)pushDocument:(id)arg0 options:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 withDocument:(id)arg1 options:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDocuments:(id)arg0 options:(id)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif