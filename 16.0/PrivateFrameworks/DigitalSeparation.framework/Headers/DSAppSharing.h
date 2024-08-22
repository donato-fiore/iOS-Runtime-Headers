// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSAPPSHARING_H
#define DSAPPSHARING_H

@class HKAuthorizationStore, HKHealthStore;
@protocol DSTCCStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DSAppSharing : NSObject

@property (retain, nonatomic) HKAuthorizationStore *authorizationStore; // ivar: _authorizationStore
@property (retain, nonatomic) HKHealthStore *healthKitStore; // ivar: _healthKitStore
@property (retain, nonatomic) NSObject<DSTCCStore> *tccStore; // ivar: _tccStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)deleteApp:(id)arg0 forTest:(BOOL)arg1 ;
-(id)initWithTCCStore:(id)arg0 ;
-(id)newDictionaryWithApps:(id)arg0 ;
-(id)removeAppsWithNoPermissions:(id)arg0 ;
-(void)addApp:(id)arg0 toMap:(id)arg1 withLocationAuthorization:(NSUInteger)arg2 ;
-(void)addApp:(id)arg0 toMap:(id)arg1 withService:(id)arg2 ;
-(void)addHealthPermissionsToAppMap:(id)arg0 handler:(id)arg1 ;
-(void)addLocalNetworkPermissionsToAppMap:(id)arg0 handler:(id)arg1 ;
-(void)addLocationPermissions:(id)arg0 ;
-(void)addTCCPermissionsToAppMap:(id)arg0 handler:(id)arg1 ;
-(void)approvedBundleIdForKappa:(id)arg0 handler:(id)arg1 ;
-(void)collectAppsWithAccessToService:(id)arg0 appMap:(id)arg1 completionHandler:(id)arg2 ;
-(void)collectPermissionsForApps:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)resetBackgroundAppRefresh:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)resetHealthPermissionsForApp:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)resetPermission:(id)arg0 forApp:(id)arg1 handler:(id)arg2 ;
-(void)resetPermission:(id)arg0 forApps:(id)arg1 handler:(id)arg2 ;
-(void)resetPermissions:(id)arg0 forApps:(id)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)resetShortcutsAutomationTimer:(id)arg0 handler:(id)arg1 ;


@end


#endif