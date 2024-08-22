// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBROWSEHEADERPAGESECTION_H
#define SKUIBROWSEHEADERPAGESECTION_H



#import "SKUIStorePageSection.h"
#import "SKUIBrowseHeaderPageComponent.h"

@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection

@property (readonly, nonatomic) SKUIBrowseHeaderPageComponent *pageComponent;


-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg0 ;
-(NSInteger)numberOfCells;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif