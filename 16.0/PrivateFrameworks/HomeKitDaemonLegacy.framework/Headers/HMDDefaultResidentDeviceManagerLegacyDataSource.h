// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEFAULTRESIDENTDEVICEMANAGERLEGACYDATASOURCE_H
#define HMDDEFAULTRESIDENTDEVICEMANAGERLEGACYDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol HMDResidentDeviceManagerLegacyDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDAppleAccountManager.h"

@interface HMDDefaultResidentDeviceManagerLegacyDataSource : NSObject <HMDResidentDeviceManagerLegacyDataSource>



@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isResidentCapable;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)createElectionAddOnWithContext:(id)arg0 ;
-(id)createInitialReachabilityManagerWithUUID:(id)arg0 ;
-(id)createResidentDeviceWithModel:(id)arg0 ;
-(id)init;
-(id)logIdentifierForHome:(id)arg0 ;


@end


#endif