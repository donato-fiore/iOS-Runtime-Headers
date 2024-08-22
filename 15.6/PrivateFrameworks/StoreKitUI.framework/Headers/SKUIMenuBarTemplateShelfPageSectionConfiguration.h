// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMENUBARTEMPLATESHELFPAGESECTIONCONFIGURATION_H
#define SKUIMENUBARTEMPLATESHELFPAGESECTIONCONFIGURATION_H



#import "SKUIShelfPageSectionConfiguration.h"

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {
    id *_fixedElementsCollectionViewCell;
    NSUInteger _numberOfIterations;
    NSInteger _focusedIndex;
}




-(NSInteger)numberOfSectionCells;
-(NSUInteger)numberOfIterations;
-(id)_focusedViewElement;
-(id)cellForShelfViewElement:(id)arg0 indexPath:(id)arg1 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg0 ;
-(id)init;
-(id)initWithNumberOfIterations:(NSUInteger)arg0 ;
-(struct CGSize )cellSizeForShelfViewElement:(id)arg0 indexPath:(id)arg1 numberOfShelfItems:(NSInteger)arg2 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg0 ;
-(void)registerReusableClassesForCollectionView:(id)arg0 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg0 withShelfItemViewElements:(id)arg1 requestCellLayouts:(BOOL)arg2 numberOfShelfItems:(NSInteger)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif