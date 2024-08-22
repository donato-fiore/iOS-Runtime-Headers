// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNANIMATIONEVENT_H
#define SCNANIMATIONEVENT_H


#import <Foundation/Foundation.h>


@interface SCNAnimationEvent : NSObject {
    CGFloat _eventTime;
    id *_eventBlock;
}




+(id)animationEventWithKeyTime:(CGFloat)arg0 block:(id)arg1 ;
-(CGFloat)time;
-(id)eventBlock:(SEL)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setEventBlock:(id)arg0 ;
-(void)setTime:(CGFloat)arg0 ;


@end


#endif