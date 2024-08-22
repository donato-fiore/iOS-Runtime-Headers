// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMLISTTABLEVIEWCONTROLLER_H
#define SKUIITEMLISTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableIndexSet, SSVLoadURLOperation, NSString, NSOperationQueue;
@protocol SKUIItemCollectionDelegate, SKUIItemListTableDelegate;


#import "SKUIItemCollectionController.h"
#import "SKUIItemArtworkContext.h"
#import "SKUIResourceLoader.h"
#import "SKUIClientContext.h"
#import "SKUIStyledImageDataConsumer.h"
#import "SKUIItemList.h"
#import "SKUIUber.h"

@interface SKUIItemListTableViewController : UITableViewController <SKUIItemCollectionDelegate>

 {
    BOOL _delegateWantsCanRemove;
    BOOL _delegateWantsDidRemove;
    BOOL _delegateWantsWillDisplay;
    BOOL _didLoadMore;
    NSMutableIndexSet *_hiddenIconIndexSet;
    SKUIItemCollectionController *_itemCollectionController;
    SSVLoadURLOperation *_loadMoreOperation;
    BOOL _requestedLoadMore;
}


@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext; // ivar: _artworkContext
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIItemListTableDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic) CGSize imageBoundingSize; // ivar: _imageBoundingSize
@property (retain, nonatomic) SKUIItemList *itemList; // ivar: _itemList
@property (nonatomic) BOOL loadsMoreItems; // ivar: _loadsMoreItems
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) NSInteger selectionStyle; // ivar: _selectionStyle
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (retain, nonatomic) SKUIUber *uber; // ivar: _uber
@property (readonly, nonatomic) NSString *visibleMetricsImpressions;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_itemCollectionController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)itemCollectionController:(id)arg0 cellLayoutForItemIndex:(NSInteger)arg1 ;
-(id)popIconImageViewForItemAtIndex:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(struct CGRect )frameForItemAtIndex:(NSInteger)arg0 ;
-(struct _NSRange )itemCollectionController:(id)arg0 itemPageRangeForOffset:(struct CGPoint )arg1 ;
-(struct _NSRange )visibleItemRangeForItemCollectionController:(id)arg0 ;
-(void)_finishLoadMoreOperationWithItems:(id)arg0 error:(id)arg1 ;
-(void)_loadRemainingItemsWithPriority:(NSInteger)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)deleteRowsAtIndexPaths:(id)arg0 ;
-(void)itemTableView:(id)arg0 didConfirmItemOfferForTableViewCell:(id)arg1 ;
-(void)itemTableView:(id)arg0 didRemoveCell:(id)arg1 ;
-(void)loadNextPageOfArtworkWithReason:(NSInteger)arg0 ;
-(void)loadView;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setItemArtworkContext:(id)arg0 ;
-(void)setItemCellClass:(Class)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)unhideIcons;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif