// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATIONVALUEEVENT_H
#define POPANIMATIONVALUEEVENT_H



#import "POPAnimationEvent.h"

@interface POPAnimationValueEvent : POPAnimationEvent

@property (readonly, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) id *velocity; // ivar: _velocity


-(id)initWithType:(NSUInteger)arg0 time:(CGFloat)arg1 value:(id)arg2 ;
-(void)_appendDescription:(id)arg0 ;


@end


#endif