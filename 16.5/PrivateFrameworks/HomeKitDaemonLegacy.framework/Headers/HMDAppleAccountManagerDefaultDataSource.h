// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEACCOUNTMANAGERDEFAULTDATASOURCE_H
#define HMDAPPLEACCOUNTMANAGERDEFAULTDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol HMDAppleAccountManagerDataSource, HMDACAccountStore, HMDAPSConnection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAppleAccountManagerDefaultDataSource : NSObject <HMDAppleAccountManagerDataSource>



@property (readonly) NSObject<HMDACAccountStore> *accountStore; // ivar: _accountStore
@property (readonly) NSObject<HMDAPSConnection> *apsConnection; // ivar: _apsConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;


@end


#endif