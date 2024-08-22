// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBROWSEITEMPAGESECTION_H
#define SKUIBROWSEITEMPAGESECTION_H



#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIBrowseItemComponent.h"

@interface SKUIBrowseItemPageSection : SKUIStorePageSection {
    SKUIViewElementLayoutContext *_layoutContext;
}


@property (readonly, nonatomic) SKUIBrowseItemComponent *pageComponent; // ivar: _component


-(NSInteger)numberOfCells;
-(id)_imageForImageViewElement:(id)arg0 styleColor:(id)arg1 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif