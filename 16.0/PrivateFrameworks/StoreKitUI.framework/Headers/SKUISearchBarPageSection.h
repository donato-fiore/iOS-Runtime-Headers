// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISEARCHBARPAGESECTION_H
#define SKUISEARCHBARPAGESECTION_H



#import "SKUIStorePageSection.h"
#import "SKUISearchBarController.h"

@interface SKUISearchBarPageSection : SKUIStorePageSection {
    SKUISearchBarController *_searchBarController;
}




-(NSInteger)numberOfCells;
-(id)_searchBarController;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)willAppearInContext:(id)arg0 ;


@end


#endif