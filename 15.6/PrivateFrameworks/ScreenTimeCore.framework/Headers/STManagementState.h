// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMANAGEMENTSTATE_H
#define STMANAGEMENTSTATE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STManagementState : NSObject

@property BOOL cachedIsRestrictionsPasscodeSet; // ivar: _cachedIsRestrictionsPasscodeSet
@property BOOL cachedShouldRequestMoreTime; // ivar: _cachedShouldRequestMoreTime
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly) BOOL contactsEditable; // ivar: _contactsEditable
@property (readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
@property (readonly) BOOL needsToSetRestrictionsPasscode;
@property (readonly, nonatomic) BOOL shouldRequestMoreTime;


-(BOOL)clearRestrictionsPasscodeWithError:(*id)arg0 ;
-(BOOL)enableScreenTimeForDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)performMigrationFromMCXSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)permitWebFilterURL:(id)arg0 pageTitle:(id)arg1 error:(*id)arg2 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(id)communicationPoliciesWithError:(*id)arg0 ;
-(id)init;
-(id)primaryiCloudCardDAVAccountIdentifierWithError:(*id)arg0 ;
-(id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)shouldAllowOneMoreMinuteForWebDomain:(id)arg0 error:(*id)arg1 ;
-(void)communicationPoliciesForDSID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)communicationPoliciesWithCompletionHandler:(id)arg0 ;
-(void)contactManagementStateForDSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)isExplicitContentRestricted:(id)arg0 ;
-(void)isRestrictionsPasscodeSet:(id)arg0 ;
-(void)requestToManageContactsForDSID:(id)arg0 completionHandler:(id)arg1 ;
-(void)screenTimeStateWithCompletionHandler:(id)arg0 ;
-(void)screenTimeSyncStateWithCompletionHandler:(id)arg0 ;
-(void)setManageContactsEnabled:(BOOL)arg0 forDSID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScreenTimeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)shouldRequestMoreTime:(id)arg0 ;


@end


#endif