// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFEEDCOLLECTIONVIEWLAYOUT_H
#define CKFEEDCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSMutableArray;
@protocol CKFeedCollectionViewLayoutDatasource;



@interface CKFeedCollectionViewLayout : UICollectionViewLayout {
    NSMutableArray *_sectionLayoutInfos;
    CGSize _contentSize;
}


@property (nonatomic) UIEdgeInsets captionPadding; // ivar: _captionPadding
@property (nonatomic) NSUInteger compositeLayoutSection; // ivar: _compositeLayoutSection
@property (nonatomic) NSObject<CKFeedCollectionViewLayoutDatasource> *feedDatasource; // ivar: _feedDatasource
@property (nonatomic) UIEdgeInsets floatPadding; // ivar: _floatPadding
@property (nonatomic) CGFloat floatingBottomDecorationHeight; // ivar: _floatingBottomDecorationHeight
@property (nonatomic) NSInteger flowDirection; // ivar: _flowDirection
@property (readonly, nonatomic) unsigned int flowDirectionEdge;
@property (nonatomic) CGSize interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) CGSize noCaptionSpacing; // ivar: _noCaptionSpacing
@property (nonatomic) CGFloat sectionHeaderBackgroundHeight; // ivar: _sectionHeaderBackgroundHeight
@property (nonatomic) CGSize sectionReferenceSize; // ivar: _sectionReferenceSize
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // ivar: _shouldDisplayCaptionsBelowBatches
@property (nonatomic) BOOL shouldDisplaySectionHeadersBelowSections; // ivar: _shouldDisplaySectionHeadersBelowSections
@property (nonatomic) BOOL shouldFloatOverShortDistances; // ivar: _shouldFloatOverShortDistances
@property (nonatomic) BOOL shouldFloatSectionHeaders; // ivar: _shouldFloatSectionHeaders
@property (nonatomic) BOOL shouldFloatThumbnails; // ivar: _shouldFloatThumbnails
@property (nonatomic) BOOL shouldFloatWithEase; // ivar: _shouldFloatWithEase
@property (nonatomic) CGFloat thumbnailSpacing; // ivar: _thumbnailSpacing


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(NSInteger)numberOfTilesOmittedInSection:(NSInteger)arg0 ;
-(id)_delegate;
-(id)indexPathForImageElementAtPoint:(struct CGPoint )arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)sectionsJoinedWithSection:(NSInteger)arg0 ;
-(struct CGRect )frameForSection:(NSInteger)arg0 ;
-(struct CGRect )frameForTileAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustFloatingLayoutAttributes:(id)arg0 inSection:(NSInteger)arg1 ;
-(void)_enumerateSectionsInRect:(struct CGRect )arg0 withBlock:(id)arg1 ;
-(void)_getSize:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_getSizeForHorizontalFlowDirection:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_getSizeForVerticalFlowDirection:(struct CGSize *)arg0 headerSize:(struct CGSize *)arg1 footerSize:(struct CGSize *)arg2 fixedLayoutAttributes:(id)arg3 tileLayoutAttributes:(id)arg4 floatingLayoutAttributes:(id)arg5 type:(*NSInteger)arg6 forSection:(NSInteger)arg7 isJoined:(BOOL)arg8 ;
-(void)_sectionAtIndex:(NSInteger)arg0 sizeDidChangeFrom:(struct CGSize )arg1 to:(struct CGSize )arg2 ;
-(void)_updateGlobalLayoutInfoWithOptions:(NSInteger)arg0 sectionsWithUpdatedGroupIDs:(*id)arg1 ;
-(void)_updateLayoutInfoForSection:(NSInteger)arg0 ignoreSizeChange:(BOOL)arg1 ;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)enumerateImageElementsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)invalidateLayoutAndCache;
-(void)prepareLayout;
-(void)updateCollectionViewWithDeletedSections:(id)arg0 insertedSections:(id)arg1 updatedSections:(id)arg2 ;


@end


#endif