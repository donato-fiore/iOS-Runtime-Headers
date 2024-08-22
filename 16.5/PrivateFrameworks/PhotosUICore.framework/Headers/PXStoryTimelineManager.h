// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTIMELINEMANAGER_H
#define PXSTORYTIMELINEMANAGER_H

@class NSMutableArray, NSString, NSIndexSet, NSProgress;
@protocol PXStoryDiagnosticHUDContentProvider, PXStoryMutableTimelineManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider, PXStoryErrorReporter, PXStoryLoadingCoordinator, OS_dispatch_queue, PXStoryTimeline, PXStoryTimelineProducer;


#import "PXObservable.h"
#import "PXStoryResourcesDataSourceManager.h"
#import "PXStoryTimelineSpecManager.h"
#import "PXStoryStyleManager.h"
#import "PXStoryProducerResult.h"
#import "PXUpdater.h"

@interface PXStoryTimelineManager : PXObservable <PXStoryDiagnosticHUDContentProvider, PXStoryMutableTimelineManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

 {
    BOOL _isUpdatingTimeline;
    NSInteger _paperTrailLength;
    NSMutableArray *_targetTimelineResultsPaperTrail;
    NSMutableArray *_timelinesPaperTrail;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTargetTimelineFinal; // ivar: _isTargetTimelineFinal
@property (readonly, nonatomic) BOOL isTimelineFinal; // ivar: _isTimelineFinal
@property (readonly, nonatomic) NSObject<PXStoryLoadingCoordinator> *loadingCoordinator; // ivar: _loadingCoordinator
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger paperTrailOptions; // ivar: _paperTrailOptions
@property (retain, nonatomic) NSIndexSet *pendingVisibleSegmentIdentifiers; // ivar: _pendingVisibleSegmentIdentifiers
@property (readonly, nonatomic) BOOL requiresUpdatedTargetTimelineImmediately;
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // ivar: _resourcesDataSourceManager
@property (readonly, nonatomic) PXStoryTimelineSpecManager *specManager; // ivar: _specManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly, nonatomic) PXStoryStyleManager *styleManager; // ivar: _styleManager
@property (readonly) Class superclass;
@property (retain, nonatomic) NSProgress *targetTimelineProgress; // ivar: _targetTimelineProgress
@property (retain, nonatomic) PXStoryProducerResult *targetTimelineResult; // ivar: _targetTimelineResult
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (readonly, nonatomic) NSUInteger timelineAttributes; // ivar: _timelineAttributes
@property (readonly, nonatomic) NSObject<PXStoryTimelineProducer> *timelineProducer; // ivar: _timelineProducer
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, copy, nonatomic) NSIndexSet *visibleSegmentIdentifiers; // ivar: _visibleSegmentIdentifiers


+(id)timelineManagerWithTimelineProducer:(id)arg0 resourcesDataSourceManager:(id)arg1 styleManager:(id)arg2 specManager:(id)arg3 configuration:(id)arg4 loadingCoordinator:(id)arg5 paperTrailOptions:(NSUInteger)arg6 ;
-(id)_diagnosticMovementTextForClipInfo:(struct ? )arg0 segmentClipCount:(int)arg1 autoEditClip:(id)arg2 ;
-(id)_diagnosticStyleTextForClipInfo:(struct ? )arg0 segmentClipCount:(int)arg1 autoEditClip:(id)arg2 ;
-(id)_diagnosticTextForSegmentIdentifier:(NSInteger)arg0 segmentTimeRange:(struct ? )arg1 HUDType:(NSInteger)arg2 decisionList:(id)arg3 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithTimelineProducer:(id)arg0 resourcesDataSourceManager:(id)arg1 styleManager:(id)arg2 specManager:(id)arg3 loadingCoordinator:(id)arg4 errorReporter:(id)arg5 options:(NSUInteger)arg6 paperTrailOptions:(NSUInteger)arg7 ;
-(struct _NSRange )_rangeOfVisibleDisplayAssetsInResourcesDataSource:(id)arg0 ;
-(void)_applyPendingVisibleSegmentIdentifiers;
-(void)_handleUpdatedTargetTimelineResult:(id)arg0 ;
-(void)_invalidatePendingVisibleSegmentIdentifiers;
-(void)_invalidateTargetTimeline;
-(void)_invalidateTimeline;
-(void)_invalidateTimelineAttributes;
-(void)_setNeedsUpdate;
-(void)_updatePendingVisibleSegmentIdentifiers;
-(void)_updateTargetTimeline;
-(void)_updateTimeline;
-(void)_updateTimelineAttributes;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif