// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIITEMGRIDVIEWCONTROLLER_H
#define SKUIITEMGRIDVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSMutableIndexSet, UIImage, NSString, NSArray, NSOperationQueue;
@protocol SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIItemGridDelegate;


#import "SKUIItemCollectionController.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIClientContext.h"
#import "SKUIStyledImageDataConsumer.h"
#import "SKUIUber.h"

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    UIImage *_placeholderImage;
    NSMutableIndexSet *_selectedItemIndexSet;
}


@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) CGPoint contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIItemGridDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) CGSize imageBoundingSize; // ivar: _imageBoundingSize
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUIUber *uber; // ivar: _uber


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_collectionView;
-(id)_collectionViewLayout;
-(id)_itemCollectionController;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithRowHeight:(CGFloat)arg0 ;
-(id)itemCollectionController:(id)arg0 cellLayoutForItemIndex:(NSInteger)arg1 ;
-(id)popIconImageViewForItemAtIndex:(NSInteger)arg0 ;
-(struct _NSRange )itemCollectionController:(id)arg0 itemPageRangeForOffset:(struct CGPoint )arg1 ;
-(struct _NSRange )visibleItemRangeForItemCollectionController:(id)arg0 ;
-(void)_reloadLayout;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)itemCollectionView:(id)arg0 didConfirmItemOfferForCell:(id)arg1 ;
-(void)itemCollectionView:(id)arg0 didPerformEditActionForCell:(id)arg1 ;
-(void)loadNextPageOfArtworkWithReason:(NSInteger)arg0 ;
-(void)loadView;
-(void)removeItemsAtIndexes:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setItemCellClass:(Class)arg0 ;
-(void)unhideIcons;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif