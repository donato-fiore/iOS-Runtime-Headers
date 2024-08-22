// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14CORECHARTSWIFT26CHARTDRAGGESTURERECOGNIZER_H
#define _TTC14CORECHARTSWIFT26CHARTDRAGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface _TtC14CoreChartSwift26ChartDragGestureRecognizer : UIGestureRecognizer {
    ? startLocation;
    ? currentLocation;
    ? minimumPressDuration;
    ? initialTouch;
    ? timer;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif