// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAGGREGATEDICTIONARYBROWSINGVIEWMODELTRACER_H
#define PUAGGREGATEDICTIONARYBROWSINGVIEWMODELTRACER_H

@class NSHashTable, NSString;
@protocol PUBrowsingViewModelChangeObserver, PUDisplayAsset;

#import <Foundation/Foundation.h>

#import "PUBrowsingViewModel.h"

@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject <PUBrowsingViewModelChangeObserver>



@property (nonatomic, setter=_setDidScheduleCurrentAssetChange:) BOOL _didScheduleCurrentAssetChange; // ivar: __didScheduleCurrentAssetChange
@property (nonatomic, setter=_setDidScheduleViewUpdate:) BOOL _didScheduleViewUpdate; // ivar: __didScheduleViewUpdate
@property (nonatomic, setter=_setApplicationActive:) BOOL _isApplicationActive; // ivar: __isApplicationActive
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (nonatomic, setter=_setPerformingUpdate:) BOOL _isPerformingUpdate; // ivar: __isPerformingUpdate
@property (nonatomic, setter=_setPlayingStreamedVideo:) BOOL _isPlayingStreamedVideo; // ivar: __isPlayingStreamedVideo
@property (nonatomic, setter=_setPlayingVideo:) BOOL _isPlayingVideo; // ivar: __isPlayingVideo
@property (nonatomic, setter=_setStreamedVideoActuallyPlaying:) BOOL _isStreamedVideoActuallyPlaying; // ivar: __isStreamedVideoActuallyPlaying
@property (nonatomic, setter=_setStreamedVideoStalled:) BOOL _isStreamedVideoStalled; // ivar: __isStreamedVideoStalled
@property (nonatomic, setter=_setNeedsUpdateOneUpSessionActive:) BOOL _needsUpdateOneUpSessionActive; // ivar: __needsUpdateOneUpSessionActive
@property (nonatomic, setter=_setNeedsUpdatePlayingVideo:) BOOL _needsUpdatePlayingVideo; // ivar: __needsUpdatePlayingVideo
@property (nonatomic, setter=_setNeedsUpdateViewedAsset:) BOOL _needsUpdateViewedAsset; // ivar: __needsUpdateViewedAsset
@property (nonatomic, setter=_setNeedsUpdateViewedAssetLongEnough:) BOOL _needsUpdateViewedAssetLongEnough; // ivar: __needsUpdateViewedAssetLongEnough
@property (nonatomic, setter=_setOneUpSessionActive:) BOOL _oneUpSessionActive; // ivar: __oneUpSessionActive
@property (nonatomic, setter=_setOneUpSessionStartTime:) CGFloat _oneUpSessionStartTime; // ivar: __oneUpSessionStartTime
@property (retain, nonatomic, setter=_setViewedAsset:) NSObject<PUDisplayAsset> *_viewedAsset; // ivar: __viewedAsset
@property (nonatomic, setter=_setViewedAssetLongEnough:) BOOL _viewedAssetLongEnough; // ivar: __viewedAssetLongEnough
@property (nonatomic, setter=_setViewedAssetStartTime:) CGFloat _viewedAssetStartTime; // ivar: __viewedAssetStartTime
@property (readonly, nonatomic) NSHashTable *_viewingContexts; // ivar: __viewingContexts
@property (readonly, weak, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithBrowsingViewModel:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_assertInsideChangeBlock;
-(void)_handleScheduledCurrentAssetChange;
-(void)_handleScheduledViewUpdate;
-(void)_invalidateOneUpSessionActive;
-(void)_invalidatePlayingVideo;
-(void)_invalidateViewedAsset;
-(void)_invalidateViewedAssetLongEnough;
-(void)_scheduleCurrentAssetChange;
-(void)_scheduleViewUpdate;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateOneUpSessionActive;
-(void)_updatePlayingVideoIfNeeded;
-(void)_updateViewedAssetIfNeeded;
-(void)_updateViewedAssetLongEnoughIfNeeded;
-(void)addViewingContext:(id)arg0 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)removeViewingContext:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif