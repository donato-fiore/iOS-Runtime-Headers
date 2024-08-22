// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISWOOSHARRAYVIEWCONTROLLER_H
#define SKUISWOOSHARRAYVIEWCONTROLLER_H

@class UIViewController, SSVPlatformRequestOperation, UIScrollView, NSMutableArray, NSString, NSOperationQueue, NSArray;
@protocol SKUIMetricsViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;


#import "SKUIResourceLoader.h"
#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIMetricsController.h"

@interface SKUISwooshArrayViewController : UIViewController <SKUIMetricsViewController, SKUISwooshViewControllerDelegate, UIScrollViewDelegate, SKUIProductPageChildViewController>

 {
    SKUIResourceLoader *_artworkLoader;
    SSVPlatformRequestOperation *_platformOperation;
    UIScrollView *_scrollView;
    NSMutableArray *_swooshArtworkLoaders;
    NSMutableArray *_viewControllers;
}


@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController; // ivar: _headerViewController
@property (retain, nonatomic) SKUIMetricsController *metricsController; // ivar: _metricsController
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *swooshComponents; // ivar: _swooshComponents


-(BOOL)isSkLoaded;
-(id)_artworkLoader;
-(id)_clickEventForSeeAllForViewController:(id)arg0 ;
-(id)_clickEventWithItem:(id)arg0 ;
-(id)activeMetricsController;
-(id)initWithSwooshComponents:(id)arg0 ;
-(id)swoosh:(id)arg0 imageForCellAtIndex:(NSInteger)arg1 ;
-(void)_addHeaderView;
-(void)_addMissingItemsWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_layoutSwooshViews;
-(void)_loadMissingItemsIfNecessary;
-(void)_reloadChildViewControllers;
-(void)dealloc;
-(void)loadMissingItemData;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)swoosh:(id)arg0 didSelectCellAtIndex:(NSInteger)arg1 ;
-(void)swooshDidSelectSeeAll:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif