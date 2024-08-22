// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEDEVICEINFORMATION_H
#define HMDREMOTEDEVICEINFORMATION_H

@class HMFObject, NSMutableArray, HMFTimer, NSArray, NSString;
@protocol HMFObject, HMFLocking, HMDRemoteDeviceMonitorOperationFactory;


#import "HMDDevice.h"

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject>

 {
    id<HMFLocking> *_lock;
    NSMutableArray *_confirmationHandlers;
    BOOL _reachable;
    NSInteger _state;
    HMDDevice *_device;
    id<HMDRemoteDeviceMonitorOperationFactory> *_operationFactory;
    HMFTimer *_retryTimer;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(id)init;


@end


#endif