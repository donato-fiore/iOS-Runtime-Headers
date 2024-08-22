// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUPEAKLIMITERVIEWCONTROLLER_H
#define AUPEAKLIMITERVIEWCONTROLLER_H

@class UIView, NSNumberFormatter, NSMutableArray, NSLayoutConstraint;


#import "AURealtimeDrawingBaseViewController.h"
#import "_TtC12CoreAudioKit21CAAdjustingHeaderView.h"
#import "_TtC12CoreAudioKit18AULimiterGraphView.h"
#import "_TtC12CoreAudioKit21AULimiterControlsView.h"
#import "_TtC12CoreAudioKit13AUKnobControl.h"

@interface AUPeakLimiterViewController : AURealtimeDrawingBaseViewController {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    _TtC12CoreAudioKit18AULimiterGraphView *graphView;
    _TtC12CoreAudioKit21AULimiterControlsView *controlsView;
    UIView *viewContainer;
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    NSNumberFormatter *wholeNumberFormatter;
    NSMutableArray *permanentConstraints;
    NSMutableArray *temporaryConstraints;
    CGSize previousSize;
    NSInteger displayMode;
    NSLayoutConstraint *attackSpacer;
    NSLayoutConstraint *gainSpacer;
    unsigned int loopIndex;
    float maxPeak;
}




-(float)limitAmount:(unsigned int)arg0 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(void)cleanup;
-(void)configureViewFor:(id)arg0 ;
-(void)doRealtimeDrawing;
-(void)knobReleased:(id)arg0 ;
-(void)knobTouched:(id)arg0 ;
-(void)knobValueChanged:(id)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)registerParameters;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)setupConstraints;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif