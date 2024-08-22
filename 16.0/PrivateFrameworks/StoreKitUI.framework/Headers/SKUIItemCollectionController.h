// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMCOLLECTIONCONTROLLER_H
#define SKUIITEMCOLLECTIONCONTROLLER_H

@class NSMutableDictionary, UIImage, NSString, NSArray;
@protocol SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIItemCollectionDelegate;

#import <Foundation/Foundation.h>

#import "SKUIItemArtworkContext.h"
#import "SKUIResourceLoader.h"
#import "SKUIClientContext.h"
#import "SKUIStyledImageDataConsumer.h"
#import "SKUIScreenshotDataConsumer.h"

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver>

 {
    NSMutableDictionary *_itemIDsToArtworkRequestIDs;
    UIImage *_placeholderImage;
    NSMutableDictionary *_itemIDsToScreenshotRequestIDs;
    BOOL _delegateProvidesScreenshots;
    UIImage *_landscapeScreenshotPlaceholderImage;
    UIImage *_portraitScreenshotPlaceholderImage;
}


@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext; // ivar: _artworkContext
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader; // ivar: _artworkLoader
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIItemCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer; // ivar: _iconDataConsumer
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer; // ivar: _landscapeScreenshotDataConsumer
@property (nonatomic) NSInteger numberOfItemsPerPage; // ivar: _numberOfItemsPerPage
@property (nonatomic) CGFloat numberOfPagesToCacheAhead; // ivar: _numberOfPagesToCacheAhead
@property (retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer; // ivar: _portraitScreenshotDataConsumer
@property (readonly) Class superclass;


-(BOOL)_loadArtworkForItem:(id)arg0 reason:(NSInteger)arg1 ;
-(id)_iconArtworkRequestWithItem:(id)arg0 ;
-(id)_initSKUIItemCollectionController;
-(id)_placeholderImageForItem:(id)arg0 ;
-(id)_placeholderImageForScreenshot:(id)arg0 ;
-(id)_screenshotArtworkRequestWithItem:(id)arg0 ;
-(id)_screenshotForItem:(id)arg0 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 ;
-(id)performActionForItemAtIndex:(NSInteger)arg0 ;
-(struct _NSRange )_visibleItemRange;
-(void)_enumerateVisibleCellLayoutsWithBlock:(id)arg0 ;
-(void)_memoryWarningNotification:(id)arg0 ;
-(void)_reloadForItemStateChange:(id)arg0 ;
-(void)_reloadForRestrictionsChange;
-(void)_reloadScreenshotForCellLayout:(id)arg0 item:(id)arg1 isRestricted:(BOOL)arg2 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)cancelArtworkLoadForItemIndex:(NSInteger)arg0 ;
-(void)configureCellLayout:(id)arg0 forIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didEndDisplayingItemAtIndex:(NSInteger)arg0 ;
-(void)enterBackground;
-(void)enterForeground;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg0 ;
-(void)loadNextPageOfArtworkWithReason:(NSInteger)arg0 ;
-(void)precacheNextPageArtworkForOffset:(struct CGPoint )arg0 direction:(CGFloat)arg1 ;
-(void)removeAllCachedResources;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif