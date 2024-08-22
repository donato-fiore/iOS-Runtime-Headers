// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREDEVICECONTROLREQUESTQUEUE_H
#define AVCAPTUREDEVICECONTROLREQUESTQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVCaptureDeviceControlRequestQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}




-(id)dequeue;
-(id)head;
-(id)init;
-(void)dealloc;
-(void)enqueueRequest:(id)arg0 ;


@end


#endif