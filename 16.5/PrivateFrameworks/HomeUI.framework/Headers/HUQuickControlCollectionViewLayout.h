// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWLAYOUT_H
#define HUQUICKCONTROLCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary, NSLayoutConstraint;


#import "HUQuickControlCollectionViewLayoutInfo.h"
#import "HUQuickControlGridLayoutManager.h"
#import "HUQuickControlCollectionViewControllerLayoutOptions.h"

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout

@property (readonly, nonatomic) NSMutableDictionary *cachedLayoutAttributesByIndexPath; // ivar: _cachedLayoutAttributesByIndexPath
@property (readonly, nonatomic) NSMutableDictionary *cachedSectionHeaderLayoutAttributes; // ivar: _cachedSectionHeaderLayoutAttributes
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) HUQuickControlCollectionViewLayoutInfo *layoutInfo; // ivar: _layoutInfo
@property (retain, nonatomic) HUQuickControlGridLayoutManager *layoutManager; // ivar: _layoutManager
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // ivar: _layoutOptions


+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_computeRowLayoutOriginsFromLayoutDetails:(id)arg0 forSectionSettings:(id)arg1 ;
-(id)_computeRowLayoutsForGridLayout:(id)arg0 gridLayoutSettings:(id)arg1 ;
-(id)_computeSizingLayoutInfo;
-(id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg0 itemSize:(NSUInteger)arg1 ;
-(id)delegate;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)_computeGridLayoutAttributesForLayoutInfo:(id)arg0 ;
-(void)_computeLayoutInfo;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif