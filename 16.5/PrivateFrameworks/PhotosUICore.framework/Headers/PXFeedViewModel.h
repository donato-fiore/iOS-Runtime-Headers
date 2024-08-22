// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDVIEWMODEL_H
#define PXFEEDVIEWMODEL_H

@class NSHashTable, NSString;
@protocol PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXFeedItemLayoutFactory, PXFeedPlaceholderFactory, PXAnonymousViewController, PXFeedViewLayoutSpec, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedChangeDetailsRepository.h"
#import "PXSectionedDataSourceManager.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"
#import "PXFeedViewLayoutSpecManager.h"
#import "PXUpdater.h"

@interface PXFeedViewModel : PXObservable <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders; // ivar: _accessoryTapToRadarDiagnosticsProviders
@property (readonly, weak, nonatomic) NSObject<PXFeedViewActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, weak, nonatomic) NSObject<PXAssetCollectionActionPerformerDelegate> *assetCollectionActionPerformerDelegate; // ivar: _assetCollectionActionPerformerDelegate
@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory; // ivar: _dataSourceChangeHistory
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) NSObject<PXFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (readonly, nonatomic) NSObject<PXFeedPlaceholderFactory> *placeholderFactory; // ivar: _placeholderFactory
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly, nonatomic) NSObject<PXFeedViewLayoutSpec> *spec; // ivar: _spec
@property (readonly, nonatomic) PXFeedViewLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, copy, nonatomic) id *visibleRectChangeObserver; // ivar: _visibleRectChangeObserver
@property (readonly, nonatomic) BOOL wantsEmbeddedScrollView; // ivar: _wantsEmbeddedScrollView


-(id)init;
-(id)initWithDataSourceManager:(id)arg0 specManager:(id)arg1 itemLayoutFactory:(id)arg2 placeholderFactory:(id)arg3 wantsEmbeddedScrollView:(BOOL)arg4 visibleRectChangeObserver:(id)arg5 ;
-(id)initWithFeedViewConfiguration:(id)arg0 ;
-(void)_invalidateDataSource;
-(void)_invalidateSelectionSnapshot;
-(void)_invalidateSpec;
-(void)_setNeedsUpdate;
-(void)_updateDataSource;
-(void)_updateSelectionSnapshot;
-(void)_updateSpec;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)registerAccessoryTapToRadarDiagnosticsProvider:(id)arg0 ;


@end


#endif