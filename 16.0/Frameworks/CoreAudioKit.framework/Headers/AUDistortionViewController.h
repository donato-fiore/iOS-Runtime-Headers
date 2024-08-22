// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDISTORTIONVIEWCONTROLLER_H
#define AUDISTORTIONVIEWCONTROLLER_H

@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;


#import "AUAppleViewControllerBase.h"
#import "_TtC12CoreAudioKit21CAAdjustingHeaderView.h"
#import "_TtC12CoreAudioKit17AUVerticalTabView.h"
#import "_TtC12CoreAudioKit16AUDistortionView.h"

@interface AUDistortionViewController : AUAppleViewControllerBase <_TtP12CoreAudioKit27CAAUViewParameterDataSource_>

 {
    _TtC12CoreAudioKit21CAAdjustingHeaderView *headerView;
    _TtC12CoreAudioKit17AUVerticalTabView *tabView;
    _TtC12CoreAudioKit16AUDistortionView *distortionView;
}




-(float)maxValueFor:(unsigned int)arg0 ;
-(float)minValueFor:(unsigned int)arg0 ;
-(float)valueFor:(unsigned int)arg0 ;
-(id)imageForTabIndex:(NSInteger)arg0 ;
-(id)nameFor:(unsigned int)arg0 ;
-(id)shortNameFor:(unsigned int)arg0 ;
-(id)unitLabelFor:(unsigned int)arg0 ;
-(struct CGPath *)curveIn:(struct CGRect )arg0 ;
-(void)cleanup;
-(void)layoutChanged:(id)arg0 ;
-(void)prepareData;
-(void)priv_eventListener:(*void)arg0 event:(struct AudioUnitEvent *)arg1 value:(float)arg2 ;
-(void)registerParameters;
-(void)setWithParameter:(unsigned int)arg0 value:(float)arg1 ;
-(void)tabSelectionChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif