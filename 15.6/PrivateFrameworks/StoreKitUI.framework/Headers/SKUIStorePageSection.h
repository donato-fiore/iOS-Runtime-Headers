// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREPAGESECTION_H
#define SKUISTOREPAGESECTION_H

@class NSSet, IKColor, NSString, NSIndexPath, NSArray;
@protocol SKUIProductPageOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SKUIProductPageOverlayController.h"
#import "SKUIStorePageSectionContext.h"
#import "SKUIPageComponent.h"

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate>

 {
    BOOL _hasValidRelevantEntityProviders;
    SKUIProductPageOverlayController *_overlayController;
    NSSet *_relevantEntityProviders;
}


@property (readonly, nonatomic) IKColor *backgroundColorForSection; // ivar: _backgroundColorForSection
@property (nonatomic, getter=isBottomSection) BOOL bottomSection; // ivar: _bottomSection
@property (readonly, nonatomic) SKUIStorePageSectionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultItemPinningStyle;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSIndexPath *firstAppearanceIndexPath;
@property (readonly, nonatomic) BOOL fitsToHeight;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *indexPathsForBackgroundItems; // ivar: _indexPathsForBackgroundItems
@property (readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property (readonly, nonatomic) NSInteger numberOfCells;
@property (readonly, nonatomic) SKUIPageComponent *pageComponent; // ivar: _component
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly, copy, nonatomic) NSSet *relevantEntityProviders;
@property (readonly, nonatomic) UIEdgeInsets sectionContentInset;
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex
@property (readonly) Class superclass;
@property (nonatomic, getter=isTopSection) BOOL topSection; // ivar: _topSection


-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg0 ;
-(BOOL)containsElementWithIndexBarEntryID:(id)arg0 ;
-(BOOL)performDefaultActionForViewElement:(id)arg0 ;
-(BOOL)requestLayoutWithReloadReason:(NSInteger)arg0 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)contentInsetAdjustmentForCollectionView:(id)arg0 ;
-(NSInteger)_itemPinningGroup;
-(NSInteger)_itemPinningStyle;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)pinningGroupForItemAtIndexPath:(id)arg0 ;
-(NSInteger)pinningStyleForItemAtIndexPath:(id)arg0 ;
-(NSInteger)pinningTransitionStyleForItemAtIndexPath:(id)arg0 ;
-(NSInteger)updateWithContext:(id)arg0 pageComponent:(id)arg1 ;
-(id)_clickEventWithElementName:(id)arg0 index:(NSInteger)arg1 fieldData:(id)arg2 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)clickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)clickEventWithLink:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)clickEventWithMedia:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)itemOfferClickEventWithItem:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)performItemOfferActionForItem:(id)arg0 ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg0 relativeSectionIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )pinningContentInsetForItemAtIndexPath:(id)arg0 ;
-(struct _NSRange )itemRangeForIndexPathRange:(struct SKUIIndexPathRange )arg0 ;
-(void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg0 toSet:(id)arg1 ;
-(void)_sendXEventWithDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidConfirmButtonElement:(id)arg0 withClickInfo:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg0 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidLongPressItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidTapVideoAtIndexPath:(id)arg0 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillScrollToOffset:(struct CGPoint )arg0 visibleRange:(struct SKUIIndexPathRange )arg1 ;
-(void)dealloc;
-(void)deselectItemsAnimated:(BOOL)arg0 ;
-(void)didAppearInContext:(id)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg0 indexPath:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg0 completionBlock:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)playVideoForElement:(id)arg0 ;
-(void)playVideoWithURL:(id)arg0 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)productPageOverlayDidDismiss:(id)arg0 ;
-(void)registerContextActionsForCell:(id)arg0 indexPath:(id)arg1 viewController:(id)arg2 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)reloadVisibleCellsWithReason:(NSInteger)arg0 ;
-(void)sendXEventWithItem:(id)arg0 completionBlock:(id)arg1 ;
-(void)sendXEventWithLink:(id)arg0 completionBlock:(id)arg1 ;
-(void)showPageWithLink:(id)arg0 ;
-(void)showProductViewControllerWithItem:(id)arg0 ;
-(void)unregisterContextActionsForCell:(id)arg0 indexPath:(id)arg1 viewController:(id)arg2 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willHideInContext:(id)arg0 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif