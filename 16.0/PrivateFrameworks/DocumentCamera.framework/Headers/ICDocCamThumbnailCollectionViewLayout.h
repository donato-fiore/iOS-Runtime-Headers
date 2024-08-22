// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMTHUMBNAILCOLLECTIONVIEWLAYOUT_H
#define ICDOCCAMTHUMBNAILCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSMutableArray, NSDictionary;
@protocol ICDocCamThumbnailViewLayoutDelegate;



@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) BOOL compactLayout; // ivar: _compactLayout
@property (weak, nonatomic) NSObject<ICDocCamThumbnailViewLayoutDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths; // ivar: _deleteIndexPaths
@property (retain, nonatomic) NSMutableArray *insertIndexPaths; // ivar: _insertIndexPaths
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (retain, nonatomic) NSDictionary *layoutInfo; // ivar: _layoutInfo
@property (nonatomic) BOOL transitioning; // ivar: _transitioning


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGRect )compactFrameForThumbnailAtIndexPath:(id)arg0 withSize:(struct CGSize )arg1 ;
-(struct CGRect )frameForThumbnailAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )frameSizeForImageSize:(struct CGSize )arg0 ;
-(void)finalizeAnimatedBoundsChange;
-(void)finalizeCollectionViewUpdates;
-(void)finalizeLayoutTransition;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareForTransitionFromLayout:(id)arg0 ;
-(void)prepareForTransitionToLayout:(id)arg0 ;
-(void)prepareLayout;
-(void)prepareLayout:(BOOL)arg0 ;
-(void)setup;


@end


#endif