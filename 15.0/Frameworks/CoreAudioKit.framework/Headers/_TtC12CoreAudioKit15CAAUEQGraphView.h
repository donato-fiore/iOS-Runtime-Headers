// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12COREAUDIOKIT15CAAUEQGRAPHVIEW_H
#define _TTC12COREAUDIOKIT15CAAUEQGRAPHVIEW_H

@class TtC12CoreAudioKit13CAAUGraphView;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;



@interface _TtC12CoreAudioKit15CAAUEQGraphView : TtC12CoreAudioKit13CAAUGraphView {
    ? controlList;
    ? paramCache;
    ? curve;
    ? activePointIndex;
    ? drawActivePointOnly;
    ? plotActiveRangeOnly;
    ? touchedParts;
}


@property (nonatomic, retain) NSObject<_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *dataSource; // ivar: dataSource


-(float)valueForXWithLocation:(CGFloat)arg0 ;
-(float)valueForYWithLocation:(CGFloat)arg0 ;
-(id)addPointControlFor:(unsigned int)arg0 for:(unsigned int)arg1 ;
-(id)addRegionControlFor:(unsigned int)arg0 width:(unsigned int)arg1 ;
-(id)addRegionControlFor:(unsigned int)arg0 y:(unsigned int)arg1 width:(unsigned int)arg2 ;
-(id)graphView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )graphFrame;
-(void)handleBeginGestureWithNotification:(id)arg0 ;
-(void)handleEndGestureWithNotification:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)redrawCurve;
-(void)removeFromSuperview;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateViewFor:(unsigned int)arg0 value:(float)arg1 ;


@end


#endif