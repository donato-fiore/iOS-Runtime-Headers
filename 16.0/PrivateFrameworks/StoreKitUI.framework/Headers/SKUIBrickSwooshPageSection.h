// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBRICKSWOOSHPAGESECTION_H
#define SKUIBRICKSWOOSHPAGESECTION_H

@class NSString;
@protocol SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIBrickSwooshArtworkLoader.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIBrickSwooshViewController.h"
#import "SKUISwooshPageComponent.h"

@interface SKUIBrickSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate>

 {
    SKUIBrickSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIBrickSwooshViewController *_swooshViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_artworkLoader;
-(id)_missingItemLoader;
-(id)_swooshViewController;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(id)swoosh:(id)arg0 imageForCellAtIndex:(NSInteger)arg1 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(void)_addImpressionForIndex:(NSInteger)arg0 toSession:(id)arg1 ;
-(void)_loadMissingItemsFromIndex:(NSInteger)arg0 withReason:(NSInteger)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)swoosh:(id)arg0 didSelectCellAtIndex:(NSInteger)arg1 ;
-(void)swoosh:(id)arg0 willDisplayCellAtIndex:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif