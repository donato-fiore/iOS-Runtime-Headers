// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCSECONDARYCLICKGESTURERECOGNIZER_H
#define NCSECONDARYCLICKGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface NCSecondaryClickGestureRecognizer : UIGestureRecognizer



-(BOOL)isSecondaryClickEvent:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif