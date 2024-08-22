// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVIEWELEMENTPAGESECTION_H
#define SKUIVIEWELEMENTPAGESECTION_H

@class SKUICollectionViewCell<SKUIViewElementView>, NSString;
@protocol SKUIArtworkRequestDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>

 {
    Class _cellClass;
    UIEdgeInsets _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    CGFloat _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    BOOL _rendersWithPerspective;
    NSString *_reuseIdentifier;
    CGFloat _sectionBottomInset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultVerticalInset;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_showsImageReflection;
-(BOOL)_stretchesToFitCollectionViewBounds;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg0 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)contentInsetAdjustmentForCollectionView:(id)arg0 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)defaultItemPinningStyle;
-(NSInteger)numberOfCells;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )pinningContentInsetForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_reloadViewElementProperties;
-(void)_requestCellLayout;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg0 indexPath:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg0 completionBlock:(id)arg1 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif