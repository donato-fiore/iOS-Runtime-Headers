// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTLAYOUTSECTIONCONFIGURATION_H
#define _UICOLLECTIONVIEWLISTLAYOUTSECTIONCONFIGURATION_H

@class NSString, NSArray;
@protocol NSCopying, UITableConstants, NSCollectionLayoutEnvironment_Private;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UIListSeparatorConfiguration.h"
#import "UICollectionView.h"

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>



@property (nonatomic, getter=_isAPIVersion) BOOL _apiVersion; // ivar: __apiVersion
@property (retain, nonatomic) UIColor *_backgroundColor; // ivar: __backgroundColor
@property (copy, nonatomic) NSString *_footerElementKind; // ivar: __footerElementKind
@property (copy, nonatomic) NSString *_headerElementKind; // ivar: __headerElementKind
@property (copy, nonatomic, getter=_itemSeparatorHandler, setter=_setItemSeparatorHandler:) id *_itemSeparatorHandler; // ivar: _itemSeparatorHandler
@property (copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration; // ivar: _separatorConfiguration
@property (readonly, nonatomic, getter=_separatorConfigurationNoCopy) _UIListSeparatorConfiguration *_separatorConfigurationNoCopy;
@property (nonatomic) NSInteger appearanceStyle; // ivar: _appearanceStyle
@property (readonly, weak, nonatomic, getter=_collectionView) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic, getter=_constants) NSObject<UITableConstants> *constants;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (copy, nonatomic) id *didEndSwipingHandler; // ivar: _didEndSwipingHandler
@property (nonatomic) CGFloat estimatedRowHeight; // ivar: _estimatedRowHeight
@property (nonatomic) CGFloat estimatedSectionFooterHeight; // ivar: _estimatedSectionFooterHeight
@property (nonatomic) CGFloat estimatedSectionHeaderHeight; // ivar: _estimatedSectionHeaderHeight
@property (nonatomic) CGFloat headerTopPadding; // ivar: _headerTopPadding
@property (copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights; // ivar: _itemHeights
@property (readonly, nonatomic, getter=_layoutEnvironment) NSObject<NSCollectionLayoutEnvironment_Private> *layoutEnvironment; // ivar: _layoutEnvironment
@property (copy, nonatomic) id *leadingSwipeActionsConfigurationProvider; // ivar: _leadingSwipeActionsConfigurationProvider
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) CGFloat sectionFooterHeight; // ivar: _sectionFooterHeight
@property (nonatomic) CGFloat sectionHeaderHeight; // ivar: _sectionHeaderHeight
@property (nonatomic) NSDirectionalEdgeInsets separatorInset;
@property (copy, nonatomic) id *separatorInsetProvider; // ivar: _separatorInsetProvider
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL stylesFirstItemAsHeader; // ivar: _stylesFirstItemAsHeader
@property (copy, nonatomic) id *trailingSwipeActionsConfigurationProvider; // ivar: _trailingSwipeActionsConfigurationProvider
@property (readonly, nonatomic, getter=_wantsSwipeActions) BOOL wantsSwipeActions;
@property (copy, nonatomic) id *willBeginSwipingHandler; // ivar: _willBeginSwipingHandler


+(id)new;
-(BOOL)_hasFooter;
-(BOOL)_hasHeaderOrFirstItemStyledAsHeader;
-(BOOL)_hasSupplementaryAsHeader;
-(BOOL)_shouldDrawThickSeparators;
-(BOOL)_shouldPinSupplementaries;
-(BOOL)_shouldSupplementariesFollowSectionInsets;
-(BOOL)_usesSectionBackgroundDecoration;
-(CGFloat)_defaultRowHeight;
-(CGFloat)_defaultSectionFooterHeight;
-(CGFloat)_defaultSectionHeaderHeight;
-(CGFloat)_effectiveEstimatedRowHeight;
-(CGFloat)_effectiveEstimatedSectionFooterHeight;
-(CGFloat)_effectiveEstimatedSectionHeaderHeight;
-(CGFloat)_separatorHeight;
-(CGFloat)_topContentInsetForGroupedAppearance;
-(CGFloat)_topContentInsetForPaddingAboveHeader;
-(NSInteger)_defaultContentInsetsReference;
-(NSInteger)_defaultSeparatorStyleForAppearanceStyle:(NSInteger)arg0 ;
-(id)_createSeparatorForBottom:(BOOL)arg0 ;
-(id)_createSwipeActionsContainer;
-(id)_generateLayoutGroup:(id)arg0 ;
-(id)_traitCollection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAppearanceStyle:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)_addSupplementaryItemsToLayout:(id)arg0 ;


@end


#endif