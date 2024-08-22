// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERSERVERCONNECTION_H
#define HMDREMOTEEVENTROUTERSERVERCONNECTION_H

@class NSUUID, NSString;
@protocol HMEMessageDatagramConnection, HMDRemoteEventRouterUserAccessControlProvider;

#import <Foundation/Foundation.h>

#import "HMDDevice.h"

@interface HMDRemoteEventRouterServerConnection : NSObject <HMEMessageDatagramConnection>

 {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    id<HMDRemoteEventRouterUserAccessControlProvider> *_userAccessControlProvider;
    NSInteger _connectionMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 connectionMode:(NSInteger)arg1 supportsFragmentMessage:(BOOL)arg2 userAccessControlProvider:(id)arg3 ;


@end


#endif