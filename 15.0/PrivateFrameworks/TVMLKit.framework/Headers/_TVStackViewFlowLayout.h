// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTACKVIEWFLOWLAYOUT_H
#define _TVSTACKVIEWFLOWLAYOUT_H

@class UICollectionViewLayout, NSArray, IKChangeSet, NSIndexSet;
@protocol _TVStackViewDelegateFlowLayout;



@interface _TVStackViewFlowLayout : UICollectionViewLayout {
    id<_TVStackViewDelegateFlowLayout> *_stackViewDelegateFlowLayout;
    ? _stackViewDelegateFlowLayoutFlags;
    NSArray *_oldSectionCellLayoutAttributes;
    IKChangeSet *_changeSet;
    NSIndexSet *_indexesAddedAtEnd;
    CGPoint _initialContentOffset;
    BOOL _isFullReplace;
    CGFloat _lastLayoutWidth;
}


@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (copy, nonatomic) id *onPrepareLayout; // ivar: _onPrepareLayout
@property (copy, nonatomic) NSArray *sectionCellLayoutAttributes; // ivar: _sectionCellLayoutAttributes
@property (readonly, nonatomic) CGFloat showcaseFactor; // ivar: _showcaseFactor
@property (nonatomic) CGFloat showcaseHeight; // ivar: _showcaseHeight
@property (copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // ivar: _supplementaryCellLayoutAttributes
@property (nonatomic) NSInteger supplementaryCellSection; // ivar: _supplementaryCellSection


+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)_computeShowcaseFactorForContentOffset:(struct CGPoint )arg0 ;
-(id)_oldLayoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_prepareSectionMetrics;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;


@end


#endif