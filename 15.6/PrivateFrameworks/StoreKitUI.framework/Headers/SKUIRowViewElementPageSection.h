// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIROWVIEWELEMENTPAGESECTION_H
#define SKUIROWVIEWELEMENTPAGESECTION_H

@class NSString;
@protocol SKUIArtworkRequestDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIRowComponent.h"

@interface SKUIRowViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIRowComponent *pageComponent;
@property (readonly) Class superclass;


-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg0 ;
-(BOOL)updateCellWithIndexPath:(id)arg0 itemState:(id)arg1 animated:(BOOL)arg2 ;
-(CGFloat)_interiorColumnSpacing;
-(CGFloat)_singleColumnWidth;
-(Class)_cellClassForCardViewElement:(id)arg0 ;
-(Class)_cellClassForLockupViewElement:(id)arg0 ;
-(Class)_cellClassForViewElement:(id)arg0 ;
-(NSInteger)numberOfCells;
-(id)_firstChildForColumn:(id)arg0 ;
-(id)_reuseIdentifierForCardViewElement:(id)arg0 ;
-(id)_reuseIdentifierForLockupViewElement:(id)arg0 ;
-(id)_reuseIdentifierForViewElement:(id)arg0 ;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_enumerateViewElementsUsingBlock:(id)arg0 ;
-(void)_requestLayoutForCells;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)dealloc;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(NSInteger)arg0 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif