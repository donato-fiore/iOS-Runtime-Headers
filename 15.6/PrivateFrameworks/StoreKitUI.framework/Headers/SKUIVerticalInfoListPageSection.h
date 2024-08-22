// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVERTICALINFOLISTPAGESECTION_H
#define SKUIVERTICALINFOLISTPAGESECTION_H

@class NSMutableArray, NSString;
@protocol SKUIArtworkRequestDelegate;


#import "SKUIStorePageSection.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIInfoListViewElement.h"

@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>

 {
    SKUIViewElementLayoutContext *_cellLayoutContext;
    CGFloat _columnHeight;
    NSMutableArray *_columns;
    CGFloat _columnWidth;
    SKUIInfoListViewElement *_infoList;
    NSInteger _numberOfColumns;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_numberOfColumnsForWidth:(CGFloat)arg0 ;
-(NSInteger)numberOfCells;
-(id)_reloadColumnDataIfNecessary;
-(id)backgroundColorForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)initWithPageComponent:(id)arg0 ;
-(struct CGSize )cellSizeForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsetForIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )sectionContentInset;
-(void)_enumerateVisibleIndexPathsUsingBlock:(id)arg0 ;
-(void)_requestCellLayout;
-(void)addImpressionsForIndexPath:(id)arg0 toSession:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg0 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg0 ;
-(void)entityProvider:(id)arg0 didInvalidateWithContext:(id)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg0 reason:(NSInteger)arg1 ;
-(void)willAppearInContext:(id)arg0 ;
-(void)willTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif