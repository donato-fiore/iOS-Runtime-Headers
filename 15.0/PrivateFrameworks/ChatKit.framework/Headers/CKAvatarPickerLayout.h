// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAVATARPICKERLAYOUT_H
#define CKAVATARPICKERLAYOUT_H

@class UICollectionViewLayout, NSArray, NSValue, UICollectionViewLayoutAttributes;
@protocol CKAvatarPickerLayoutDelegate;



@interface CKAvatarPickerLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *attrCollection; // ivar: _attrCollection
@property (copy, nonatomic) NSArray *cutoutAttrCollection; // ivar: _cutoutAttrCollection
@property (weak, nonatomic) NSObject<CKAvatarPickerLayoutDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSValue *editingFrameValue; // ivar: _editingFrameValue
@property (nonatomic) BOOL isInEditingMode; // ivar: _isInEditingMode
@property (nonatomic) NSUInteger layoutMode; // ivar: _layoutMode
@property (retain, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr; // ivar: _leftShadowDecorationAttr
@property (retain, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr; // ivar: _rightShadowDecorationAttr
@property (copy, nonatomic) NSArray *supplementaryAttrCollection; // ivar: _supplementaryAttrCollection
@property (retain, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr; // ivar: _titleSupplementaryAttr


-(BOOL)_canShowShadowClipping;
-(BOOL)_shouldShowContactNames;
-(BOOL)_shouldShowCutouts;
-(BOOL)_shouldShowTitle;
-(BOOL)_usesGroupAvatar;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)wantsChromelessAppearance;
-(NSUInteger)_itemCount;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithLayoutMode:(NSUInteger)arg0 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_setupBannerLayout;
-(void)_setupDefaultLayout;
-(void)invalidateLayoutAndCache;
-(void)prepareLayout;


@end


#endif