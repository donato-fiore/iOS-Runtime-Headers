// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICATEGORYCONTROLLER_H
#define SKUICATEGORYCONTROLLER_H

@class UIBarButtonItem, UIViewController, SSVLoadURLOperation, UIPopoverController, NSArray, NSString, NSURL, NSOperationQueue, UISegmentedControl;
@protocol SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate, SKUICategoryControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUICategoryArtworkLoader.h"
#import "SKUISegmentedControl.h"
#import "SKUICategoryTableViewController.h"
#import "SKUICategory.h"
#import "SKUIClientContext.h"

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate>

 {
    SKUICategoryArtworkLoader *_artworkLoader;
    UIBarButtonItem *_button;
    UIViewController *_contentsController;
    SSVLoadURLOperation *_loadOperation;
    UIPopoverController *_popover;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_segmentedControlSegments;
    SKUICategoryTableViewController *_tableViewController;
}


@property (retain, nonatomic) SKUICategory *category; // ivar: _rootCategory
@property (readonly, nonatomic) UIBarButtonItem *categoryButton;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *defaultURL; // ivar: _defaultURL
@property (weak, nonatomic) NSObject<SKUICategoryControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) NSInteger segmentedControlLength; // ivar: _segmentedControlLength
@property (retain, nonatomic) NSURL *selectedURL; // ivar: _selectedURL
@property (readonly) Class superclass;


-(id)_artworkLoader;
-(id)_metricsLocationsWithIndex:(NSInteger)arg0 ;
-(id)_rootMetricsLocations;
-(id)_tableViewControllerWithCategory:(id)arg0 ;
-(id)initWithContentsController:(id)arg0 ;
-(id)metricsPageContextForCategoryTableView:(id)arg0 ;
-(void)_precacheArtworkForCategory:(id)arg0 ;
-(void)_recordClickEventWithCategory:(id)arg0 index:(NSInteger)arg1 ;
-(void)_reloadSegmentedControl;
-(void)_reloadSelectedSegment;
-(void)_setResponse:(id)arg0 error:(id)arg1 ;
-(void)buttonAction:(id)arg0 ;
-(void)categoryTableView:(id)arg0 didSelectCategory:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)loadFromURL:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)segmentedControlAction:(id)arg0 ;


@end


#endif