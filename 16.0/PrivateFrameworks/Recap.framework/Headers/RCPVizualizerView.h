// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPVIZUALIZERVIEW_H
#define RCPVIZUALIZERVIEW_H

@class UIView, NSString, AVPlayer, AVPlayerLayer, CALayer;
@protocol CALayerDelegate, RCPTimelineViewDelegate;


#import "RCPMovie.h"
#import "RCPTraceLayer.h"

@interface RCPVizualizerView : UIView <CALayerDelegate, RCPTimelineViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (retain, nonatomic) RCPMovie *recapMovie; // ivar: _recapMovie
@property (retain, nonatomic) CALayer *screenshotLayer; // ivar: _screenshotLayer
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger time; // ivar: _time
@property (retain, nonatomic) RCPTraceLayer *traceLayer; // ivar: _traceLayer


-(BOOL)isFlipped;
-(struct CGRect )screenRect;
-(void)layout;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)timelineView:(id)arg0 didSetTime:(NSUInteger)arg1 ;


@end


#endif