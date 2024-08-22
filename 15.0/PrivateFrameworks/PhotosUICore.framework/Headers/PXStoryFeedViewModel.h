// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDVIEWMODEL_H
#define PXSTORYFEEDVIEWMODEL_H

@class NSHashTable, NSString;
@protocol PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXStoryFeedViewActionPerformer, PXAssetCollectionActionPerformerDelegate, PXStoryFeedItemLayoutFactory, PXAnonymousViewController, PXStoryFeedViewLayoutSpec, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedChangeDetailsRepository.h"
#import "PXSectionedDataSourceManager.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"
#import "PXStoryFeedViewLayoutSpecManager.h"
#import "PXUpdater.h"

@interface PXStoryFeedViewModel : PXObservable <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders; // ivar: _accessoryTapToRadarDiagnosticsProviders
@property (readonly, weak, nonatomic) NSObject<PXStoryFeedViewActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, weak, nonatomic) NSObject<PXAssetCollectionActionPerformerDelegate> *assetCollectionActionPerformerDelegate; // ivar: _assetCollectionActionPerformerDelegate
@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory; // ivar: _dataSourceChangeHistory
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) NSObject<PXStoryFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly, nonatomic) NSObject<PXStoryFeedViewLayoutSpec> *spec; // ivar: _spec
@property (readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)init;
-(id)initWithDataSourceManager:(id)arg0 specManager:(id)arg1 itemLayoutFactory:(id)arg2 ;
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