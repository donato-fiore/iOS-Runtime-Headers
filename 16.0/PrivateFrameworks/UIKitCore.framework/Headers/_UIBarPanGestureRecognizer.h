// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARPANGESTURERECOGNIZER_H
#define _UIBARPANGESTURERECOGNIZER_H



#import "UIPanGestureRecognizer.h"

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer

@property (readonly, nonatomic) NSInteger barAction; // ivar: _barAction
@property (readonly, nonatomic) CGFloat bias; // ivar: _bias


-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_setDelegate:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif