// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDELAYVIEWCONTROLLER_H
#define AUDELAYVIEWCONTROLLER_H

@class UIView, UISegmentedControl, NSNumberFormatter, UIButton, NSLayoutConstraint;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;


#import "AUAppleViewControllerBase.h"
#import "_TtC12CoreAudioKit21CAAdjustingHeaderView.h"
#import "_TtC12CoreAudioKit16AUDelayGraphView.h"
#import "_TtC12CoreAudioKit13AUKnobControl.h"

@interface AUDelayViewController : AUAppleViewControllerBase <_TtP12CoreAudioKit27CAAUViewParameterDataSource_>

 {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    UIView *edgeControlSection;
    _TtC12CoreAudioKit16AUDelayGraphView *graphView;
    UISegmentedControl *modeControl;
    NSNumberFormatter *decimalFormatter;
    NSNumberFormatter *timeFormatter;
    UIButton *zoomInButton;
    UIButton *zoomOutButton;
    _TtC12CoreAudioKit13AUKnobControl *mixKnob;
    _TtC12CoreAudioKit13AUKnobControl *cutoffKnob;
    NSLayoutConstraint *rightWidthConstraint;
    float zoomFactor;
}




-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(id)accessibilityValueFor:(unsigned int)arg0 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(void)auParameterValueChanged:(id)arg0 ;
-(void)knobReleased:(id)arg0 ;
-(void)knobTouched:(id)arg0 ;
-(void)knobValueChanged:(id)arg0 ;
-(void)modeControlChanged:(id)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)registerParameters;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)zoomIn:(id)arg0 ;
-(void)zoomOut:(id)arg0 ;


@end


#endif