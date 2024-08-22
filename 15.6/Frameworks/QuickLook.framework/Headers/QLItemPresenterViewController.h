// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLITEMPRESENTERVIEWCONTROLLER_H
#define QLITEMPRESENTERVIEWCONTROLLER_H

@class NSString, DMFApplicationPolicyMonitor, DMFCategoryPolicyMonitor;
@protocol QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate, OS_dispatch_queue, QLItemPresenterViewControllerDelegate;


#import "QLItemAggregatedViewController.h"
#import "QLPreviewContext.h"
#import "QLDownloadingItemViewController.h"
#import "QLErrorItemViewController.h"
#import "QLItemPresenterViewController.h"
#import "QLLoadingItemViewController.h"
#import "QLItem.h"
#import "QLItemViewController.h"
#import "QLScreenTimeItemViewController.h"

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate>

 {
    BOOL _shouldDeferAppearanceUpdates;
    BOOL _isPeekingSession;
    BOOL _failureOccurred;
    BOOL _isReadyForDisplay;
    BOOL _shouldHandleLoadingView;
    id *_readyBlock;
    NSObject<OS_dispatch_queue> *previewLoadingQueue;
}


@property (retain) id *contents; // ivar: _contents
@property (retain) QLPreviewContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLItemPresenterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) QLDownloadingItemViewController *downloadingController; // ivar: _downloadingController
@property (retain, nonatomic) QLErrorItemViewController *errorViewController; // ivar: _errorViewController
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier; // ivar: _hostApplicationBundleIdentifier
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;
@property (copy, nonatomic) id *loadingCompletionHandler; // ivar: _loadingCompletionHandler
@property (retain, nonatomic) QLLoadingItemViewController *loadingViewController; // ivar: _loadingViewController
@property (copy, nonatomic) NSString *parentApplicationDisplayIdentifier; // ivar: _parentApplicationDisplayIdentifier
@property (retain, nonatomic) QLItem *previewItem; // ivar: _previewItem
@property (retain, nonatomic) QLItemViewController *previewProvider; // ivar: _previewProvider
@property (nonatomic) BOOL printing; // ivar: _printing
@property (retain, nonatomic) DMFApplicationPolicyMonitor *screenTimeApplicationMonitor; // ivar: _screenTimeApplicationMonitor
@property (retain, nonatomic) DMFCategoryPolicyMonitor *screenTimeCategoryMonitor; // ivar: _screenTimeCategoryMonitor
@property (retain, nonatomic) QLScreenTimeItemViewController *screenTimeController; // ivar: _screenTimeController
@property (readonly) Class superclass;


-(BOOL)_currentPreviewControllerIsErrorViewController;
-(BOOL)_processIsEntitledToCheckScreenTimePolicy;
-(BOOL)_processIsEntitledToConfigureScreenTime;
-(BOOL)_shouldApplyScreenTimeMoviePolicyForItem:(id)arg0 ;
-(BOOL)canAnimateFromDetailViewToFullScreenPreview;
-(BOOL)downloadingItemViewControllerShouldForceAutodownloadFile:(id)arg0 ;
-(BOOL)isLoaded;
-(BOOL)isLoading;
-(BOOL)loadingFailed;
-(id)additionalItemViewControllerDescription;
-(id)init;
-(id)initForPrinting:(BOOL)arg0 ;
-(id)initWithHostApplicationBundleIdentifier:(id)arg0 parentApplicationDisplayIdentifier:(id)arg1 ;
-(id)screenTimePolicyBundleIdentifier;
-(struct CGSize )preferredContentSize;
-(void)_cancelAllDeferredApperanceUpdates;
-(void)_didReceiveNewScreenTimeApplicationPolicies:(id)arg0 error:(id)arg1 ;
-(void)_didReceiveNewScreenTimeCategoryPolicy:(id)arg0 error:(id)arg1 ;
-(void)_didReceiveNewScreenTimePolicy:(NSInteger)arg0 ;
-(void)_hideScreenTimeViewControllerIfNeeded;
-(void)_performLoadingCompletionHandlerWithError:(id)arg0 ;
-(void)_performReadyBlockIfNedded;
-(void)_queryScreenTimeCategoryPolicy;
-(void)_queryScreenTimePolicyForBundleIdentifier:(id)arg0 ;
-(void)_setupScreenTimeApplicationHandling;
-(void)_setupScreenTimeCategoryHandling;
-(void)_setupScreenTimeHandling;
-(void)_showLoadingViewControllerDeferredIfNeeded;
-(void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)arg0 ;
-(void)_showScreenTimeViewControllerWithPolicy:(NSInteger)arg0 ;
-(void)_startLoadingPreviewWithContents:(id)arg0 ;
-(void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg0 withContents:(id)arg1 ;
-(void)isReadyForDisplayWithCompletionHandler:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewItemViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)showErrorViewController;
-(void)showPreviewProviderViewController;
-(void)showPreviewViewController:(id)arg0 ;
-(void)showPreviewViewController:(id)arg0 animatingWithCrossfade:(BOOL)arg1 ;
-(void)showPreviewViewController:(id)arg0 animatingWithCrossfade:(BOOL)arg1 updatingIsReadyForDisplay:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)transitionWillFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;


@end


#endif