// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDYNAMICSPROCESSORVIEWCONTROLLER_H
#define AUDYNAMICSPROCESSORVIEWCONTROLLER_H

@class UIView, UILabel, NSLayoutConstraint;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_, _TtP12CoreAudioKit32AUCompressionParameterDataSource_;


#import "AURealtimeDrawingBaseViewController.h"
#import "_TtC12CoreAudioKit21CAAdjustingHeaderView.h"
#import "_TtC12CoreAudioKit17CACompressionView.h"
#import "_TtC12CoreAudioKit18AULabeledMeterView.h"
#import "_TtC12CoreAudioKit13AUKnobControl.h"

@interface AUDynamicsProcessorViewController : AURealtimeDrawingBaseViewController <_TtP12CoreAudioKit27CAAUViewParameterDataSource_, _TtP12CoreAudioKit32AUCompressionParameterDataSource_>

 {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    UIView *viewContainer;
    _TtC12CoreAudioKit17CACompressionView *graphView;
    UIView *edgeControlSection;
    UILabel *inputLabel;
    UILabel *outputLabel;
    UILabel *meterLabel;
    _TtC12CoreAudioKit18AULabeledMeterView *meter;
    _TtC12CoreAudioKit13AUKnobControl *attackKnob;
    _TtC12CoreAudioKit13AUKnobControl *releaseKnob;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    CGRect curveFrame;
    CGSize previousSize;
    NSLayoutConstraint *rightWidthConstraint;
}


@property *AudioUnitFrequencyResponseBin frequencyData; // ivar: _frequencyData


-(id)add:(id)arg0 to:(id)arg1 ;
-(id)colorWithParameter:(unsigned int)arg0 ;
-(id)multiply:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(struct AudioUnitFrequencyResponseBin *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin *)arg0 ;
-(void)addConstraints;
-(void)auParameterValueChanged:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)doRealtimeDrawing;
-(void)graphControlTouched:(id)arg0 ;
-(void)knobReleased:(id)arg0 ;
-(void)knobTouched:(id)arg0 ;
-(void)knobValueChanged:(id)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)registerParameters;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)updateCurve:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif