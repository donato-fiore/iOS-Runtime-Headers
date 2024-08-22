// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCARPLAYHARDWARECONTROLSBROADCASTER_H
#define TUCARPLAYHARDWARECONTROLSBROADCASTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TUCarPlayHardwareControlsBroadcaster : NSObject {
    *__IOHIDEventSystemClient _hidEventSystemClientRef;
}


@property (retain) NSString *eventTypeToIgnore; // ivar: _eventTypeToIgnore


-(id)init;
-(void)dealloc;
-(void)longPressTimerFired:(id)arg0 ;


@end


#endif