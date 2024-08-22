// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEFAULTRESIDENTDEVICEMANAGERROARDATASOURCE_H
#define HMDDEFAULTRESIDENTDEVICEMANAGERROARDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol HMDResidentDeviceManagerRoarDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDAppleAccountManager.h"

@interface HMDDefaultResidentDeviceManagerRoarDataSource : NSObject <HMDResidentDeviceManagerRoarDataSource>



@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isResidentCapable;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)createBackingStoreForHome:(id)arg0 ;
-(id)createElectionAddOnWithContext:(id)arg0 ;
-(id)createPrimaryResidentDiscoveryManagerWithQueue:(id)arg0 ;
-(id)firstCloudKitImportFuture;
-(id)init;
-(id)logIdentifierForHome:(id)arg0 ;


@end


#endif