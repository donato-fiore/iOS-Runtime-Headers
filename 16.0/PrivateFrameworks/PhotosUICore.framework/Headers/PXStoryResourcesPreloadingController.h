// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYRESOURCESPRELOADINGCONTROLLER_H
#define PXSTORYRESOURCESPRELOADINGCONTROLLER_H

@class NSString, NSError;
@protocol PXStoryResourcesPreloadingCoordinatable;


#import "PXStoryController.h"
#import "PXStoryResourcesPreloader.h"
#import "PXStoryModel.h"

@interface PXStoryResourcesPreloadingController : PXStoryController <PXStoryResourcesPreloadingCoordinatable>

 {
    PXStoryResourcesPreloader *_preloader;
}


@property (nonatomic) NSInteger bufferingEvents; // ivar: _bufferingEvents
@property (nonatomic) BOOL canStartPreloading; // ivar: _canStartPreloading
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isCompleted; // ivar: _isCompleted
@property (readonly, nonatomic) NSUInteger isCompletedChangeDescriptor;
@property (nonatomic) BOOL isPreloadingEnabled; // ivar: _isPreloadingEnabled
@property (readonly, nonatomic) BOOL isSongResourcesPreloadingEnabled; // ivar: _isSongResourcesPreloadingEnabled
@property (readonly, nonatomic) float loadingFractionComplete; // ivar: _loadingFractionComplete
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) BOOL shouldSkipInitialSegment; // ivar: _shouldSkipInitialSegment


-(id)initWithModel:(id)arg0 mediaProvider:(id)arg1 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_invalidateCanStartPreloading;
-(void)_invalidateCurrentPlaybackTimeOnPreloader;
-(void)_invalidateCurrentSegmentIdentifierOnPreloader;
-(void)_invalidatePreloadingRequest;
-(void)_invalidateReadinessStatus;
-(void)_updateCanStartPreloading;
-(void)_updateCurrentPlaybackTimeOnPreloader;
-(void)_updateCurrentSegmentIdentifierOnPreloader;
-(void)_updatePreloadingRequest;
-(void)_updateReadinessStatus;
-(void)configureUpdater:(id)arg0 ;
-(void)dealloc;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif