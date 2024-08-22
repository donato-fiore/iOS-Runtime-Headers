// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREPAGEVIEWCONTROLLER_H
#define SKUISTOREPAGEVIEWCONTROLLER_H

@class UIViewController, NSString, SSMetricsPageEvent, NSURLRequest, SSVLoadURLOperation, NSDictionary, NSOperationQueue, UIRefreshControl;
@protocol SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration, SKUIStorePageDelegate;


#import "SKUIMetricsController.h"
#import "SKUIColorScheme.h"
#import "SKUIStorePageSectionsViewController.h"
#import "SKUIClientContext.h"
#import "SKUIStorePage.h"

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration>

 {
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    BOOL _loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    SKUIStorePageSectionsViewController *_sectionsViewController;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIStorePageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) UIRefreshControl *refreshControl; // ivar: _refreshControl
@property (readonly, nonatomic, getter=isSkLoading) BOOL skLoading;
@property (copy, nonatomic) SKUIStorePage *storePage; // ivar: _storePage
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)performTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)sectionsViewController:(id)arg0 showProductPageForItem:(id)arg1 ;
-(BOOL)sectionsViewController:(id)arg0 showStorePageForURL:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_colorScheme;
-(id)_sectionsViewController;
-(id)activeMetricsController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_loadWithOperation:(id)arg0 completionBlock:(id)arg1 ;
-(void)_metricsEnterEventNotification:(id)arg0 ;
-(void)_recordMetricsPageEvent:(id)arg0 forStorePage:(id)arg1 ;
-(void)_reloadStorePage;
-(void)_runPerformanceTestAfterIdle;
-(void)_runPerformanceTestAfterPageLoad;
-(void)_runScrollTestWithName:(id)arg0 options:(id)arg1 ;
-(void)_setMetricsController:(id)arg0 ;
-(void)_showProductPage:(id)arg0 withPageEvent:(id)arg1 ;
-(void)cancelPageLoad;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)loadURL:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)loadURL:(id)arg0 withDataConsumer:(id)arg1 completionBlock:(id)arg2 ;
-(void)loadURLRequest:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)loadURLRequest:(id)arg0 withDataConsumer:(id)arg1 completionBlock:(id)arg2 ;
-(void)loadView;
-(void)loadWithJSONData:(id)arg0 fromOperation:(id)arg1 completionBlock:(id)arg2 ;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg0 ;
-(void)setMetricsController:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif