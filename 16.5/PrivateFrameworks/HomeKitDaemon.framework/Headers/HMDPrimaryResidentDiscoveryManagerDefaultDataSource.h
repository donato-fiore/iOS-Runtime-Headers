// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRIMARYRESIDENTDISCOVERYMANAGERDEFAULTDATASOURCE_H
#define HMDPRIMARYRESIDENTDISCOVERYMANAGERDEFAULTDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol HMDPrimaryResidentDiscoveryManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDPrimaryResidentDiscoveryManagerDefaultDataSource : NSObject <HMDPrimaryResidentDiscoveryManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


-(id)createBackoffTimer;
-(id)createPrimaryResidentDiscoveryOperationWithContext:(id)arg0 ;
-(id)init;
-(id)remoteDeviceMonitorFromContext:(id)arg0 ;
-(id)transportStartFutureFromContext:(id)arg0 ;


@end


#endif