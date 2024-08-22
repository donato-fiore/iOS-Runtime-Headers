// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AURIGHTEDGECONTROLSBASEVIEWCONTROLLER_H
#define AURIGHTEDGECONTROLSBASEVIEWCONTROLLER_H

@class UIView, NSNumberFormatter, NSLayoutConstraint;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;


#import "AUAppleViewControllerBase.h"
#import "_TtC12CoreAudioKit21CAAUNBandEQHeaderView.h"
#import "_TtC12CoreAudioKit18CANBandEQGraphView.h"
#import "_TtC12CoreAudioKit24AUVerticalSegmentControl.h"
#import "_TtC12CoreAudioKit13AUKnobControl.h"

@interface AURightEdgeControlsBaseViewController : AUAppleViewControllerBase <_TtP12CoreAudioKit27CAAUViewParameterDataSource_>

 {
    _TtC12CoreAudioKit21CAAUNBandEQHeaderView *headerView;
    _TtC12CoreAudioKit18CANBandEQGraphView *graphView;
    UIView *edgeControlSection;
    _TtC12CoreAudioKit24AUVerticalSegmentControl *bandControl;
    _TtC12CoreAudioKit13AUKnobControl *gainKnob;
    NSNumberFormatter *wholeNumberFormatter;
    NSNumberFormatter *decimalFormatter;
    CGRect curveFrame;
    CGSize previousSize;
    NSLayoutConstraint *rightWidthConstraint;
    NSLayoutConstraint *bandWidthConstraint;
    NSLayoutConstraint *bandHeightConstraint;
}


@property *AudioUnitFrequencyResponseBin frequencyData; // ivar: _frequencyData


-(NSInteger)widthTypeFor:(unsigned int)arg0 ;
-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)stringValuesFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(struct AudioUnitFrequencyResponseBin *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin *)arg0 ;
-(struct CGPath *)curveIn:(struct CGRect )arg0 ;
-(void)auParameterValueChanged:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)prepareData;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)updateCurve:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif