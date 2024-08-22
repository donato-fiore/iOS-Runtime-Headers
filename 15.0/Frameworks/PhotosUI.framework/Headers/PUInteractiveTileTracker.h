// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUINTERACTIVETILETRACKER_H
#define PUINTERACTIVETILETRACKER_H

@protocol PUInteractiveTileTrackerDelegate;

#import <Foundation/Foundation.h>

#import "PUTileHider.h"
#import "PUTilingView.h"
#import "PUTileController.h"

@interface PUInteractiveTileTracker : NSObject {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (retain, nonatomic, setter=_setTileHider:) PUTileHider *_tileHider; // ivar: __tileHider
@property (nonatomic) PUDisplayVelocity currentVelocity; // ivar: _currentVelocity
@property (weak, nonatomic) NSObject<PUInteractiveTileTrackerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL shouldEnd; // ivar: _shouldEnd
@property (nonatomic) BOOL shouldFinish; // ivar: _shouldFinish
@property (readonly, nonatomic) PUTilingView *tilingView; // ivar: _tilingView
@property (readonly, nonatomic) PUTileController *trackedTileController; // ivar: _trackedTileController


-(id)init;
-(id)initWithTilingView:(id)arg0 ;
-(id)tileControllerToTrack;
-(void)_updateTrackedTileController;
-(void)completeTracking;
-(void)configureTileReattachmentContext:(id)arg0 ;
-(void)startTileControllerTracking;
-(void)stopTileControllerTracking;
-(void)update;
-(void)updateGestureRecognizerTracking;
-(void)updateTileControllerTracking;


@end


#endif