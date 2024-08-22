// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYRESOURCESPRELOADER_H
#define PXSTORYRESOURCESPRELOADER_H

@class NSError, NSMutableArray, NSString, NSCountedSet, NSMutableIndexSet, NSArray, NSIndexSet, NSOperationQueue;
@protocol PXStoryMutableResourcesPreloader, PXStoryQueueParticipant, PXStoryTimeline, OS_dispatch_queue, OS_os_log;


#import "PXObservable.h"
#import "PXStoryResourcesPreloadingRequest.h"
#import "PXStoryResourcesPreloadingStatsStore.h"
#import "PXStoryLoadingStatusReporter.h"
#import "PXMediaProvider.h"
#import "PXUpdater.h"
#import "PXVideoSessionManager.h"

@interface PXStoryResourcesPreloader : PXObservable <PXStoryMutableResourcesPreloader, PXStoryQueueParticipant>

 {
    BOOL _stateQueue_isLoadingLikelyToKeepUpWithPlaybackWasSet;
    BOOL _stateQueue_isLoadingLikelyToKeepUpWithPlayback;
    NSInteger _stateQueue_lagsCount;
    float _stateQueue_loadingFractionComplete;
    NSError *_stateQueue_error;
    ? _stateQueue_currentPlaybackTime;
    NSInteger _stateQueue_currentSegmentIdentifier;
    PXStoryResourcesPreloadingRequest *_stateQueue_currentRequest;
    PXStoryResourcesPreloadingRequest *_stateQueue_previousRequest;
    NSMutableArray *_stateQueue_loadedTimeRanges;
    ? _stateQueue_loadedContinuousTimeRange;
    NSString *_stateQueue_estimationDiagnostics;
    NSCountedSet *_stateQueue_loadingSegments;
    NSMutableIndexSet *_stateQueue_loadedSegments;
    BOOL _estimationQueue_sessionStarted;
    id<PXStoryTimeline> *_estimationQueue_currentSessionTimeline;
    NSArray *_estimationQueue_loadingSegments;
    NSIndexSet *_estimationQueue_loadedSegments;
    NSMutableIndexSet *_estimationQueue_segmentsToLoad;
    PXStoryResourcesPreloadingStatsStore *_estimationQueue_statsStore;
    NSUInteger _estimationQueue_loadingStartTime;
}


@property (nonatomic) ? currentPlaybackTime;
@property (readonly, nonatomic) PXStoryResourcesPreloadingRequest *currentRequest;
@property (nonatomic) NSInteger currentSegmentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *estimationQueue; // ivar: _estimationQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat isExporting; // ivar: _isExporting
@property (readonly, nonatomic) BOOL isLoadingLikelyToKeepUpWithPlayback;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) float loadingFractionComplete;
@property (readonly, nonatomic) NSOperationQueue *loadingOperationQueue; // ivar: _loadingOperationQueue
@property (readonly, nonatomic) PXStoryLoadingStatusReporter *loadingStatusReporter; // ivar: _loadingStatusReporter
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property NSUInteger logContext; // ivar: _logContext
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timelineReadingQueue; // ivar: _timelineReadingQueue
@property (retain, nonatomic) NSMutableIndexSet *timelineReadingQueue_loadedSegments; // ivar: _timelineReadingQueue_loadedSegments
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // ivar: _videoSessionManager


-(BOOL)_isClipPreloadable:(struct ? )arg0 ;
-(BOOL)_isImagePreloadingNeededForClipInfo:(struct ? )arg0 ;
-(BOOL)_isVideoPreloadingNeededForClipInfo:(struct ? )arg0 ;
-(NSInteger)lagsCount;
-(id)init;
-(id)initWithMediaProvider:(id)arg0 screenScale:(CGFloat)arg1 videoSessionManager:(id)arg2 loadingStatusReporter:(id)arg3 storyQueue:(id)arg4 isExporting:(BOOL)arg5 ;
-(id)previousRequest;
-(void)_accumulateLoadedTimeRange:(struct ? )arg0 moreExpected:(BOOL)arg1 ;
-(void)_estimationNoteClipWithPlaybackStyle:(NSInteger)arg0 loadedWithLoadingTime:(CGFloat)arg1 ;
-(void)_estimationNoteLoadingSegments:(id)arg0 loadedSegments:(id)arg1 ;
-(void)_estimationNoteSessionStartedWithSegmentsToLoad:(id)arg0 preloadableClipsCounts:(struct ? )arg1 inTimeline:(id)arg2 ;
-(void)_invalidateEstimation;
-(void)_invalidateProcessing;
-(void)_noteLoadingEndedForClip:(struct ? )arg0 inSegment:(NSInteger)arg1 resourceType:(id)arg2 resourceIdentifier:(id)arg3 timeRange:(struct ? )arg4 error:(id)arg5 loadingTime:(CGFloat)arg6 playbackStyle:(NSInteger)arg7 ;
-(void)_noteLoadingStartedForClipInSegment:(NSInteger)arg0 ;
-(void)_noteSessionStartedWithLoadedSegments:(id)arg0 segmentsToLoad:(id)arg1 preloadableClipsCounts:(struct ? )arg2 inTimeline:(id)arg3 ;
-(void)_performChangesOnStoryQueue:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_stateQueue_accumulateLoadedTimeRange:(struct ? )arg0 moreExpected:(BOOL)arg1 ;
-(void)_timelineReadingQueue_loadResourcesForClipsInSegment:(NSInteger)arg0 request:(id)arg1 clipLoadingGroup:(id)arg2 ;
-(void)_timelineReadingQueue_processRequest:(id)arg0 previousRequest:(id)arg1 ;
-(void)_timelineReadingQueue_sessionStartedWithAlreadyLoadedSegments:(id)arg0 segmentsToLoad:(id)arg1 preloadableClipsCounts:(struct ? )arg2 request:(id)arg3 ;
-(void)_updateEstimation;
-(void)_updateProcessing;
-(void)cancelProcessingAllRequests;
-(void)dealloc;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)startProcessingRequest:(id)arg0 ;


@end


#endif