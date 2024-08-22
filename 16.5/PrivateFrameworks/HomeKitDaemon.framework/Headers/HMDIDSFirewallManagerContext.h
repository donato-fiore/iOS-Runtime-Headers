// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSFIREWALLMANAGERCONTEXT_H
#define HMDIDSFIREWALLMANAGERCONTEXT_H

@class HMFObject, NSString, IDSFirewall, NSNotificationCenter, NSArray;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDIDSFirewallManager.h"
#import "HMDHomeManager.h"

@interface HMDIDSFirewallManagerContext : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) IDSFirewall *firewall; // ivar: _firewall
@property (weak) HMDIDSFirewallManager *firewallManager; // ivar: _firewallManager
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *userIDs;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 IDSFirewall:(id)arg1 notificationCenter:(id)arg2 workQueue:(id)arg3 ;
-(void)addFirewallEntries:(id)arg0 ;
-(void)configure;
-(void)handleHomeAddedNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handleHomeUserAddedNotification:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)registerForHomeUserNotifications;
-(void)replaceFireWallEntries:(id)arg0 ;


@end


#endif