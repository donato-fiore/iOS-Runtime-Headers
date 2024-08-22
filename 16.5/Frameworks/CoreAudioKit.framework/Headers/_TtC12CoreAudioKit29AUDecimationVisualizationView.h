// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT29AUDECIMATIONVISUALIZATIONVIEW_H
#define _TTC12COREAUDIOKIT29AUDECIMATIONVISUALIZATIONVIEW_H

@class TtC12CoreAudioKit19AUVisualizationView, UIColor;



@interface _TtC12CoreAudioKit29AUDecimationVisualizationView : TtC12CoreAudioKit19AUVisualizationView {
    ? decimationShape;
    ? sineShape;
    ? midLine;
    ? decimation;
    ? rounding;
}


@property (nonatomic, retain) UIColor *tintColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif