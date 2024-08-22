// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFOCUSTIMELINEVIEW_H
#define PXFOCUSTIMELINEVIEW_H

@class UIView, NSMutableArray, UIImageView;
@protocol PXFocusTimelineViewDelegate;


#import "PXFocusTimelineEvent.h"

@interface PXFocusTimelineView : UIView {
    NSMutableArray *_focusEvents;
    NSMutableArray *_animatableFocusEvents;
    UIImageView *_trackImageView;
    UIView *_focusEventsView;
    UIView *_progressView;
    ? _currentTrackingTime;
    PXFocusTimelineEvent *_objectTrackingEvent;
    BOOL _zoomed;
    CGFloat _zoomMinValue;
    CGFloat _zoomMaxValue;
}


@property (weak, nonatomic) NSObject<PXFocusTimelineViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dimmed; // ivar: _dimmed
@property (nonatomic) BOOL skipLayoutUpdates; // ivar: _skipLayoutUpdates
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) BOOL viewCanBeEnabled; // ivar: _viewCanBeEnabled


+(id)autoFocusEventMarkerImage;
+(id)userInitiatedFocusEventMarkerImage;
-(BOOL)_isEventWithinZoomRange:(id)arg0 ;
-(BOOL)_isTickWithinActiveTrackRange:(CGFloat)arg0 ;
-(CGFloat)_zoomAdjustedTickGap;
-(id)_axDescriptionForFocusEvent:(id)arg0 ;
-(id)_eventAtLocation:(struct CGPoint )arg0 threshold:(CGFloat)arg1 ;
-(id)_imageViewForFocusEvent:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_closestTickPointToPointOnTrack:(struct CGPoint )arg0 ;
-(struct CGPoint )_trackPointFromTimestamp:(struct ? )arg0 ;
-(struct CGRect )_trackFrame;
-(struct CGSize )intrinsicContentSize;
-(void)_addEventToTimeline:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_animateFocusChangeFrom:(id)arg0 to:(id)arg1 completion:(id)arg2 ;
-(void)_updateTrack;
-(void)_updateTrackingProgress;
-(void)addFocusEvent:(struct ? )arg0 userInitiated:(BOOL)arg1 shouldAnimate:(BOOL)arg2 ;
-(void)enableUIForCinematographyScriptLoad:(BOOL)arg0 ;
-(void)handleEventSelectedAtLocation:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)objectTrackingFinishedWithSuccess:(BOOL)arg0 ;
-(void)objectTrackingStartedAtTime:(struct ? )arg0 ;
-(void)resetTimeline;
-(void)setZoomMinValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 ;
-(void)unzoom;
-(void)updateObjectTrackingProgressAtTime:(struct ? )arg0 shouldStop:(*BOOL)arg1 ;
-(void)updateTimeline;


@end


#endif