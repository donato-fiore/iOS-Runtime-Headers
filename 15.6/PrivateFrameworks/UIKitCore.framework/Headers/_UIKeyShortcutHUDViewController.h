// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDVIEWCONTROLLER_H
#define _UIKEYSHORTCUTHUDVIEWCONTROLLER_H

@class NSString, NSLayoutConstraint, NSMutableDictionary;
@protocol _UIKeyShortcutHUDMenuViewControllerDelegate, _UIKeyShortcutHUDToolbarViewControllerDelegate, UIKeyInput, _UIKeyShortcutHUDViewControllerDelegate;


#import "UIViewController.h"
#import "_UIKeyShortcutHUDCollectionViewManager.h"
#import "_UIKeyShortcutHUDConfiguration.h"
#import "_UIKeyShortcutHUDContext.h"
#import "UIViewPropertyAnimator.h"
#import "UIView.h"
#import "_UIKeyShortcutHUDWindow.h"
#import "_UIKeyShortcutHUDMenuViewController.h"
#import "_UIKeyShortcutHUDMetrics.h"
#import "_UIKeyShortcutHUDModel.h"
#import "UITextInputPasswordRules.h"
#import "UIKeyCommand.h"
#import "UITapGestureRecognizer.h"
#import "_UIKeyShortcutHUDToolbarViewController.h"

@interface _UIKeyShortcutHUDViewController : UIViewController <_UIKeyShortcutHUDMenuViewControllerDelegate, _UIKeyShortcutHUDToolbarViewControllerDelegate, UIKeyInput>



@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (retain, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager; // ivar: _collectionViewManager
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) _UIKeyShortcutHUDContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger heldModifierFlags; // ivar: _heldModifierFlags
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIViewPropertyAnimator *hudAppearanceAnimator; // ivar: _hudAppearanceAnimator
@property (retain, nonatomic) NSLayoutConstraint *hudContainerBottomEdgeConstraint; // ivar: _hudContainerBottomEdgeConstraint
@property (retain, nonatomic) NSLayoutConstraint *hudContainerBottomSafeAreaEdgeConstraint; // ivar: _hudContainerBottomSafeAreaEdgeConstraint
@property (retain, nonatomic) NSLayoutConstraint *hudContainerLeadingEdgeConstraint; // ivar: _hudContainerLeadingEdgeConstraint
@property (retain, nonatomic) NSLayoutConstraint *hudContainerTopEdgeConstraint; // ivar: _hudContainerTopEdgeConstraint
@property (retain, nonatomic) NSLayoutConstraint *hudContainerTrailingEdgeConstraint; // ivar: _hudContainerTrailingEdgeConstraint
@property (retain, nonatomic) UIView *hudContainerView; // ivar: _hudContainerView
@property (nonatomic, getter=isHUDPresentedIntoSearchMode) BOOL hudPresentedIntoSearchMode; // ivar: _hudPresentedIntoSearchMode
@property (retain, nonatomic) NSMutableDictionary *hudToAppKeyCommandsMap; // ivar: _hudToAppKeyCommandsMap
@property (weak, nonatomic) _UIKeyShortcutHUDWindow *hudWindow; // ivar: _hudWindow
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (retain, nonatomic) UIViewPropertyAnimator *menuPanelAnimator; // ivar: _menuPanelAnimator
@property (retain, nonatomic) NSLayoutConstraint *menuPreferredHeightConstraint; // ivar: _menuPreferredHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *menuPreferredWidthConstraint; // ivar: _menuPreferredWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *menuToolbarSpacingConstraint; // ivar: _menuToolbarSpacingConstraint
@property (retain, nonatomic) _UIKeyShortcutHUDMenuViewController *menuVC; // ivar: _menuVC
@property (retain, nonatomic) _UIKeyShortcutHUDMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) _UIKeyShortcutHUDModel *model; // ivar: _model
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (retain, nonatomic) UIViewPropertyAnimator *searchTransitionAnimator; // ivar: _searchTransitionAnimator
@property (readonly, nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) BOOL shouldIgnoreNextSearchFieldTextChangedCallback; // ivar: _shouldIgnoreNextSearchFieldTextChangedCallback
@property (weak, nonatomic) UIKeyCommand *showShortcutsKeyCommand; // ivar: _showShortcutsKeyCommand
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (copy, nonatomic) NSString *textContentType;
@property (retain, nonatomic) NSLayoutConstraint *toolbarPreferredWidthConstraint; // ivar: _toolbarPreferredWidthConstraint
@property (retain, nonatomic) _UIKeyShortcutHUDToolbarViewController *toolbarVC; // ivar: _toolbarVC


-(BOOL)_canShowWhileLocked;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_suppressSoftwareKeyboard;
-(BOOL)canBecomeFirstResponder;
-(BOOL)menuViewController:(id)arg0 shouldPersistSelectionForShortcut:(id)arg1 ;
-(BOOL)shouldDismissHUDForModifierKeyTap;
-(id)_defaultHUDAppearanceAnimatorForHidden:(BOOL)arg0 ;
-(id)_defaultMenuPanelAnimator;
-(id)_defaultSearchTransitionAnimator;
-(id)init;
-(id)preferredFocusEnvironments;
-(id)undoManager;
-(void)_focusTopSearchResultWithDelay:(BOOL)arg0 ;
-(void)_hudWillBecomeHidden:(BOOL)arg0 ;
-(void)_setDisplayedMenu:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setMenuHeight:(CGFloat)arg0 ;
-(void)_setMenuWidth:(CGFloat)arg0 ;
-(void)_setupCollectionViewManagement;
-(void)_setupGestureRecognizers;
-(void)_setupHUDKeyCommands;
-(void)_setupInitialDisplayedMenu;
-(void)_setupInitialViewState;
-(void)_setupLayout;
-(void)_setupMetrics;
-(void)_setupSubviews;
-(void)_stopInFlightAnimationsForAnimator:(id)arg0 endPosition:(NSInteger)arg1 ;
-(void)_updateDisplayedMenuForCurrentHeldModifierFlagsAnimated:(BOOL)arg0 ;
-(void)beginSearching;
-(void)deleteBackward;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)handleAppKeyCommand:(id)arg0 ;
-(void)handleEscapeKeyCommand:(id)arg0 ;
-(void)handleHUDTap:(id)arg0 ;
-(void)handleShowShortcutsKeyCommand:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)menuViewController:(id)arg0 didScrollToCategory:(id)arg1 withCategoryIndex:(NSInteger)arg2 ;
-(void)menuViewController:(id)arg0 didSelectShortcut:(id)arg1 ;
-(void)setDisplayedMenu:(id)arg0 ;
-(void)toolbarViewController:(id)arg0 didSelectCategory:(id)arg1 categoryIndex:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)toolbarViewController:(id)arg0 didUpdateSearchText:(id)arg1 ;
-(void)toolbarViewControllerDidPressCancelSearchButton:(id)arg0 ;
-(void)toolbarViewControllerDidPressSearchButton:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif