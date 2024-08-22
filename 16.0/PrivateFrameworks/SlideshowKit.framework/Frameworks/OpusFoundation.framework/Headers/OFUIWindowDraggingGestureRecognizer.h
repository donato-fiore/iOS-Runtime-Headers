// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUIWINDOWDRAGGINGGESTURERECOGNIZER_H
#define OFUIWINDOWDRAGGINGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {
    BOOL _allowDragging;
}


@property (readonly, nonatomic) CGPoint initialPoint; // ivar: _initialPoint
@property (readonly, nonatomic) CGPoint translation;


-(void)_beginDraggingIfNecessary;
-(void)_stopDraggingIfNecessary:(BOOL)arg0 ;
-(void)beginDragging;
-(void)cancelDragging;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif