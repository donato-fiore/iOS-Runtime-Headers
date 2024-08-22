// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKASTRONOMYRICHCOMPLICATIONCONTENTVIEW_H
#define NTKASTRONOMYRICHCOMPLICATIONCONTENTVIEW_H

@class UIView, CLKDevice, NSDate, CLLocation, CLKUIQuadView;
@protocol NTKAstronomyVistaViewObserver, NTKTimeTravel;


#import "NTKAstronomyVistaView.h"
#import "NTKAstronomyLocationDot.h"
#import "NTKDelayedBlock.h"

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel>

 {
    NTKAstronomyVistaView *_astronomyVistaView;
    NTKAstronomyLocationDot *_locationDot;
    CLKDevice *_device;
    NSInteger _family;
    NSDate *_timelineDate;
    NSDate *_timeTravelDate;
    BOOL _isPaused;
    BOOL _isAnimating;
    BOOL _isRenderOneFrame;
    NTKDelayedBlock *_stopAnimationDelayedBlock;
    CLLocation *_currentLocation;
}


@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) CLKUIQuadView *quadView;


-(BOOL)_shouldAnimateWithTemplateUpdateReason:(NSInteger)arg0 ;
-(id)initForDevice:(id)arg0 family:(NSInteger)arg1 diameter:(CGFloat)arg2 ;
-(void)_hideLocationDot;
-(void)_showLocationDot;
-(void)_startAnimating;
-(void)_stopAnimating;
-(void)applyPausedUpdate:(BOOL)arg0 ;
-(void)astronomyVistaViewContentsAnimationFinished:(id)arg0 ;
-(void)astronomyVistaViewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)handleOrdinaryScreenWake;
-(void)handleTemplateMetadata:(id)arg0 reason:(NSInteger)arg1 ;
-(void)handleWristRaiseScreenWake;
-(void)layoutSubviews;
-(void)prepareWristRaiseAnimation;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif