// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDIDSFIREWALLMANAGER_H
#define HMDIDSFIREWALLMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDIDSFirewallManagerContext.h"

@interface HMDIDSFirewallManager : HMFObject <HMFLogging>



@property (readonly) HMDIDSFirewallManagerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)firewallEntriesForUserIDs:(id)arg0 ;
+(id)logCategory;
-(id)initWithContext:(id)arg0 ;
-(void)addFireWallEntryForUserIDs:(id)arg0 ;
-(void)handleDidAddHome;
-(void)handleDidAddUserWithUserID:(id)arg0 ;
-(void)handleDidRemoveHome;
-(void)handleDidRemoveUser;
-(void)replaceFireWallEntriesWithUserIDs:(id)arg0 ;
-(void)start;


@end


#endif