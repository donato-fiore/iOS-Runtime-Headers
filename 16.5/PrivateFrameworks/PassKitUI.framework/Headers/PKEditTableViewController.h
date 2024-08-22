// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEDITTABLEVIEWCONTROLLER_H
#define PKEDITTABLEVIEWCONTROLLER_H

@class UITableViewController, UITableView, NSCache, NSMutableArray, NSMutableDictionary, NSString, PKGroupsController, NSDictionary;
@protocol UITableViewDataSourcePrefetching, PKEditTableNoPassesViewDelegate, PKEditPassesPerformanceTestResponder, OS_dispatch_queue, PKEditTableViewControllerCachingDelegate;


#import "PKEditTableNoPassesView.h"
#import "PKEditPendingCacheRequest.h"

@interface PKEditTableViewController : UITableViewController <UITableViewDataSourcePrefetching, PKEditTableNoPassesViewDelegate, PKEditPassesPerformanceTestResponder>

 {
    PKEditTableNoPassesView *_noPassesView;
    BOOL _shouldShowNoPassesView;
    UITableView *_tableView;
    BOOL _scrollingUp;
    CGSize _imageSizeNeeded;
    BOOL _needsFullPass;
    BOOL _isAccessibilityCategory;
    NSCache *_imageCache;
    NSUInteger _imagesToKeep;
    NSObject<OS_dispatch_queue> *_queueCaching;
    NSObject<OS_dispatch_queue> *_queuePlaceholder;
    PKEditPendingCacheRequest *_currentCacheRequest;
    BOOL _shouldProcessHighPriorityRequests;
    NSMutableArray *_highPriorityRequests;
    BOOL _shouldProcessLowPriorityRequests;
    NSMutableArray *_lowPriorityRequests;
    NSUInteger _visibleRows;
    NSMutableDictionary *_placeholdersPerPassStyle;
    CGFloat _snapshotDurationAverage;
    NSMutableArray *_lastSnapshotDurations;
    CGFloat _lastYOffset;
    CGFloat _lastYOffsetTime;
    BOOL _scrollingFast;
    BOOL _dragging;
    BOOL _isForWatch;
}


@property (weak, nonatomic) NSObject<PKEditTableViewControllerCachingDelegate> *cachingDelegate; // ivar: _cachingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKGroupsController *existingGroupsController; // ivar: _existingGroupsController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger performanceTest; // ivar: _performanceTest
@property (retain, nonatomic) NSString *performanceTestName; // ivar: _performanceTestName
@property (retain, nonatomic) NSDictionary *placeholders;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger testIteration; // ivar: _testIteration


+(id)_generatePlaceholderImageForStyle:(NSInteger)arg0 ;
+(void)loadPlaceholdersWithCompletion:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_imagesToKeepOutsideVisibleCells;
-(NSUInteger)visibleRowsCount;
-(id)_createImageForPass:(id)arg0 imageSize:(struct CGSize )arg1 cacheKey:(id)arg2 fullPass:(BOOL)arg3 stacked:(BOOL)arg4 ;
-(id)_createPassStackWithPassImage:(id)arg0 withHeight:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 placeholders:(id)arg1 isForWatch:(BOOL)arg2 ;
-(id)mostRecentPassInGroup:(id)arg0 ;
-(id)tableView:(id)arg0 cellWithIdentifier:(id)arg1 ;
// -(void)_imageOfSize:(struct CGSize )arg0 forPass:(id)arg1 fullPass:(BOOL)arg2 stacked:(BOOL)arg3 synchronously:(BOOL)arg4 preemptive:(BOOL)arg5 placeholder:(id)arg6 completion:(unk)arg7  ;
-(void)_placeholderImageForStyle:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_setShouldProcessLowPriorityRequests:(BOOL)arg0 ;
-(void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(BOOL)arg0 ;
-(void)beginPassDeletionTestWithTestName:(id)arg0 ;
-(void)beginPassSelectionTestWithTestName:(id)arg0 ;
-(void)beginScrollingTestWithTestName:(id)arg0 ;
-(void)clearImageCacheForPass:(id)arg0 ;
-(void)currentCacheRequestCompletedWithImage:(id)arg0 duration:(CGFloat)arg1 ;
-(void)failedTestWithReason:(id)arg0 ;
-(void)findApps;
// -(void)imageForPass:(id)arg0 stacked:(BOOL)arg1 synchronously:(BOOL)arg2 placeholder:(id)arg3 completion:(unk)arg4  ;
-(void)loadContentAndImageSetFromExistingPassForPass:(id)arg0 ;
-(void)moveHighPriorityToLowPriorityWithCacheKey:(id)arg0 ;
-(void)noPassesViewFindAppsForWalletTapped:(id)arg0 ;
-(void)noPassesViewScanCodeButtonTapped:(id)arg0 ;
-(void)passedTest;
-(void)preemptivelyCacheImagesForPass:(id)arg0 stacked:(BOOL)arg1 ;
-(void)processCacheRequest:(id)arg0 ;
-(void)removeRequestsWithCacheKey:(id)arg0 ;
-(void)resumeRequestIfNoScrollingAfterTimeInterval:(CGFloat)arg0 ;
-(void)scanCode;
-(void)scrollToFirstRowOrFailTest;
-(void)scrollToLastRowOrFailTest;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectFirstRowOrFailTest;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showNoPassesView:(BOOL)arg0 ;
-(void)startedTestWithName:(id)arg0 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 prefetchRowsAtIndexPaths:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)triageCacheRequest:(id)arg0 ;
-(void)updateAverageSnapshotDuration:(CGFloat)arg0 ;
-(void)viewDidLoad;


@end


#endif