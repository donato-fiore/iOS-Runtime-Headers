// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXPIREDTABLEVIEWCONTROLLER_H
#define PKEXPIREDTABLEVIEWCONTROLLER_H

@class UITableViewController, UITableView, NSCache, NSMutableArray, NSMutableDictionary, UILabel, NSString, PKGroupsController, NSDictionary;
@protocol UITableViewDataSourcePrefetching, OS_dispatch_queue, PKExpiredTableViewControllerCachingDelegate;


#import "PKExpiredPendingCacheRequest.h"

@interface PKExpiredTableViewController : UITableViewController <UITableViewDataSourcePrefetching>

 {
    UITableView *_tableView;
    BOOL _scrollingUp;
    CGSize _imageSizeNeeded;
    BOOL _needsFullPass;
    BOOL _isAccessibilityCategory;
    NSCache *_imageCache;
    NSUInteger _imagesToKeep;
    NSObject<OS_dispatch_queue> *_queueCaching;
    NSObject<OS_dispatch_queue> *_queuePlaceholder;
    PKExpiredPendingCacheRequest *_currentCacheRequest;
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
    NSInteger _currentEditingStyle;
    UILabel *_selectedPassesLabel;
    NSInteger _selectedPassesCount;
}


@property (weak, nonatomic) NSObject<PKExpiredTableViewControllerCachingDelegate> *cachingDelegate; // ivar: _cachingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKGroupsController *existingGroupsController; // ivar: _existingGroupsController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *placeholders;
@property (readonly) Class superclass;


+(id)_generatePlaceholderImageForStyle:(NSInteger)arg0 ;
+(void)loadPlaceholdersWithCompletion:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_imagesToKeepOutsideVisibleCells;
-(NSUInteger)visibleRowsCount;
-(id)_createImageForPass:(id)arg0 imageSize:(struct CGSize )arg1 cacheKey:(id)arg2 fullPass:(BOOL)arg3 ;
-(id)_selectedExpiredPassesString;
-(id)initWithStyle:(NSInteger)arg0 placeholders:(id)arg1 ;
-(id)mostRecentPass;
-(id)tableView:(id)arg0 cellWithIdentifier:(id)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_applyDeletionOrRecovery;
-(void)_deletePassPressed;
// -(void)_imageOfSize:(struct CGSize )arg0 forPass:(id)arg1 fullPass:(BOOL)arg2 synchronously:(BOOL)arg3 preemptive:(BOOL)arg4 placeholder:(id)arg5 completion:(unk)arg6  ;
-(void)_placeholderImageForStyle:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_recoverPassPressed;
-(void)_setShouldProcessLowPriorityRequests:(BOOL)arg0 ;
-(void)_updateSelectedPassesText;
-(void)_updateShouldProcessHighPriorityRequestsWithFastScrolling:(BOOL)arg0 ;
-(void)clearImageCacheForPass:(id)arg0 ;
-(void)currentCacheRequestCompletedWithImage:(id)arg0 duration:(CGFloat)arg1 ;
// -(void)imageForPass:(id)arg0 synchronously:(BOOL)arg1 placeholder:(id)arg2 completion:(unk)arg3  ;
-(void)loadContentAndImageSetFromExistingPassForPass:(id)arg0 ;
-(void)moveHighPriorityToLowPriorityWithCacheKey:(id)arg0 ;
-(void)preemptivelyCacheImagesForPass:(id)arg0 ;
-(void)processCacheRequest:(id)arg0 ;
-(void)removeRequestsWithCacheKey:(id)arg0 ;
-(void)resumeRequestIfNoScrollingAfterTimeInterval:(CGFloat)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 prefetchRowsAtIndexPaths:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidUpdateSelection:(id)arg0 ;
-(void)triageCacheRequest:(id)arg0 ;
-(void)updateAverageSnapshotDuration:(CGFloat)arg0 ;
-(void)viewDidLoad;


@end


#endif