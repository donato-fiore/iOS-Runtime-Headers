// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPSTRIPLAYOUT_H
#define CKAPPSTRIPLAYOUT_H

@class UICollectionViewLayout, NSArray;



@interface CKAppStripLayout : UICollectionViewLayout {
    NSArray *_minifiedAttributes;
    NSArray *_magnifiedAttributes;
    NSArray *_supplementryMinifiedAttributes;
    NSArray *_supplementryMagnifiedAttributes;
    BOOL _inLayoutModeTransition;
}


@property (nonatomic) NSUInteger layoutMode; // ivar: _layoutMode
@property (nonatomic) BOOL shouldDimPluginCells; // ivar: _shouldDimPluginCells
@property (nonatomic) BOOL shouldShowCellBorders; // ivar: _shouldShowCellBorders


+(CGFloat)maxHeight;
+(CGFloat)minHeight;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)_favoritesCount;
-(NSInteger)_itemCount;
-(NSInteger)_recentsCount;
-(id)_attributesForLayoutMode:(NSUInteger)arg0 ;
-(id)_currentAttributes;
-(id)_currentSupplementryAttributes;
-(id)_generateAttributesForSpec:(struct _Spec )arg0 ;
-(id)_generateSupplementryAttributesForSpec:(struct _Spec )arg0 minified:(BOOL)arg1 ;
-(id)_supplementryAttributesForLayoutMode:(NSUInteger)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )collectionViewContentSizeForLayoutMode:(NSUInteger)arg0 ;
-(struct _Spec )_specForLayoutMode:(NSUInteger)arg0 ;
-(void)finishLayoutModeTransition;
-(void)invalidateCachedLayout;
-(void)invalidateLayout;
-(void)prepareForLayoutModeTransition;
-(void)prepareLayout;


@end


#endif