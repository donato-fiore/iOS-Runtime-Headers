// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUEQVIEWCONTROLLERBASE_H
#define AUEQVIEWCONTROLLERBASE_H

@class NSNumberFormatter;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;


#import "AUAppleViewControllerBase.h"
#import "_TtC12CoreAudioKit16CAAUEQHeaderView.h"
#import "_TtC12CoreAudioKit15CAAUEQGraphView.h"
#import "_TtC12CoreAudioKit14CAAUEQViewBase.h"

@interface AUEQViewControllerBase : AUAppleViewControllerBase <_TtP12CoreAudioKit27CAAUViewParameterDataSource_>

 {
    _TtC12CoreAudioKit16CAAUEQHeaderView *headerView;
    _TtC12CoreAudioKit15CAAUEQGraphView *graphView;
    _TtC12CoreAudioKit14CAAUEQViewBase *eqView;
    NSNumberFormatter *wholeNumberFormatter;
    NSNumberFormatter *decimalFormatter;
    CGRect curveFrame;
    NSInteger displayMode;
    CGSize previousSize;
}


@property *AudioUnitFrequencyResponseBin frequencyData; // ivar: _frequencyData
@property (nonatomic) unsigned int param1; // ivar: _param1
@property (nonatomic) unsigned int param2; // ivar: _param2
@property (nonatomic) unsigned int param3; // ivar: _param3


-(NSInteger)widthTypeFor:(unsigned int)arg0 ;
-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(struct AudioUnitFrequencyResponseBin *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin *)arg0 ;
-(struct CGPath *)curveIn:(struct CGRect )arg0 ;
-(void)auGraphBeginGesture:(id)arg0 ;
-(void)auGraphEndGesture:(id)arg0 ;
-(void)auParameterValueChanged:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)handleBeginGesture:(unsigned int)arg0 ;
-(void)handleEndGesture:(unsigned int)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)updateCurve:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif