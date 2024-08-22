// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSECUREREMOTEMESSAGETRANSPORTDEFAULTDATASOURCE_H
#define HMDSECUREREMOTEMESSAGETRANSPORTDEFAULTDATASOURCE_H

@class NSString, NSArray;
@protocol HMDSecureRemoteMessageTransportDataSource, HMDRemoteHomeMessagingManager;

#import <Foundation/Foundation.h>

#import "HMDAccountRegistry.h"
#import "HMDRemoteDeviceMonitor.h"
#import "HMDModernTransportDeviceReachabilityObserver.h"

@interface HMDSecureRemoteMessageTransportDefaultDataSource : NSObject <HMDSecureRemoteMessageTransportDataSource>



@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // ivar: _deviceMonitor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMDRemoteHomeMessagingManager> *homeMessagingManager; // ivar: _homeMessagingManager
@property (readonly, nonatomic) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver; // ivar: _reachabilityObserver
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *transports; // ivar: _transports


-(id)init;
-(id)secureSessionWithDevice:(id)arg0 ;


@end


#endif