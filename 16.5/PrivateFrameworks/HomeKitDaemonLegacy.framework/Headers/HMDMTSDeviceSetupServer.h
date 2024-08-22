// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMTSDEVICESETUPSERVER_H
#define HMDMTSDEVICESETUPSERVER_H

@class HMFObject, NSString;
@protocol HMFLogging, MTSXPCDeviceSetupClientProxyDelegate;


#import "HMDAccessorySetupManager.h"

@interface HMDMTSDeviceSetupServer : HMFObject <HMFLogging, MTSXPCDeviceSetupClientProxyDelegate>



@property (readonly) HMDAccessorySetupManager *accessorySetupManager; // ivar: _accessorySetupManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithAccessorySetupManager:(id)arg0 ;
-(void)clientProxy:(id)arg0 performDeviceSetupUsingRequest:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif