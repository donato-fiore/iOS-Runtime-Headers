// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEINTERNAL_H
#define AVOUTPUTDEVICEINTERNAL_H

@class NSString, NSData;
@protocol AVOutputDeviceImpl, AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceInternal : NSObject {
    id<AVOutputDeviceImpl> *impl;
    NSString *name;
    NSString *ID;
    NSInteger deviceType;
    NSInteger deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
    NSString *serialNumber;
    NSString *firmwareVersion;
    NSData *MACAddress;
    NSUInteger deviceFeatures;
    id<AVOutputDeviceCommunicationChannelDelegate> *communicationChannelDelegate;
    id<AVOutputDeviceCommunicationChannelManager> *commChannelManager;
}






@end


#endif