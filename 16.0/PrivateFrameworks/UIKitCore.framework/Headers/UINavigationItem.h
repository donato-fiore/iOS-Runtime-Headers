// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UINAVIGATIONITEM_H
#define UINAVIGATIONITEM_H

@class NSString, NSArray, NSMutableDictionary;
@protocol _UIBarAppearanceChangeObserver, NSCoding, _UINavigationItemChangeObserver, UIPopoverPresentationControllerSourceItem, UINavigationItemRenameDelegate;

#import <Foundation/Foundation.h>

#import "UIBarButtonItem.h"
#import "UIView.h"
#import "UISearchController.h"
#import "UIImageView.h"
#import "_UINavigationBarPalette.h"
#import "UIDeferredMenuElement.h"
#import "UIAction.h"
#import "UIMenu.h"
#import "_UIDocumentMenuHeader.h"
#import "UIBarButtonItemGroup.h"
#import "_UINavigationItemRenameHandler.h"
#import "_UIBarButtonItemSearchBarGroup.h"
#import "UINavigationBar.h"
#import "_UINavigationBarItemStackEntry.h"
#import "UINavigationBarAppearance.h"
#import "UIDocumentProperties.h"

@interface UINavigationItem : NSObject <_UIBarAppearanceChangeObserver, NSCoding>

 {
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_synthesizedBackBarButtonItem;
    NSString *_prompt;
    UIView *_defaultTitleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    BOOL _hidesBackButton;
    BOOL _leftItemsSupplementBackButton;
    UISearchController *_searchController;
    BOOL _alwaysShowsSearchBar;
    UIImageView *_frozenTitleView;
    NSArray *_abbreviatedBackButtonTitles;
    NSMutableDictionary *_minimumDesiredHeights;
}


