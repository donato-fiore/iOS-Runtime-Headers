// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISCREENSHOTSVIEWCONTROLLER_H
#define SKUISCREENSHOTSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSArray, NSMutableArray, NSString, NSOperationQueue;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SKUIScreenshotsDelegate;


#import "SKUIScreenshotDataConsumer.h"
#import "SKUIVideoImageDataConsumer.h"
#import "SKUIClientContext.h"

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

 {
    UICollectionView *_collectionView;
    SKUIScreenshotDataConsumer *_dataConsumer;
    NSArray *_screenshots;
    NSMutableArray *_screenshotImages;
    NSMutableArray *_screenshotRawImages;
    CGSize _screenshotMaxSize;
    SKUIVideoImageDataConsumer *_trailerConsumer;
    NSArray *_trailers;
    NSMutableArray *_trailerImages;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIScreenshotsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsInSlideshowViewController:(id)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithTrailers:(id)arg0 screenshots:(id)arg1 clientContext:(id)arg2 ;
-(id)slideshowViewController:(id)arg0 dataConsumerAtIndex:(NSInteger)arg1 ;
-(id)slideshowViewController:(id)arg0 imageURLAtIndex:(NSInteger)arg1 ;
-(id)slideshowViewController:(id)arg0 placeholderImageAtIndex:(NSInteger)arg1 ;
-(id)slideshowViewController:(id)arg0 poppedImageViewAtIndex:(NSInteger)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_setImage:(id)arg0 forIndex:(NSInteger)arg1 ;
-(void)_setTrailerImage:(id)arg0 forIndex:(NSInteger)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)slideshowViewController:(id)arg0 scrollToImageAtIndex:(NSInteger)arg1 ;


@end


#endif