// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT16AUDELAYGRAPHVIEW_H
#define _TTC12COREAUDIOKIT16AUDELAYGRAPHVIEW_H

@class TtC12CoreAudioKit13CAAUGraphView;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;



@interface _TtC12CoreAudioKit16AUDelayGraphView : TtC12CoreAudioKit13CAAUGraphView {
    ? pointLayer;
    ? delayLayers;
    ? defaultMax;
    ? xMinorGridCount;
    ? graphActivated;
    ? accessibilityParam;
    ? accessibilityTimeFormatter;
    ? accessibilityDecimalFormatter;
    ? xMinorGrids;
}


@property (nonatomic, retain) NSObject<_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *dataSource; // ivar: dataSource
@property (nonatomic) BOOL invert; // ivar: invert
@property (nonatomic) float zoomFactor; // ivar: zoomFactor


-(BOOL)accessibilityActivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )graphFrame;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)configureWithData:(id)arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateFor:(unsigned int)arg0 value:(float)arg1 ;


@end


#endif