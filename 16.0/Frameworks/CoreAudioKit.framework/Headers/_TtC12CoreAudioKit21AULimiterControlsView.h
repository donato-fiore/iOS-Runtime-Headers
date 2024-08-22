// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT21AULIMITERCONTROLSVIEW_H
#define _TTC12COREAUDIOKIT21AULIMITERCONTROLSVIEW_H

@class UIView, NSArray;


#import "_TtC12CoreAudioKit18AULabeledMeterView.h"

@interface _TtC12CoreAudioKit21AULimiterControlsView : UIView {
    ? knobs;
    ? previousWidth;
    ? spacingConstraints;
}


@property (nonatomic) CGRect bounds;
@property (nonatomic, copy) NSArray *knobs;
@property (nonatomic, readonly) _TtC12CoreAudioKit18AULabeledMeterView *meter; // ivar: meter


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif