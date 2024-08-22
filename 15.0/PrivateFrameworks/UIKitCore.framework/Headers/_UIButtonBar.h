// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBAR_H
#define _UIBUTTONBAR_H

@class NSLayoutDimension, NSLayoutConstraint, NSMutableArray, NSMapTable, UIView<UIPointerInteractionDelegate>, NSArray, NSString;
@protocol UIPointerInteractionDelegate, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding, _UIButtonBarAppearanceDelegate, _UIButtonBarDelegate;

#import <Foundation/Foundation.h>

#import "_UIButtonBarStackView.h"
#import "UIView.h"
#import "_UIButtonBarLayoutMetrics.h"
#import "_UIPointerInteractionAssistant.h"
#import "_UIBarButtonItemData.h"
#import "UIBarButtonItem.h"
#import "_UIButtonBarButtonVisualProvider.h"

@interface _UIButtonBar : NSObject <UIPointerInteractionDelegate, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding>

 {
    _UIButtonBarStackView *_stackView;
    NSLayoutDimension *_flexibleSpaceEqualSizeAnchor;
    NSLayoutDimension *_minimumInterItemSpaceAnchor;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    NSLayoutDimension *_minimumInterGroupSpaceAnchor;
    NSLayoutConstraint *_minimumInterGroupSpaceConstraint;
    UIView *_centeredView;
    NSLayoutConstraint *_centeringConstraint;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_groupLayouts;
    NSMutableArray *_effectiveLayout;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_layoutViews;
    NSMutableArray *_layoutGuides;
    NSMutableArray *_layoutActiveConstraints;
    NSMapTable *_senderActionMap;
    ? _buttonBarFlags;
}


@property (weak, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *_appearanceDelegate; // ivar: __appearanceDelegate
@property (nonatomic) BOOL allowsViewWrappers;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (readonly, nonatomic) UIView<UIPointerInteractionDelegate> *assistantView;
@property (copy, nonatomic) NSArray *barButtonGroups; // ivar: _barButtonGroups
@property (nonatomic, getter=_compact, setter=_setCompact:) BOOL compact; // ivar: _compact
@property (nonatomic) BOOL createsPopoverLayoutGuides;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *defaultActionFilter; // ivar: _defaultActionFilter
@property (weak, nonatomic) NSObject<_UIButtonBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIBarButtonItemData *doneItemAppearance; // ivar: _doneItemAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDirectionalEdgeInsets hitTestDirectionalInsets;
@property (nonatomic) UIEdgeInsets hitTestInsets;
@property (nonatomic) NSInteger itemDistribution;
@property (nonatomic, getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:) BOOL itemsInGroupUseSameSize; // ivar: _itemsInGroupUseSameSize
@property (readonly, nonatomic, getter=_layoutWidth) CGFloat layoutWidth;
@property (nonatomic, getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:) CGFloat minimumInterGroupSpace; // ivar: _minimumInterGroupSpace
@property (nonatomic) CGFloat minimumInterItemSpace; // ivar: _minimumInterItemSpace
@property (retain, nonatomic) _UIBarButtonItemData *plainItemAppearance; // ivar: _plainItemAppearance
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIBarButtonItem *ultimateFallbackItem;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // ivar: _visualProvider


+(float)optionalConstraintsPriority;
-(BOOL)_itemDidUpdateMenu:(id)arg0 fromMenu:(id)arg1 ;
-(CGFloat)_estimatedWidth;
-(id)_layoutForGroup:(id)arg0 ;
-(id)_newGroupLayout:(id)arg0 ;
-(id)_targetActionForBarButtonItem:(id)arg0 ;
-(id)_updatedViewForBarButtonItem:(id)arg0 withView:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_appearanceChanged;
-(void)_disablePointerInteractions;
-(void)_enablePointerInteractions;
-(void)_groupDidChangeGeometry:(id)arg0 ;
-(void)_groupDidChangePriority:(id)arg0 ;
-(void)_groupDidUpdateItems:(id)arg0 removedItems:(id)arg1 ;
-(void)_groupDidUpdateRepresentative:(id)arg0 fromRepresentative:(id)arg1 ;
-(void)_groupDidUpdateVisibility:(id)arg0 ;
-(void)_invalidateAssistant:(id)arg0 ;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_layoutBar;
-(void)_reloadBarButtonGroups;
-(void)_setNeedsVisualUpdate;
-(void)_setNeedsVisualUpdateAndNotify:(BOOL)arg0 ;
-(void)_updateForTraitCollectionChange:(id)arg0 ;
-(void)_updateHitRects;
-(void)_updateToFitInWidth:(CGFloat)arg0 ;
-(void)_validateAllItems;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setNeedsHitTestUpdate;


@end


#endif