// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPIEVENTSENDER_H
#define AXPIEVENTSENDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXPIEventSender : NSObject {
    *__IOHIDEventSystemClient _ioSystemPostBackClient;
    NSObject<OS_dispatch_queue> *_eventSendingQueue;
}


@property (nonatomic) NSUInteger senderID; // ivar: _senderID


+(id)sharedInstance;
-(id)init;
-(void)sendEventRepresentation:(id)arg0 ;
-(void)sendIOHIDEventRef:(struct __IOHIDEvent *)arg0 ;


@end


#endif