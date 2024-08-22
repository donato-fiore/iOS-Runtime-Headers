// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSWIPEDDOWNTILETRACKER_H
#define PUSWIPEDDOWNTILETRACKER_H

@class UIPanGestureRecognizer;


#import "PUInteractiveTileTracker.h"
#import "PHSwipeDownTracker.h"
#import "PUTileLayoutInfo.h"
#import "PUTileController.h"

@interface PUSwipedDownTileTracker : PUInteractiveTileTracker

@property (retain, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker; // ivar: __swipeDownTracker
@property (retain, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo; // ivar: __trackedTileLayoutInfo
@property (retain, nonatomic) PUTileController *designatedTileController; // ivar: _designatedTileController
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer


-(id)initWithPanGestureRecognizer:(id)arg0 tilingView:(id)arg1 ;
-(id)initWithTilingView:(id)arg0 ;
-(id)tileControllerToTrack;
-(void)completeTracking;
-(void)startTileControllerTracking;
-(void)updateGestureRecognizerTracking;
-(void)updateTileControllerTracking;


@end


#endif