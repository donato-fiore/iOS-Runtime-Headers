// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIPAMBIENTLIGHTMONITOR_H
#define DIPAMBIENTLIGHTMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DIPAmbientLightMonitor : NSObject {
    *__IOHIDEventSystemClient _client;
    *__IOHIDServiceClient _service;
    NSObject<OS_dispatch_queue> *_almQueue;
    int _luxLevel;
}


@property (readonly, nonatomic) int luxLevel;


-(id)init;
-(void)dealloc;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif