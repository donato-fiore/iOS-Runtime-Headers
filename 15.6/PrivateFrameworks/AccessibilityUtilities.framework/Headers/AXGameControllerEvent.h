// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXGAMECONTROLLEREVENT_H
#define AXGAMECONTROLLEREVENT_H


#import <Foundation/Foundation.h>


@interface AXGameControllerEvent : NSObject



+(id)axGameControllerInfoRepresentationFromEvent:(struct __IOHIDEvent *)arg0 ;
+(unsigned short)axGameControllerKeyCodeForEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif