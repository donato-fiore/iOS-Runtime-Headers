// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEAUTHORIZATIONSESSIONINTERNAL_H
#define AVOUTPUTDEVICEAUTHORIZATIONSESSIONINTERNAL_H

@protocol OS_dispatch_queue, AVOutputDeviceAuthorizationSessionDelegate, AVOutputDeviceAuthorizationSessionImpl;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceAuthorizationSessionInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputDeviceAuthorizationSessionDelegate> *delegate;
    id<AVOutputDeviceAuthorizationSessionImpl> *impl;
}






@end


#endif