// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTCONTEXTINTERNAL_H
#define AVOUTPUTCONTEXTINTERNAL_H

@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;

#import <Foundation/Foundation.h>


@interface AVOutputContextInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputContextImpl> *impl;
    NSUInteger outputDeviceFeatures;
    int applicationPID;
    BOOL applicationPIDWasSet;
    id<AVOutputContextCommunicationChannelDelegate> *communicationChannelDelegate;
}






@end


#endif