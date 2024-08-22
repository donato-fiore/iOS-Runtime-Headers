// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGRIDVIEWELEMENTPAGESECTIONCONFIGURATION_H
#define SKUIGRIDVIEWELEMENTPAGESECTIONCONFIGURATION_H

@class NSArray, UIColor;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

#import <Foundation/Foundation.h>

#import "SKUIViewElementLayoutContext.h"
#import "SKUIStorePageSectionContext.h"

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {
    NSInteger _cardVerticalSpacingStyle;
    CGFloat _cellContentWidth;
    BOOL _cellPaddingNeedsReloading;
    CGFloat _cellPaddingInteriorHorizontal;
    CGFloat _cellPaddingLeftEdgeHorizontal;
    CGFloat _cellPaddingRightEdgeHorizontal;
    UIEdgeInsets _gridViewElementStyleElementPadding;
    CGFloat _gridViewElementStyleItemWidth;
    BOOL _gridViewElementStyleItemWidthIsPercentage;
    BOOL _gridIsEdgeToEdge;
    BOOL _hasGridViewElementStyle;
    BOOL _hasHeader;
    UIEdgeInsets _separatorMargins;
    NSInteger _lockupType;
    CGFloat _minimumCellHeight;
    NSUInteger _numberOfGridItems;
    NSArray *_positions;
    UIColor *_separatorColor;
    NSInteger _separatorStyle;
    UIEdgeInsets _separatorWidths;
    NSArray *_viewElements;
    ? _dataSourceRespondsToSelectorFlags;
}


@property (retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // ivar: _cellLayoutContext
@property (readonly, nonatomic) CGFloat columnContentWidth;
@property (readonly, nonatomic) CGFloat columnWidth;
@property (weak, nonatomic) NSObject<SKUIGridViewElementPageSectionConfigurationDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // ivar: _pageSectionContext
@property (nonatomic) BOOL rendersWithPerspective; // ivar: _rendersWithPerspective
@property (readonly, nonatomic) BOOL showsEditMode; // ivar: _showsEditMode


-(BOOL)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg0 ;
-(BOOL)_useOrdinalPadding;
-(BOOL)viewElementIsStandardCard:(id)arg0 ;
-(CGFloat)_cellContentWidth;
-(CGFloat)_cellHeightForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)_cellPaddingInteriorHorizontal;
-(CGFloat)_cellPaddingLeftEdgeHorizontal;
-(CGFloat)_cellPaddingRightEdgeHorizontal;
-(CGFloat)_columnContentWidthPaddingForWidth:(CGFloat)arg0 ;
-(Class)_cardCellClassForCard:(id)arg0 ;
-(Class)cellClassForViewElement:(id)arg0 ;
-(Class)lockupCellClassWithLockup:(id)arg0 ;
-(NSInteger)_lockupTypeForLockup:(id)arg0 ;
-(NSInteger)_numberOfColumnsForWidth:(CGFloat)arg0 style:(id)arg1 ;
-(NSInteger)positionForIndexPath:(id)arg0 ;
-(id)_cardArtworkBoundingSizeForIndexPath:(id)arg0 ;
-(id)_lockupCellReuseIdentifierWithLockup:(id)arg0 ;
-(id)backgroundColorForViewElement:(id)arg0 ;
-(id)cellForViewElement:(id)arg0 indexPath:(id)arg1 ;
-(struct CGSize )cellSizeForViewElement:(id)arg0 indexPath:(id)arg1 ;
-(struct UIEdgeInsets )_cellInsetsForViewElement:(id)arg0 indexPath:(id)arg1 ;
-(struct UIEdgeInsets )_normalizedContentInsetForViewElement:(id)arg0 indexPath:(id)arg1 ;
-(struct UIEdgeInsets )sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets )arg0 forGridViewElement:(id)arg1 ;
-(void)_enumerateViewElementsForRowOfIndexPath:(id)arg0 usingBlock:(id)arg1 ;
-(void)_reloadCellPaddingIfNeeded;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)configureCell:(id)arg0 forViewElement:(id)arg1 indexPath:(id)arg2 ;
-(void)registerReusableClassesForCollectionView:(id)arg0 ;
-(void)reloadCellWithIndexPath:(id)arg0 forViewElement:(id)arg1 reason:(NSInteger)arg2 ;
-(void)requestCellLayoutForViewElement:(id)arg0 ;
-(void)updateLayoutPropertiesForGridViewElement:(id)arg0 ;
-(void)updateStylePropertiesForGridViewElement:(id)arg0 gridItemViewElements:(id)arg1 numberOfGridItems:(NSUInteger)arg2 ;


@end


#endif