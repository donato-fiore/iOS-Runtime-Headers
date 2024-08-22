// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT13CAAUGRAPHVIEW_H
#define _TTC12COREAUDIOKIT13CAAUGRAPHVIEW_H

@class UIView;



@interface _TtC12CoreAudioKit13CAAUGraphView : UIView {
    ? fill;
    ? border;
    ? animateChanges;
    ? gridPoint;
    ? gridPointSelected;
    ? gridPointHighlighted;
    ? guide;
    ? guideHighlight;
    ? widthAreaFill;
    ? offsetXLabels;
    ? margins;
    ? labelGap;
    ? activeWidth;
    ? xAxis;
    ? yAxis;
    ? graphLayer;
    ? xLabels;
    ? yLabels;
    ? xGrids;
    ? yGrids;
    ? inactiveAreas;
    ? editPoint;
    ? touchDown;
    ? areasHidden;
}


@property (nonatomic) BOOL hideLabels; // ivar: hideLabels


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)locationForXWithValue:(float)arg0 ;
-(CGFloat)locationForYWithValue:(float)arg0 ;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithData:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif