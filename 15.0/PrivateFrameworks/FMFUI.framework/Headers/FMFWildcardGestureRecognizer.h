// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFWILDCARDGESTURERECOGNIZER_H
#define FMFWILDCARDGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface FMFWildcardGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) id *touchesBeganCallback; // ivar: _touchesBeganCallback
@property (copy, nonatomic) id *touchesEndedCallback; // ivar: _touchesEndedCallback


-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)init;
-(void)ignoreTouch:(id)arg0 forEvent:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif