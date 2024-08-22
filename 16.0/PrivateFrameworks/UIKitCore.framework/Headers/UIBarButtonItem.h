// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBARBUTTONITEM_H
#define UIBARBUTTONITEM_H

@class NSString, NSSet, NSArray, NSDictionary;
@protocol _UIPopoverPresentationControllerSourceItem_Internal, UIMenuForcedAutomaticSelectionDelegate, NSCoding, _UIBarButtonItemViewOwner;


#import "UIBarItem.h"
#import "UIImage.h"
#import "UIView.h"
#import "_UIBarButtonItemAppearanceStorage.h"
#import "UIMenuElement.h"
#import "UIBarButtonItem.h"
#import "UIBarButtonItemGroup.h"
#import "UINavigationItem.h"
#import "UIToolbarButton.h"
#import "UIMenu.h"
#import "UIAction.h"
#import "UIColor.h"

@interface UIBarButtonItem : UIBarItem <_UIPopoverPresentationControllerSourceItem_Internal, UIMenuForcedAutomaticSelectionDelegate, NSCoding>

 {
    NSString *_title;
    NSSet *_possibleTitles;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    UIEdgeInsets _imageInsets;
    UIEdgeInsets _landscapeImagePhoneInsets;
    CGFloat _width;
    UIView *_view;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    ? _barButtonItemFlags;
}


@property (nonatomic, getter=_actsAsFakeBackButton, setter=_setActsAsFakeBackButton:) BOOL _actsAsFakeBackButton;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) UIEdgeInsets _additionalSelectionInsets; // ivar: _additionalSelectionInsets
@property (copy, nonatomic, setter=_setAutoValidationHandler:) id *_autoValidationHandler; // ivar: __autoValidationHandler
@property (copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles; // ivar: __backButtonAlternateTitles
@property (nonatomic, setter=_setChangesSelectionAsPrimaryAction:) BOOL _changesSelectionAsPrimaryAction; // ivar: __changesSelectionAsPrimaryAction
@property (readonly, nonatomic) UIView *_configuredFloatableView;
@property (copy, nonatomic, setter=_dci_setMenuRepresentation:) UIMenuElement *_dci_menuRepresentation;
@property (readonly, copy, nonatomic) UIMenuElement *_effectiveMenuRepresentation;
@property (nonatomic, setter=_setFlexible:) BOOL _flexible; // ivar: _flexible
@property (readonly, nonatomic, getter=_isFloatable) BOOL _floatable;
@property (readonly, nonatomic, getter=_isFloating) BOOL _floating;
@property (copy, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers; // ivar: _gestureRecognizers
@property (nonatomic, setter=_setHidden:) BOOL _hidden;
@property (nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property (copy, nonatomic, setter=_setInteractions:) NSArray *_interactions; // ivar: _interactions
@property (retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // ivar: __itemVariation
@property (copy, nonatomic, setter=_setLargeContentSizeTitle:) NSString *_largeContentSizeTitle;
@property (nonatomic, setter=_setMaximumWidth:) CGFloat _maximumWidth; // ivar: _maximumWidth
@property (readonly, nonatomic) BOOL _menuIsPrimary;
@property (nonatomic, setter=_setMinimumWidth:) CGFloat _minimumWidth; // ivar: _minimumWidth
@property (readonly, nonatomic) BOOL _needsViewUpdateForLetterpressImage; // ivar: __needsViewUpdateForLetterpressImage
@property (weak, nonatomic, setter=_setOwningButtonGroup:) UIBarButtonItemGroup *_owningButtonGroup; // ivar: __owningButtonGroup
@property (weak, nonatomic, setter=_setOwningNavigationItem:) UINavigationItem *_owningNavigationItem; // ivar: __owningNavigationItem
@property (copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property (readonly, nonatomic) CGRect _rectForPresenting;
@property (readonly, nonatomic) UIView *_referenceView;
@property (readonly, copy, nonatomic) NSString *_resolvedLargeContentSizeTitle;
@property (copy, nonatomic, setter=_setSecondaryActionsProvider:) id *_secondaryActionsProvider; // ivar: _secondaryActionsProvider
@property (nonatomic, getter=selected, setter=setSelected:) BOOL _selected;
@property (nonatomic, setter=_setShowsBackButtonIndicator:) BOOL _showsBackButtonIndicator; // ivar: __showsBackButtonIndicator
@property (nonatomic, getter=_showsChevron, setter=_setShowsChevron:) BOOL _showsChevron;
@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // ivar: _stylesForSizingTitles
@property (readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property (nonatomic, setter=_setToolbarCharge:) CGFloat _toolbarCharge; // ivar: __toolbarCharge
@property (readonly, nonatomic) UIView *_viewForPresenting;
@property (weak, nonatomic, setter=_setViewOwner:) NSObject<_UIBarButtonItemViewOwner> *_viewOwner; // ivar: __viewOwner
@property (readonly, nonatomic) BOOL _viewWantsLetterpressImage; // ivar: __viewWantsLetterpressImage
@property (nonatomic, getter=_wantsThreeUp, setter=_setWantsThreeUp:) BOOL _wantsThreeUp;
@property (nonatomic, getter=_width, setter=_setWidth:) CGFloat _width;
@property (nonatomic) SEL action; // ivar: _action
@property (readonly, weak, nonatomic) UIBarButtonItemGroup *buttonGroup; // ivar: _buttonGroup
@property (nonatomic) BOOL changesSelectionAsPrimaryAction;
@property (retain, nonatomic) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL groupRepresentative; // ivar: _groupRepresentative
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) BOOL isCustomViewItem;
@property (nonatomic) BOOL isKeyboardItem; // ivar: _isKeyboardItem
@property (nonatomic) BOOL isMinibarView;
@property (readonly, nonatomic) BOOL isSpaceItem;
@property (readonly, nonatomic) BOOL isSystemItem;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (copy, nonatomic) UIMenuElement *menuRepresentation; // ivar: _menuRepresentation
@property (copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // ivar: _possibleSystemItems
@property (copy, nonatomic) NSSet *possibleTitles;
@property (nonatomic) NSInteger preferredMenuElementOrder; // ivar: _preferredMenuElementOrder
@property (copy, nonatomic) UIAction *primaryAction; // ivar: _primaryAction
@property (copy, nonatomic) UIMenu *secondaryActions;
@property (nonatomic) BOOL secondaryActionsArePrimary;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger systemItem;
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) CGFloat width;


+(Class)classForNavigationButton;
+(Class)classForToolbarButton;
+(id)_appearanceBlindViewClasses;
+(id)fixedSpaceItemOfWidth:(CGFloat)arg0 ;
+(id)flexibleSpaceItem;
+(void)_getSystemItemStyle:(*NSInteger)arg0 title:(*id)arg1 image:(*id)arg2 selectedImage:(*id)arg3 action:(*SEL)arg4 forBarStyle:(NSInteger)arg5 landscape:(BOOL)arg6 alwaysBordered:(BOOL)arg7 usingSystemItem:(NSInteger)arg8 usingItemStyle:(NSInteger)arg9 ;
-(BOOL)_hasAction;
-(BOOL)_isImageBarButtonItem;
-(BOOL)_isPopUpMenuButtonWithMenu:(id)arg0 ;
-(BOOL)_resizesBackgroundImage;
-(BOOL)_updateMenuInPlace;
-(BOOL)hasImage;
-(BOOL)hasTitle;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSpringLoaded;
-(CGFloat)_leftImagePaddingForEdgeMarginInNavBar;
-(CGFloat)_rightImagePaddingForEdgeMarginInNavBar;
-(CGFloat)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)backgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(id)_appearanceStorage;
-(id)_backgroundImageForState:(NSUInteger)arg0 compact:(BOOL)arg1 type:(NSInteger)arg2 ;
-(id)_dci_creatingGroupWithCustomizationIdentifier:(id)arg0 ;
-(id)_dci_creatingOptionalGroupWithCustomizationIdentifier:(id)arg0 ;
-(id)_dci_creatingRequiredGroup;
-(id)_foregroundColorForLetterpressWithView:(id)arg0 ;
-(id)_imageForState:(NSUInteger)arg0 compact:(BOOL)arg1 type:(NSInteger)arg2 ;
-(id)_itemForPresenting;
-(id)_miniImage;
-(id)_primaryNSToolbarItemForIdentifier:(id)arg0 ;
-(id)_resolvedImage;
-(id)_secondaryNSToolbarItemForIdentifier:(id)arg0 ;
-(id)_sourceViewForPresentationInWindow:(id)arg0 ;
-(id)backButtonBackgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)backgroundImageForState:(NSUInteger)arg0 style:(NSInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(id)createViewForNavigationItem:(id)arg0 ;
-(id)createViewForToolbar:(id)arg0 ;
-(id)creatingFixedGroup;
-(id)creatingMovableGroupWithCustomizationIdentifier:(id)arg0 ;
-(id)creatingOptionalGroupWithCustomizationIdentifier:(id)arg0 inDefaultCustomization:(BOOL)arg1 ;
-(id)image;
-(id)init;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 menu:(id)arg1 ;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 primaryAction:(id)arg1 ;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 primaryAction:(id)arg1 menu:(id)arg2 ;
-(id)initWithBarButtonSystemItem:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomView:(id)arg0 ;
-(id)initWithImage:(id)arg0 landscapeImagePhone:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)initWithImage:(id)arg0 menu:(id)arg1 ;
-(id)initWithImage:(id)arg0 style:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithPrimaryAction:(id)arg0 ;
-(id)initWithPrimaryAction:(id)arg0 menu:(id)arg1 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 target:(id)arg2 action:(SEL)arg3 menu:(id)arg4 ;
-(id)initWithTitle:(id)arg0 menu:(id)arg1 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)itemVariation;
-(id)landscapeImagePhone;
-(id)largeContentSizeImage;
-(id)nextResponder;
-(id)resolvedTitle;
-(id)title;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)window;
-(struct CGRect )_sourceRectForPresentationInWindow:(id)arg0 ;
-(struct UIEdgeInsets )_miniImageInsets;
-(struct UIEdgeInsets )imageInsets;
-(struct UIEdgeInsets )landscapeImagePhoneInsets;
-(struct UIEdgeInsets )largeContentSizeImageInsets;
-(struct UIOffset )backButtonTitlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(struct UIOffset )titlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg0 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg0 ;
-(void)_executeValidationHandler;
-(void)_getMenuTitle:(*id)arg0 image:(*id)arg1 ;
-(void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg0 imageInsets:(struct UIEdgeInsets *)arg1 landscape:(BOOL)arg2 ;
-(void)_getSystemItemStyle:(*NSInteger)arg0 title:(*id)arg1 image:(*id)arg2 selectedImage:(*id)arg3 action:(*SEL)arg4 forBarStyle:(NSInteger)arg5 landscape:(BOOL)arg6 alwaysBordered:(BOOL)arg7 ;
-(void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets *)arg0 forBarStyle:(NSInteger)arg1 landscape:(BOOL)arg2 alwaysBordered:(BOOL)arg3 ;
-(void)_sendAction:(id)arg0 withEvent:(id)arg1 ;
-(void)_setEnclosingBar:(id)arg0 onItem:(id)arg1 ;
-(void)_setMiniImage:(id)arg0 ;
-(void)_setMiniImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setToolbarChange:(CGFloat)arg0 ;
-(void)_triggerAction:(id)arg0 ;
-(void)_triggerActionForEvent:(id)arg0 ;
-(void)_triggerActionForEvent:(id)arg0 fallbackSender:(id)arg1 ;
-(void)_updateForAutomaticSelection;
-(void)_updateView;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forcedSelectionOfMenu:(id)arg0 willChangeTo:(id)arg1 ;
-(void)setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setImage:(id)arg0 ;
-(void)setImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setLandscapeImagePhone:(id)arg0 ;
-(void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets )arg0 ;
-(void)setLargeContentSizeImage:(id)arg0 ;
-(void)setLargeContentSizeImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif