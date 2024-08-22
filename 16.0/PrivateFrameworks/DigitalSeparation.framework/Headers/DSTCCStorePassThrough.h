// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSTCCSTOREPASSTHROUGH_H
#define DSTCCSTOREPASSTHROUGH_H

@class NSString, NEConfiguration;
@protocol DSTCCStore;

#import <Foundation/Foundation.h>


@interface DSTCCStorePassThrough : NSObject <DSTCCStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NEConfiguration *pathControllerConfiguration; // ivar: _pathControllerConfiguration
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)isEntityClassApplication:(id)arg0 ;
-(BOOL)isServiceGranted:(id)arg0 forApp:(id)arg1 ;
-(NSUInteger)locationAuthorizationForApp:(id)arg0 ;
-(id)appsWithLocationService;
-(id)deleteApp:(id)arg0 forTest:(BOOL)arg1 ;
-(id)pathRuleForBundleID:(id)arg0 create:(BOOL)arg1 ;
-(id)resetTCCCategory:(id)arg0 forApp:(id)arg1 ;
-(id)resetTCCPermission:(id)arg0 forApp:(id)arg1 ;
-(void)allAppsWithLocalNetworkAccess:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)appsWithPermissionGrantedForService:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)healthAuthorizationForApp:(id)arg0 andAuthorizationStore:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)loadConfigurations:(id)arg0 handler:(id)arg1 ;
-(void)resetHealthPermissionsForApp:(id)arg0 withAuthorizationStore:(id)arg1 andCompletionHandler:(id)arg2 ;
-(void)resetLocalNetworkPermissionForApp:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)resetLocationPermissionForApp:(id)arg0 ;
-(void)saveConfiguration:(id)arg0 handler:(id)arg1 ;


@end


#endif