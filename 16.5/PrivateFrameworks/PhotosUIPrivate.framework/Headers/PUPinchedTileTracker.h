// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPINCHEDTILETRACKER_H
#define PUPINCHEDTILETRACKER_H

@class UIPinchGestureRecognizer;


#import "PUInteractiveTileTracker.h"
#import "PUVelocityFilter.h"
#import "PUTileLayoutInfo.h"
#import "PUChangeDirectionValueFilter.h"
#import "PUPinchTracker.h"

@interface PUPinchedTileTracker : PUInteractiveTileTracker {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setAngularVelocityFilter:) PUVelocityFilter *_angularVelocityFilter; // ivar: __angularVelocityFilter
@property (retain, nonatomic, setter=_setHorizontalVelocityFilter:) PUVelocityFilter *_horizontalVelocityFilter; // ivar: __horizontalVelocityFilter
@property (retain, nonatomic, setter=_setInitialLayoutInfo:) PUTileLayoutInfo *_initialLayoutInfo; // ivar: __initialLayoutInfo
@property (retain, nonatomic, setter=_setPinchGestureRecognizerScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter; // ivar: __pinchGestureRecognizerScaleDirectionValueFilter
@property (nonatomic, setter=_setPinchProgress:) CGFloat _pinchProgress; // ivar: __pinchProgress
@property (retain, nonatomic, setter=_setPinchTracker:) PUPinchTracker *_pinchTracker; // ivar: __pinchTracker
@property (retain, nonatomic, setter=_setTargetLayoutInfo:) PUTileLayoutInfo *_targetLayoutInfo; // ivar: __targetLayoutInfo
@property (retain, nonatomic, setter=_setVerticalVelocityFilter:) PUVelocityFilter *_verticalVelocityFilter; // ivar: __verticalVelocityFilter
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer


-(id)initWithPinchGestureRecognizer:(id)arg0 tilingView:(id)arg1 direction:(NSInteger)arg2 ;
-(id)initWithTilingView:(id)arg0 ;
-(id)tileControllerToTrack;
-(void)_updateTargetLayoutInfoIfNeeded;
-(void)completeTracking;
-(void)configureTileReattachmentContext:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)startTileControllerTracking;
-(void)updateGestureRecognizerTracking;
-(void)updateTileControllerTracking;


@end


#endif