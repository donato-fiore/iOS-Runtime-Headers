// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGETABLELOCKUPSSECTION_H
#define SKUIPRODUCTPAGETABLELOCKUPSSECTION_H

@class NSMapTable, NSArray, UIImage, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIMissingItemDelegate;


#import "SKUIProductPageTableSection.h"
#import "SKUIProductPageTableSeparatorView.h"
#import "SKUIProductPageTableHeaderView.h"
#import "SKUIMissingItemLoader.h"
#import "SKUIStyledImageDataConsumer.h"
#import "SKUIResourceLoader.h"

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate>

 {
    NSMapTable *_artworkRequests;
    SKUIProductPageTableSeparatorView *_footerView;
    SKUIProductPageTableHeaderView *_headerView;
    NSArray *_lockups;
    SKUIMissingItemLoader *_missingItemLoader;
    UIImage *_placeholderImage;
    SKUIStyledImageDataConsumer *_productImageDataConsumer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly) Class superclass;


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)_missingItemLoader;
-(id)_productImageForItem:(id)arg0 ;
-(id)footerViewForTableView:(id)arg0 ;
-(id)headerViewForTableView:(id)arg0 ;
-(id)initWithLockups:(id)arg0 title:(id)arg1 ;
-(id)selectionActionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)missingItemLoader:(id)arg0 didLoadItems:(id)arg1 invalidItemIdentifiers:(id)arg2 ;


@end


#endif