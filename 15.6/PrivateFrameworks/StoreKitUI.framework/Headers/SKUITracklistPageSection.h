// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITRACKLISTPAGESECTION_H
#define SKUITRACKLISTPAGESECTION_H

@class NSString;
@protocol SKUIArtworkRequestDelegate, SKUIEntityProviding;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUITracklistColumnData.h"
#import "SKUITracklistPageComponent.h"

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUITracklistColumnData *_columnData;
    id<SKUIEntityProviding> *_entityProvider;
    NSInteger _lastNeedsMoreCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUITracklistPageComponent *pageComponent;
@property (readonly) Class superclass;


-(BOOL)_isDynamicTracklist;
-(BOOL)requestLayoutWithReloadReason:(NSInteger)arg0 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_widthForButtonElements:(id)arg0 ;
-(NSInteger)applyUpdateType:(NSInteger)arg0 ;
-(NSInteger)numberOfCells;
-(id)_columnData;
-(id)_representativeStringForViewElement:(id)arg0 ;
-(id)_viewElementForIndex:(NSInteger)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)firstAppearanceIndexPath;
-(id)initWithPageComponent:(id)arg0 ;
-(id)relevantEntityProviders;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_enumerateVisibleViewElementsUsingBlock:(id)arg0 ;
-(void)_reloadEntityProvider;
-(void)_requestCellLayoutWithColumnData:(id)arg0 ;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillScrollToOffset:(struct CGPoint )arg0 visibleRange:(struct SKUIIndexPathRange )arg1 ;
-(void)dealloc;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg0 completionBlock:(id)arg1 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif