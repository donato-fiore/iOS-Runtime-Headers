// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERCONNECTION_H
#define HMDREMOTEEVENTROUTERCONNECTION_H

@class NSUUID, NSString;
@protocol HMEMessageDatagramConnection, HMDRemoteEventRouterUserAccessControlProvider;

#import <Foundation/Foundation.h>

#import "HMDDevice.h"

@interface HMDRemoteEventRouterConnection : NSObject <HMEMessageDatagramConnection>

 {
    BOOL _supportsFragmentMessage;
    NSUUID *_deviceIdentifier;
    HMDDevice *_device;
    id<HMDRemoteEventRouterUserAccessControlProvider> *_userAccessControlProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif