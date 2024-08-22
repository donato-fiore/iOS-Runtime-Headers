// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPTIMELINEVIEW_H
#define RCPTIMELINEVIEW_H

@class UIView, CALayer, NSTimer;
@protocol RCPTimelineViewDelegate;


#import "RCPMovie.h"

@interface RCPTimelineView : UIView {
    CALayer *_playbackHead;
    CALayer *_cropStartHead;
    CALayer *_cropEndHead;
    NSUInteger _time;
    NSInteger _draggingHandle;
    NSTimer *_playbackTimer;
}


@property (weak, nonatomic) NSObject<RCPTimelineViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger endCropTimestamp; // ivar: _endCropTimestamp
@property (retain, nonatomic) RCPMovie *recapMovie; // ivar: _recapMovie
@property (nonatomic) NSUInteger startCropTimestamp; // ivar: _startCropTimestamp


-(BOOL)isFlipped;
-(CGFloat)xForTimestamp:(NSUInteger)arg0 ;
-(id)cropHead:(BOOL)arg0 ;
-(void)dragAtLocation:(struct CGPoint )arg0 ;
-(void)dragBeganAtLocation:(struct CGPoint )arg0 hitThreshold:(CGFloat)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay:(BOOL)arg0 ;
-(void)setTime:(NSUInteger)arg0 ;
-(void)setup;
-(void)startPlayback;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateCropUI;


@end


#endif