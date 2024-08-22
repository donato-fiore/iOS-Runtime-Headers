// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTDEVICEAUTHORIZATIONREQUESTINTERNAL_H
#define AVOUTPUTDEVICEAUTHORIZATIONREQUESTINTERNAL_H

@class NSError;
@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {
    id<AVOutputDeviceAuthorizationRequestImpl> *impl;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSInteger status;
    NSError *error;
}






@end


#endif