// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSINTERACTIONRECOGNIZER_H
#define MEDIACONTROLSINTERACTIONRECOGNIZER_H

@class UIGestureRecognizer, MSVTimer;



@interface MediaControlsInteractionRecognizer : UIGestureRecognizer

@property (retain, nonatomic) MSVTimer *interactionTimer; // ivar: _interactionTimer


-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif