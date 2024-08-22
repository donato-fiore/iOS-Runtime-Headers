// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKCONDITIONALPANGESTURERECOGNIZER_H
#define _MKCONDITIONALPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer;



@interface _MKConditionalPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) NSInteger requiredModifierFlags; // ivar: _requiredModifierFlags


-(BOOL)_shouldReceiveEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif