// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDVIEWCONTROLLERHELPER_H
#define PXMEMORIESFEEDVIEWCONTROLLERHELPER_H

@class NSDate, NSString, PHPhotoLibrary;
@protocol PXSectionedDataSourceManagerObserver, PXSectionedLayoutEngineDelegate, PXMemoriesFeedScrollFilterDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXMemoriesFeedTilingLayoutDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXViewControllerEventTracker;


#import "PXObservable.h"
#import "PXSectionedLayoutEngine.h"
#import "PXSectionedObjectReference.h"
#import "PXMemoriesFeedScrollFilter.h"
#import "PXMemoriesSpec.h"
#import "PXMemoriesFeedTransitionAnimationCoordinator.h"
#import "PXMemoriesFeedTilingLayout.h"
#import "PXMemoriesFeedDataSourceManager.h"
#import "PXScrollViewController.h"
#import "PXSectionedSelectionManager.h"
#import "PXMemoriesSpecManager.h"
#import "PXTilingController.h"
#import "PXExtendedTraitCollection.h"

@interface PXMemoriesFeedViewControllerHelper : PXObservable <PXSectionedDataSourceManagerObserver, PXSectionedLayoutEngineDelegate, PXMemoriesFeedScrollFilterDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXMemoriesFeedTilingLayoutDelegate>

 {
    ? _needsToUpdate;
    ? _delegateRespondsTo;
    id *_refreshResetNotification;
    BOOL _hasAppeared;
    BOOL _hasKickedOffBatchGeneration;
}


@property (retain, nonatomic, setter=_setLastUserMemoryGenerationRequestDate:) NSDate *_lastUserMemoryGenerationRequestDate; // ivar: __lastUserMemoryGenerationRequestDate
@property (readonly, nonatomic) PXSectionedLayoutEngine *_layoutEngine; // ivar: __layoutEngine
@property (retain, nonatomic, setter=_setMemoryReferenceToScrollToVisible:) PXSectionedObjectReference *_memoryReferenceToScrollToVisible; // ivar: __memoryReferenceToScrollToVisible
@property (copy, nonatomic, setter=_setNewMemoriesRequestCompletion:) id *_newMemoriesRequestCompletion; // ivar: __newMemoriesRequestCompletion
@property (nonatomic, setter=_setRefreshRetryCount:) NSInteger _refreshRetryCount; // ivar: __refreshRetryCount
@property (nonatomic, getter=_isRequestingNewMemories, setter=_setRequestingNewMemories:) BOOL _requestingNewMemories; // ivar: __requestingNewMemories
@property (readonly, nonatomic) PXMemoriesFeedScrollFilter *_scrollFilter; // ivar: __scrollFilter
@property (retain, nonatomic, setter=_setSpec:) PXMemoriesSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) PXMemoriesFeedTransitionAnimationCoordinator *_transitionAnimationCoordinator; // ivar: __transitionAnimationCoordinator
@property (retain, nonatomic) PXSectionedObjectReference *activatedMemoryReference; // ivar: _activatedMemoryReference
@property (nonatomic, setter=_setAnchorMemoryOrigin:) CGPoint anchorMemoryOrigin; // ivar: _anchorMemoryOrigin
@property (retain, nonatomic, setter=_setAnchorMemoryReference:) PXSectionedObjectReference *anchorMemoryReference; // ivar: _anchorMemoryReference
@property (readonly, nonatomic) PXMemoriesFeedTilingLayout *currentLayout;
@property (readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXMemoriesFeedViewControllerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXViewControllerEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSectionedObjectReference *highlightedMemoryReference; // ivar: _highlightedMemoryReference
@property (retain, nonatomic) PXSectionedObjectReference *lastActionPresentationMemoryReference; // ivar: _lastActionPresentationMemoryReference
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID; // ivar: _scrollTargetMemoryUUID
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) PXMemoriesSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXMemoriesFeedTilingLayout *targetLayout;
@property (readonly, nonatomic) PXTilingController *tilingController; // ivar: _tilingController
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)_needsUpdate;
-(BOOL)canRequestNewMemories;
-(BOOL)canRequestNewMemoriesForReason:(NSUInteger)arg0 ;
-(id)_memoryReferenceInsertedOnChangeToDataSource:(id)arg0 withChangeDetails:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithScrollViewController:(id)arg0 photoLibrary:(id)arg1 traitCollection:(id)arg2 memoriesStyle:(NSUInteger)arg3 tilingControllerConfigurationBlock:(id)arg4 ;
-(id)initWithScrollViewController:(id)arg0 photoLibrary:(id)arg1 traitCollection:(id)arg2 tilingControllerConfigurationBlock:(id)arg3 ;
-(id)memoriesFeedTilingLayout:(id)arg0 titleFontNameForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)memoryInfoAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)memoryInfoForMemoryObjectReference:(id)arg0 ;
-(id)memoryInfoInScrollViewAtPoint:(struct CGPoint )arg0 ;
-(id)memoryObjectReferenceInScrollViewAtPoint:(struct CGPoint )arg0 ;
-(id)mutableChangeObject;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(id)tilingController:(id)arg0 transitionAnimationCoordinatorForChange:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(struct CGPoint )tilingController:(id)arg0 targetVisibleOriginForLayout:(id)arg1 proposedVisibleOrigin:(struct CGPoint )arg2 ;
-(struct CGRect )memoriesFeedTilingLayout:(id)arg0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath )arg1 forAspectRatio:(CGFloat)arg2 ;
-(struct PXSimpleIndexPath )indexPathForMemoryInScrollViewAtPoint:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )indexPathForMemoryObjectReference:(id)arg0 ;
-(void)_configureLayout:(id)arg0 ;
-(void)_configureMetrics:(id)arg0 ;
-(void)_enumerateInsertedItemsInChangeDetails:(id)arg0 withDataSource:(id)arg1 usingBlock:(id)arg2 ;
-(void)_handleChangeFromDataSource:(id)arg0 toDataSource:(id)arg1 withChangeDetails:(id)arg2 ;
-(void)_handleDataSourceChange;
-(void)_handleFinishedRequestingNewMemoriesWithSuccess:(BOOL)arg0 reason:(NSUInteger)arg1 error:(id)arg2 ;
-(void)_handleNewLayoutSnapshot:(id)arg0 ;
-(void)_handleRefreshCompletionWithResultInformation:(id)arg0 reason:(NSUInteger)arg1 error:(id)arg2 ;
-(void)_handleTraitCollectionChange:(NSUInteger)arg0 ;
-(void)_invalidateLayoutEngine;
-(void)_scrollToTargetMemoryUUIDWhenReady:(id)arg0 ;
-(void)_startRefreshForReason:(NSUInteger)arg0 ;
-(void)_updateHighlightedIndexPathInLayout;
-(void)_updateHighlightedIndexPathInLayout:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)_updateLayoutEngineIfNeeded;
-(void)_updateSelectedIndexPathsInLayout;
-(void)_updateSelectedIndexPathsInLayout:(id)arg0 ;
-(void)didChangeTilingControllerLayout;
-(void)feedViewControllerDidAppear:(id)arg0 shouldUpdateNotifications:(BOOL)arg1 ;
-(void)feedViewControllerDidDisappear:(id)arg0 ;
-(void)feedViewControllerWillLayoutSubviews;
-(void)invalidateMetrics;
-(void)layoutEngine:(id)arg0 willGenerateLayoutWithGenerator:(id)arg1 forSection:(NSUInteger)arg2 ;
-(void)layoutEngineDidUpdateLayoutSnapshot:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepare;
-(void)requestNewMemoriesForReason:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)requestNewMemoriesWithCompletion:(id)arg0 ;
-(void)saveAnchorMemory;
-(void)scrollFilterShouldRequestAdditionalContent:(id)arg0 ;
-(void)scrollMemoryReferenceToVisible:(id)arg0 animated:(BOOL)arg1 ;
-(void)tilingController:(id)arg0 prepareForChange:(id)arg1 ;


@end


#endif