@property (copy, nonatomic, setter=_setAbbreviatedBackButtonTitles:) NSArray *_abbreviatedBackButtonTitles;
@property (readonly, nonatomic) BOOL _alignLargeTitleAccessoryViewToBaseline; // ivar: __alignLargeTitleAccessoryViewToBaseline
@property (retain, nonatomic) NSArray *_alternateLargeTitles; // ivar: __alternateLargeTitles
@property (nonatomic, setter=_setAlwaysUseManualScrollEdgeAppearance:) BOOL _alwaysUseManualScrollEdgeAppearance; // ivar: _alwaysUseManualScrollEdgeAppearance
@property (nonatomic, setter=_setAutoScrollEdgeTransitionDistance:) CGFloat _autoScrollEdgeTransitionDistance; // ivar: _autoScrollEdgeTransitionDistance
@property (nonatomic, setter=_setBackButtonDisplayMode:) NSUInteger _backButtonDisplayMode;
@property (nonatomic, setter=_setBackgroundHidden:) BOOL _backgroundHidden; // ivar: __backgroundHidden
@property (retain, nonatomic, setter=_setBottomPalette:) _UINavigationBarPalette *_bottomPalette; // ivar: _bottomPalette
@property (retain, nonatomic, setter=_setCanvasView:) UIView *_canvasView; // ivar: __canvasView
@property (weak, nonatomic, setter=_setChangeObserver:) NSObject<_UINavigationItemChangeObserver> *_changeObserver; // ivar: __changeObserver
@property (retain, nonatomic, setter=_dci_setAdditionalOverflowItems:) UIDeferredMenuElement *_dci_additionalOverflowItems;
@property (copy, nonatomic, setter=_dci_setBackAction:) UIAction *_dci_backAction;
@property (copy, nonatomic, setter=_dci_setCenterItemGroups:) NSArray *_dci_centerItemGroups;
@property (copy, nonatomic, setter=_dci_setCenterItems:) NSArray *_dci_centerItems;
@property (copy, nonatomic, setter=_dci_setCustomizationIdentifier:) NSString *_dci_customizationIdentifier;
@property (copy, nonatomic, setter=_dci_setDocumentMenu:) UIMenu *_dci_documentMenu; // ivar: _documentMenu
@property (retain, nonatomic, setter=_dci_setDocumentMenuHeader:) _UIDocumentMenuHeader *_dci_documentMenuHeader;
@property (copy, nonatomic, setter=_dci_setDocumentMenuProvider:) id *_dci_documentMenuProvider;
@property (retain, nonatomic, setter=_dci_setFixedTrailingGroup:) UIBarButtonItemGroup *_dci_fixedTrailingGroup;
@property (nonatomic, setter=_dci_setPreferredSearchBarPlacement:) NSInteger _dci_preferredSearchBarPlacement;
@property (retain, nonatomic, setter=_dci_setRenameHandler:) _UINavigationItemRenameHandler *_dci_renameHandler; // ivar: _renameHandler
@property (readonly, nonatomic) NSInteger _dci_searchBarPlacement;
@property (nonatomic, setter=_dci_setStyle:) NSInteger _dci_style;
@property (readonly, nonatomic) _UIBarButtonItemSearchBarGroup *_existingInlineSearchBarItemGroup;
@property (nonatomic, setter=_setFontScaleAdjustment:) CGFloat _fontScaleAdjustment; // ivar: _fontScaleAdjustment
@property (readonly, nonatomic) BOOL _hasInlineSearchBar;
@property (readonly, nonatomic) BOOL _hidesSearchBarWhenScrollingIfAllowed;
@property (nonatomic, setter=_setIdealCustomTitleWidth:) CGFloat _idealCustomTitleWidth; // ivar: __idealCustomTitleWidth
@property (nonatomic, setter=_setIndependentBarStyle:) NSInteger _independentBarStyle;
@property (readonly, nonatomic) _UIBarButtonItemSearchBarGroup *_inlineSearchBarItemGroup; // ivar: _inlineSearchBarItemGroup
@property (retain, nonatomic, setter=_setLargeTitleAccessoryView:) UIView *_largeTitleAccessoryView; // ivar: __largeTitleAccessoryView
@property (readonly, nonatomic) NSUInteger _largeTitleAccessoryViewHorizontalAlignment; // ivar: __largeTitleAccessoryViewHorizontalAlignment
@property (nonatomic, setter=_setLargeTitleTwoLineMode:) NSUInteger _largeTitleTwoLineMode; // ivar: __largeTitleTwoLineMode
@property (nonatomic, setter=_setLeftFlexibleSpaceCount:) NSUInteger _leftFlexibleSpaceCount; // ivar: __leftFlexibleSpaceCount
@property (copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // ivar: __leftItemSpaceList
@property (nonatomic, getter=_isManualScrollEdgeAppearanceEnabled, setter=_setManualScrollEdgeAppearanceEnabled:) BOOL _manualScrollEdgeAppearanceEnabled; // ivar: _manualScrollEdgeAppearanceEnabled
@property (nonatomic, setter=_setManualScrollEdgeAppearanceProgress:) CGFloat _manualScrollEdgeAppearanceProgress; // ivar: _manualScrollEdgeAppearanceProgress
@property (weak, nonatomic, getter=_owningNavigationBar, setter=_setOwningNavigationBar:) UINavigationBar *_owningNavigationBar; // ivar: __owningNavigationBar
@property (copy, nonatomic, setter=_setPendingTitle:) NSString *_pendingTitle; // ivar: _pendingTitle
@property (nonatomic, setter=_setPreserveSearchBarAcrossTransitions:) BOOL _preserveSearchBarAcrossTransitions; // ivar: __preserveSearchBarAcrossTransitions
@property (nonatomic, setter=_setRightFlexibleSpaceCount:) NSUInteger _rightFlexibleSpaceCount; // ivar: __rightFlexibleSpaceCount
@property (copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // ivar: __rightItemSpaceList
@property (readonly, nonatomic) UISearchController *_searchControllerIfAllowed;
@property (nonatomic, setter=_setStackEntry:) _UINavigationBarItemStackEntry *_stackEntry; // ivar: __stackEntry
@property (nonatomic, setter=_setSupportsTwoLineLargeTitles:) BOOL _supportsTwoLineLargeTitles;
@property (nonatomic) CGFloat _titleViewWidthForAnimations; // ivar: __titleViewWidthForAnimations
@property (copy, nonatomic, setter=_setWeeTitle:) NSString *_weeTitle; // ivar: __weeTitle
@property (retain, nonatomic) UIDeferredMenuElement *additionalOverflowItems; // ivar: _additionalOverflowItems
@property (copy, nonatomic) UIAction *backAction; // ivar: _backAction
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (nonatomic) NSInteger backButtonDisplayMode; // ivar: _backButtonDisplayMode
@property (copy, nonatomic) NSString *backButtonTitle;
@property (copy, nonatomic) NSArray *centerItemGroups; // ivar: _centerItemGroups
@property (copy, nonatomic) UINavigationBarAppearance *compactAppearance; // ivar: _compactAppearance
@property (copy, nonatomic) UINavigationBarAppearance *compactScrollEdgeAppearance; // ivar: _compactScrollEdgeAppearance
@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) UIBarButtonItem *customLeftItem;
@property (retain, nonatomic) UIView *customLeftView;
@property (retain, nonatomic) UIBarButtonItem *customRightItem;
@property (retain, nonatomic) UIView *customRightView;
@property (retain, nonatomic) UIView *customTitleView;
@property (copy, nonatomic) NSString *customizationIdentifier; // ivar: _customizationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDocumentProperties *documentProperties; // ivar: _documentProperties
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL hidesSearchBarWhenScrolling;
@property (nonatomic) NSInteger largeTitleDisplayMode; // ivar: _largeTitleDisplayMode
@property (nonatomic) NSDirectionalEdgeInsets largeTitleInsets; // ivar: _largeTitleInsets
@property (copy, nonatomic) NSArray *leadingItemGroups; // ivar: _leadingItemGroups
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (weak, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (readonly, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *overflowPresentationSource;
@property (retain, nonatomic) UIBarButtonItemGroup *pinnedTrailingGroup; // ivar: _pinnedTrailingGroup
@property (nonatomic) NSInteger preferredSearchBarPlacement; // ivar: _preferredSearchBarPlacement
@property (copy, nonatomic) NSString *prompt;
@property (weak, nonatomic) NSObject<UINavigationItemRenameDelegate> *renameDelegate; // ivar: _renameDelegate
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (copy, nonatomic) UINavigationBarAppearance *scrollEdgeAppearance; // ivar: _scrollEdgeAppearance
@property (readonly, nonatomic) NSInteger searchBarPlacement;
@property (retain, nonatomic) UISearchController *searchController;
@property (copy, nonatomic) UINavigationBarAppearance *standardAppearance; // ivar: _standardAppearance
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id *titleMenuProvider; // ivar: _titleMenuProvider
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (copy, nonatomic) NSArray *trailingItemGroups; // ivar: _trailingItemGroups
@property (nonatomic) BOOL useRelativeLargeTitleInsets; // ivar: _useRelativeLargeTitleInsets


+(id)defaultFont;
-(BOOL)_accumulateViewsFromItems:(id)arg0 isLeft:(BOOL)arg1 refreshViews:(BOOL)arg2 ;
-(BOOL)_canRename;
-(BOOL)_hasDefaultTitleView;
-(BOOL)_hasInlineSearchBarForTraits:(id)arg0 ;
-(BOOL)_leftItemsWantBackButton;
-(BOOL)_wantsBackButtonIndicator;
-(CGFloat)_desiredHeightForBarMetrics:(NSInteger)arg0 defaultHeightBlock:(id)arg1 ;
-(CGFloat)_minimumDesiredHeightForBarMetrics:(NSInteger)arg0 ;
-(id)_addDefaultTitleViewToNavigationBarIfNecessary:(id)arg0 ;
-(id)_backButtonTitleAllowingGenericTitles:(BOOL)arg0 ;
-(id)_barButtonForBackButtonIndicator;
-(id)_buttonForBackButtonIndicator;
-(id)_defaultTitleView;
-(id)_effectiveBackBarButtonItem;
-(id)_firstNonSpaceItemInList:(id)arg0 ;
-(id)_firstNonSpaceLeftItem;
-(id)_firstNonSpaceRightItem;
-(id)_independentBackgroundImageForBarMetrics:(NSInteger)arg0 ;
-(id)_independentShadowImage;
-(id)_minimumDesiredHeights;
-(id)backButtonView;
-(id)currentBackButtonTitle;
-(id)existingBackButtonView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(void)_cleanupFrozenTitleView;
-(void)_freezeCurrentTitleView;
-(void)_getLeadingItems:(*id)arg0 groups:(*id)arg1 ;
-(void)_getTrailingItems:(*id)arg0 groups:(*id)arg1 ;
-(void)_messageChangeObserver:(id)arg0 forTransitionFromSearchController:(id)arg1 ;
-(void)_movedFromTopOfStack:(BOOL)arg0 ;
-(void)_movedToTopOfStack:(BOOL)arg0 ;
-(void)_movingFromTopOfStack;
-(void)_movingToTopOfStack;
-(void)_removeBackButtonView;
-(void)_removeBarButtonItemViews;
-(void)_removeContentInView:(id)arg0 ;
-(void)_removeTitleAndButtonViews;
-(void)_replaceCustomLeftRightViewAtIndex:(NSUInteger)arg0 withView:(id)arg1 left:(BOOL)arg2 ;
-(void)_setBackButtonPressed:(BOOL)arg0 ;
-(void)_setBottomPaletteNeedsUpdate;
-(void)_setBottomPaletteNeedsUpdate:(id)arg0 ;
-(void)_setIndependentBackgroundImage:(id)arg0 shadowImage:(id)arg1 forBarMetrics:(NSInteger)arg2 ;
-(void)_setLargeTitleViewDataSource:(id)arg0 ;
-(void)_setMinimumDesiredHeight:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_updateSearchBarItemGroup;
-(void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg0 ;
-(void)appearance:(id)arg0 categoriesChanged:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)set_alwaysUseManualScrollEdgeAppearance:(BOOL)arg0 ;
-(void)updateNavigationBarButtonsAnimated:(BOOL)arg0 ;


@end


#endif