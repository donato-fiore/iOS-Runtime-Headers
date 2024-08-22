// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DBLONGPRESSGESTURERECOGNIZER_H
#define _DBLONGPRESSGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer;



@interface _DBLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) NSUInteger lastSenderID; // ivar: _lastSenderID


-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif