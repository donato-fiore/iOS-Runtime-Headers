// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULECLOUDZONEFETCHINFO_H
#define HMDNETWORKROUTERFIREWALLRULECLOUDZONEFETCHINFO_H

@class CKServerChangeToken, NSString, NSSet, HMBLocalZoneMirrorInput;
@protocol HMFLogging;


#import "HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h"

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging>



@property (retain, nonatomic) CKServerChangeToken *changeToken; // ivar: _changeToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *interestedRecordIDs; // ivar: _interestedRecordIDs
@property (retain, nonatomic) HMBLocalZoneMirrorInput *mirrorInput; // ivar: _mirrorInput
@property (readonly, nonatomic) CKServerChangeToken *originalChangeToken; // ivar: _originalChangeToken
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithOptions:(id)arg0 changeToken:(id)arg1 promise:(id)arg2 database:(id)arg3 useAnonymousRequests:(BOOL)arg4 interestedRecordIDs:(id)arg5 mirrorInput:(id)arg6 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif