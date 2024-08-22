// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPSYNTHETICWAITEVENT_H
#define PNPSYNTHETICWAITEVENT_H



#import "PNPSyntheticPencilEvent.h"

@interface PNPSyntheticWaitEvent : PNPSyntheticPencilEvent {
    CGFloat _delay;
}




-(id)initWithDelay:(CGFloat)arg0 ;
-(void)serviceDestination:(id)arg0 fromSource:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif