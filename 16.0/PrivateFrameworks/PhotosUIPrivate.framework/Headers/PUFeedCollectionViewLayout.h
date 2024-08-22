// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFEEDCOLLECTIONVIEWLAYOUT_H
#define PUFEEDCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSMutableArray;


#import "PUParallaxComputer.h"

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {
    PUParallaxComputer *_parallaxComputer;
    NSMutableArray *_sectionLayoutInfos;
    CGSize _contentSize;
}


@property (nonatomic) UIEdgeInsets captionPadding; // ivar: _captionPadding
@property (nonatomic) UIEdgeInsets floatPadding; // ivar: _floatPadding
@property (nonatomic) CGFloat floatingBottomDecorationHeight; // ivar: _floatingBottomDecorationHeight
@property (nonatomic) NSInteger flowDirection; // ivar: _flowDirection
@property (readonly, nonatomic) unsigned int flowDirectionEdge;
@property (nonatomic) CGSize interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) CGSize noCaptionSpacing; // ivar: _noCaptionSpacing
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (nonatomic) NSInteger parallaxModel; // ivar: _parallaxModel
@property (nonatomic) CGFloat sectionHeaderBackgroundHeight; // ivar: _sectionHeaderBackgroundHeight
@property (nonatomic) CGSize sectionReferenceSize; // ivar: _sectionReferenceSize
@property (nonatomic) BOOL shouldApplyParallaxEffect; // ivar: _shouldApplyParallaxEffect
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // ivar: _shouldDisplayCaptionsBelowBatches
@property (nonatomic) BOOL shouldFloatOverShortDistances; // ivar: _shouldFloatOverShortDistances
@property (nonatomic) BOOL shouldFloatSectionHeaders; // ivar: _shouldFloatSectionHeaders
@property (nonatomic) BOOL shouldFloatThumbnails; // ivar: _shouldFloatThumbnails
@property (nonatomic) BOOL shouldFloatWithEase; // ivar: _shouldFloatWithEase
@property (nonatomic) CGFloat thumbnailSpacing; // ivar: _thumbnailSpacing


+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)arg0 tileLayoutAttributes:(id)arg1 fixedLayoutAttributes:(id)arg2 origin:(struct CGPoint *)arg3 size:(struct CGSize *)arg4 sectionContentSize:(struct CGSize )arg5 itemCount:(NSInteger)arg6 section:(NSInteger)arg7 ;
-(NSInteger)numberOfTilesOmittedInSection:(NSInteger)arg0 ;
-(id)_delegate;
-(id)_parallaxComputer;
-(id)indexPathForImageElementAtPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)sectionsJoinedWithSection:(NSInteger)arg0 ;
-(struct CGRect )_layoutVerticalSectionHeaderIfNecessary:(id)arg0 fixedLayoutAttributes:(id)arg1 floatingLayoutAttributes:(id)arg2 section:(NSInteger)arg3 ;
-(struct CGRect )frameForSection:(NSInteger)arg0 ;
-(struct CGRect )frameForTileAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustFloatingLayoutAttributes:(id)arg0 inSection:(NSInteger)arg1 ;
-(void)_enumerateSectionsInRect:(struct CGRect )arg0 withBlock:(id)arg1 ;
-(void)_getSize:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_getSizeForHorizontalFlowDirection:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_getSizeForVerticalFlowDirection:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_sectionAtIndex:(NSInteger)arg0 sizeDidChangeFrom:(struct CGSize )arg1 to:(struct CGSize )arg2 ;
-(void)_setOrigin:(struct CGPoint )arg0 forSectionLayoutInfo:(id)arg1 ;
-(void)_updateGlobalLayoutInfoWithOptions:(NSInteger)arg0 sectionsWithUpdatedGroupIDs:(*id)arg1 ;
-(void)_updateLayoutInfoForSection:(NSInteger)arg0 ignoreSizeChange:(BOOL)arg1 ;
-(void)_updateParallaxComputer;
-(void)_updateParallaxForLayoutAttributes:(id)arg0 ;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)enumerateImageElementsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)invalidateLayoutAndCache;
-(void)prepareLayout;
-(void)updateCollectionViewWithDeletedSections:(id)arg0 insertedSections:(id)arg1 updatedSections:(id)arg2 ;


@end


#endif