// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERSERVERCONNECTION_H
#define HMDREMOTEEVENTROUTERSERVERCONNECTION_H

@class NSUUID, NSString;
@protocol HMEMessageDatagramConnection;

#import <Foundation/Foundation.h>

#import "HMDDevice.h"

@interface HMDRemoteEventRouterServerConnection : NSObject <HMEMessageDatagramConnection>

 {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    HMDDevice *_device;
    NSUUID *_userAccessControlProviderUUID;
    NSInteger _connectionMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 connectionMode:(NSInteger)arg1 supportsFragmentMessage:(BOOL)arg2 userAccessControlProviderUUID:(id)arg3 ;
-(id)initWithDeviceIdentifier:(id)arg0 device:(id)arg1 connectionMode:(NSInteger)arg2 supportsFragmentMessage:(BOOL)arg3 userAccessControlProviderUUID:(id)arg4 ;


@end


#endif