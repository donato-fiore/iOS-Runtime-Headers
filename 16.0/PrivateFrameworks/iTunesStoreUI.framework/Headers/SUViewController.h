// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUVIEWCONTROLLER_H
#define SUVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIBarButtonItem, NSArray, NSString;
@protocol SUScriptNativeObject, ISOperationDelegate;


#import "SUViewControllerContext.h"
#import "SURotationController.h"
#import "SUViewControllerScriptProperties.h"
#import "SUClientInterface.h"
#import "SUNavigationItem.h"

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate>

 {
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    UIBarButtonItem *_exitStoreButton;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    SURotationController *_rotationController;
    NSInteger _rotationState;
    NSInteger _transitionSafetyCount;
}


@property (readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties; // ivar: _cachedScriptProperties
@property (readonly, nonatomic, getter=_isEnteringForeground) BOOL _enteringForeground; // ivar: _isEnteringForeground
@property (readonly, nonatomic, getter=_pendingDialogs) NSArray *_pendingDialogs; // ivar: _pendingDialogs
@property (readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext; // ivar: _restoredContext
@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultPNGExpirationTime;
@property (readonly, nonatomic) NSString *defaultPNGName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController *footerViewController; // ivar: _footerViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *inputAccessoryViewController; // ivar: _inputAccessoryViewController
@property (readonly, retain, nonatomic) SUNavigationItem *navigationItem;
@property (nonatomic) BOOL shouldAdjustContentOffsets; // ivar: _shouldAdjustContentOffsets
@property (nonatomic) BOOL shouldExcludeFromNavigationHistory; // ivar: _excludeFromNavigationHistory
@property (nonatomic) BOOL shouldInvalidateForMemoryPurge; // ivar: _shouldInvalidateForMemoryPurge
@property (nonatomic) BOOL showsLibraryButton; // ivar: _showsLibraryButton
@property (nonatomic, getter=isSkLoading) BOOL skLoading; // ivar: _skLoading
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isVisibleAndFrontmost) BOOL visibleAndFrontmost;


-(BOOL)_canReloadView;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(BOOL)presentDialog:(id)arg0 pendUntilVisible:(BOOL)arg1 ;
-(BOOL)presentDialogForError:(id)arg0 pendUntilVisible:(BOOL)arg1 ;
-(BOOL)window:(id)arg0 shouldAutorotateToInterfaceOrientation:(NSInteger)arg1 ;
-(NSInteger)ITunesStoreUIBarStyle;
-(NSInteger)interfaceOrientation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_existingNavigationItem;
-(id)_rotationController;
-(id)copyArchivableContext;
-(id)copyChildViewControllersForReason:(NSInteger)arg0 ;
-(id)copyDefaultScriptProperties;
-(id)copyScriptProperties;
-(id)init;
-(id)initWithSection:(id)arg0 ;
-(id)inputAccessoryView;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)navigationController;
-(id)newRotationController;
-(id)tabBarItem;
-(id)viewControllerFactory;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_dismissFooterAnimationDidStop:(id)arg0 ;
-(void)_exitStoreButtonAction:(id)arg0 ;
-(void)_exitStoreButtonDidChangeNotification:(id)arg0 ;
-(void)_invalidateForMemoryPurge;
-(void)_keyboardDidHideNotification:(id)arg0 ;
-(void)_keyboardDidShowNotification:(id)arg0 ;
-(void)_keyboardWillHideNotification:(id)arg0 ;
-(void)_keyboardWillShowNotification:(id)arg0 ;
-(void)_presentFooterAnimationDidStop;
-(void)_reloadExitStoreButtonWithParentViewController:(id)arg0 ;
-(void)_reloadLibraryButton;
-(void)_setExistingNavigationItem:(id)arg0 ;
-(void)applicationDidEnterBackground;
-(void)applicationDidResume;
-(void)applicationWillEnterForeground;
-(void)applicationWillSuspend;
-(void)cancelOperations;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)dismissFooterViewControllerAnimated:(BOOL)arg0 ;
-(void)enqueueOperation:(id)arg0 cancelOnDealloc:(BOOL)arg1 ;
-(void)handleApplicationURL:(id)arg0 ;
-(void)handleApplicationURL:(id)arg0 withSourceApplication:(id)arg1 sourceURL:(id)arg2 ;
-(void)invalidate;
-(void)invalidateForMemoryPurge;
-(void)loadView;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operationFinished:(id)arg0 ;
-(void)presentFooterViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)reload;
-(void)reloadContentSizeForViewInPopover;
-(void)remoteControlReceivedWithEvent:(id)arg0 ;
-(void)resetRestoredContext;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)setParentViewController:(id)arg0 ;
-(void)setScriptProperties:(id)arg0 ;
-(void)setSection:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 changeTabBarItem:(BOOL)arg1 ;
-(void)storePageProtocolDidChange;
-(void)trackOperation:(id)arg0 cancelOnDealloc:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif