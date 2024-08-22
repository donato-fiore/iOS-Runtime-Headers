// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTROLEVENTSGESTURERECOGNIZER_H
#define _UICONTROLEVENTSGESTURERECOGNIZER_H

@protocol _UIControlEventsGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UITouch.h"

@interface _UIControlEventsGestureRecognizer : UIGestureRecognizer {
    ? _flags;
}


@property (readonly, nonatomic) UITouch *activeTouch; // ivar: _activeTouch
@property (weak, nonatomic) NSObject<_UIControlEventsGestureRecognizerDelegate> *controlEventsDelegate; // ivar: _controlEventsDelegate


-(void)gestureRecognizerFailed;
-(void)reset;
-(void)sendControlEvent:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif