// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMNETWORKROUTERFIREWALLRULEMANAGER_H
#define HMNETWORKROUTERFIREWALLRULEMANAGER_H

@class HMFMessageDestination;

#import <Foundation/Foundation.h>

#import "HMHomeManager.h"

@interface HMNetworkRouterFirewallRuleManager : NSObject

@property (readonly, weak, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMFMessageDestination *messageDestination; // ivar: _messageDestination


-(id)initWithHomeManager:(id)arg0 ;
-(void)__sendMessage:(id)arg0 ;
-(void)_addOverrides:(id)arg0 replace:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dumpCloudRecordsForProductGroup:(id)arg0 productNumber:(id)arg1 rawOutput:(BOOL)arg2 listOnly:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(id)arg5 ;
-(void)_dumpLocalRulesForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)_dumpPairedMetadataForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)_fetchCloudChangesWithForceChangesFound:(BOOL)arg0 completion:(id)arg1 ;
-(void)_removeOverridesForProductGroup:(id)arg0 productNumber:(id)arg1 completion:(id)arg2 ;
-(void)addOverrides:(id)arg0 completion:(id)arg1 ;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg0 rawOutput:(BOOL)arg1 completion:(id)arg2 ;
-(void)dumpCloudRecordsForProductGroup:(id)arg0 productNumber:(id)arg1 rawOutput:(BOOL)arg2 verifySignatures:(BOOL)arg3 completion:(id)arg4 ;
-(void)dumpLocalRulesForProductGroup:(id)arg0 ignoreOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(id)arg3 ;
-(void)dumpLocalRulesForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)dumpPairedMetadataForProductGroup:(id)arg0 productNumber:(id)arg1 firmwareVersion:(id)arg2 ignoreOverrides:(BOOL)arg3 rawOutput:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchCloudChangesAndForceChangesFoundWithCompletion:(id)arg0 ;
-(void)fetchCloudChangesWithCompletion:(id)arg0 ;
-(void)listCloudRecordsForProductGroup:(id)arg0 rawOutput:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeAllLocalRulesWithCompletion:(id)arg0 ;
-(void)removeAllOverridesWithCompletion:(id)arg0 ;
-(void)removeOverridesForProductGroup:(id)arg0 productNumber:(id)arg1 completion:(id)arg2 ;
-(void)setOverrides:(id)arg0 completion:(id)arg1 ;


@end


#endif