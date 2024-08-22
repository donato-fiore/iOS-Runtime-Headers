// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWMODETRANSITION_H
#define PXSTORYVIEWMODETRANSITION_H

@class NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXUpdater.h"
#import "PXAssetReference.h"
#import "PXStoryTimelineLayoutSnapshot.h"
#import "PXNumberAnimator.h"
#import "PXRegionOfInterest.h"

@interface PXStoryViewModeTransition : PXObservable <PXChangeObserver>

 {
    PXUpdater *_updater;
}


@property (readonly, nonatomic) PXAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) CGFloat dampingRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryTimelineLayoutSnapshot *destinationSnapshot; // ivar: _destinationSnapshot
@property (readonly, nonatomic) NSInteger destinationViewMode; // ivar: _destinationViewMode
@property (readonly, nonatomic) PXNumberAnimator *fadeoutAnimator; // ivar: _fadeoutAnimator
@property (readonly, nonatomic) CGFloat fadeoutDuration;
@property (readonly, nonatomic) float fractionCompleted; // ivar: _fractionCompleted
@property (readonly, nonatomic) BOOL hasActiveAnimation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL isComplete; // ivar: _isComplete
@property (readonly, nonatomic) BOOL isFinished; // ivar: _isFinished
@property (readonly, nonatomic) PXNumberAnimator *progressAnimator; // ivar: _progressAnimator
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterest; // ivar: _regionOfInterest
@property (readonly, nonatomic) BOOL shouldFinish;
@property (readonly, nonatomic) PXStoryTimelineLayoutSnapshot *sourceSnapshot; // ivar: _sourceSnapshot
@property (readonly, nonatomic) NSInteger sourceViewMode; // ivar: _sourceViewMode
@property (readonly, nonatomic) CGFloat springStiffness;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? swipeDownInteractionState; // ivar: _swipeDownInteractionState


-(BOOL)hasSourceOrDestinationViewMode:(NSInteger)arg0 ;
-(CGFloat)alphaForClipWithInfo:(struct ? )arg0 proposedAlpha:(CGFloat)arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(CGFloat)valueWithFadeout:(CGFloat)arg0 ;
-(CGFloat)zPositionForClipWithInfo:(struct ? )arg0 proposedZPosition:(CGFloat)arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(id)init;
-(id)initWithSourceViewMode:(NSInteger)arg0 sourceSnapshot:(id)arg1 destinationViewMode:(NSInteger)arg2 destinationSnapshot:(id)arg3 assetReference:(id)arg4 ;
-(id)presentedBoundingBoxForViewMode:(NSInteger)arg0 ;
-(struct ? )contentsTransformOverrideForClipWithInfo:(struct ? )arg0 proposedOverride:(struct ? )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(struct ? )cornerRadiusForClipWithInfo:(struct ? )arg0 proposedCornerRadius:(struct ? )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(struct CGRect )frameForClipWithInfo:(struct ? )arg0 proposedFrame:(struct CGRect )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(void)_invalidateIsComplete;
-(void)_updateIsComplete;
-(void)cancel;
-(void)didPerformChanges;
-(void)finish;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)start;


@end


#endif