// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOCKUPSWOOSHPAGESECTION_H
#define SKUILOCKUPSWOOSHPAGESECTION_H

@class NSString;
@protocol SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate;


#import "SKUIStorePageSection.h"
#import "SKUILockupSwooshArtworkLoader.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIProductPageOverlayController.h"
#import "SKUILockupSwooshViewController.h"
#import "SKUISwooshPageComponent.h"

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate>

 {
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    NSInteger _overlaySourceIndex;
    SKUILockupSwooshViewController *_swooshViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_artworkLoader;
-(id)_missingItemLoader;
-(id)_popSourceViewForOverlayController:(id)arg0 ;
-(id)_swooshViewController;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToDismissItem:(id)arg1 ;
-(id)productPageOverlay:(id)arg0 flipSourceViewToPresentItem:(id)arg1 ;
-(id)swoosh:(id)arg0 imageForCellAtIndex:(NSInteger)arg1 ;
-(id)swoosh:(id)arg0 videoThumbnailForCellAtIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)_addImpressionForItemIndex:(NSInteger)arg0 toSession:(id)arg1 ;
-(void)_loadMissingItemsFromIndex:(NSInteger)arg0 withReason:(NSInteger)arg1 ;
-(void)_showProductPageForItem:(id)arg0 index:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)productPageOverlayDidDismiss:(id)arg0 ;
-(void)setImage:(id)arg0 forRequest:(id)arg1 ;
-(void)swoosh:(id)arg0 didSelectCellAtIndex:(NSInteger)arg1 ;
-(void)swoosh:(id)arg0 willDisplayCellAtIndex:(NSInteger)arg1 ;
-(void)swooshDidSelectSeeAll:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif