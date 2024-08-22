// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBRICKGRIDPAGESECTION_H
#define SKUIBRICKGRIDPAGESECTION_H

@class NSMapTable, UIImage, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIMissingItemDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIGridComponent.h"

@interface SKUIBrickGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate>

 {
    NSMapTable *_artworkRequests;
    CGFloat _baseHeight;
    CGFloat _columnWidth;
    NSMapTable *_editorialLayouts;
    SKUIMissingItemLoader *_missingItemLoader;
    NSInteger _numberOfColumns;
    CGFloat _paddingHorizontal;
    CGFloat _paddingTop;
    UIImage *_placeholderImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;


-(NSInteger)numberOfCells;
-(id)_editorialLayoutForBrick:(id)arg0 ;
-(id)_missingItemLoader;
-(id)cellForIndexPath:(id)arg0 ;
-(id)clickEventWithLink:(id)arg0 elementName:(id)arg1 index:(NSInteger)arg2 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetsForColumnIndex:(NSInteger)arg0 rowWidth:(CGFloat)arg1 ;
-(void)_enumerateVisibleBricksUsingBlock:(id)arg0 ;
-(void)_loadArtworkForBrick:(id)arg0 artworkLoader:(id)arg1 reason:(NSInteger)arg2 ;
-(void)_loadMissingItemsFromIndex:(NSInteger)arg0 withReason:(NSInteger)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif