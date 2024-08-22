// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSUTILITYSERVICE_H
#define CLSUTILITYSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CLSEndpointConnection.h"

@interface CLSUtilityService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CLSEndpointConnection *endpointConnection; // ivar: _endpointConnection


+(Class)endpointClass;
+(id)sharedInstance;
-(id)initWithEndpoint:(id)arg0 ;
-(id)syncUtilityServer:(id)arg0 ;
-(id)utilityServer:(id)arg0 ;
-(void)addAdminRequestor:(id)arg0 completion:(id)arg1 ;
-(void)addAuthorizationStatus:(NSUInteger)arg0 forContextAtPath:(id)arg1 completion:(id)arg2 ;
-(void)addAuthorizationStatus:(NSUInteger)arg0 forHandoutAssignedItem:(id)arg1 completion:(id)arg2 ;
-(void)addOrganization:(id)arg0 withLocations:(id)arg1 completion:(id)arg2 ;
-(void)authorizationStatusForContextAtPath:(id)arg0 completion:(id)arg1 ;
-(void)authorizationStatusForHandoutAssignedItem:(id)arg0 completion:(id)arg1 ;
-(void)databasePathWithCompletion:(id)arg0 ;
-(void)deleteOrganization:(id)arg0 completion:(id)arg1 ;
-(void)fetchReportsWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)getClassKitCatalogEnvironmentWithCompletion:(id)arg0 ;
-(void)getDevModeWithCompletion:(id)arg0 ;
-(void)recreateDatabase:(BOOL)arg0 andTerminateDaemonWithCompletion:(id)arg1 ;
-(void)recreateDatabaseWithCompletion:(id)arg0 ;
-(void)recreateDevelopmentDatabaseWithCompletion:(id)arg0 ;
-(void)removeAuthorizationStatus:(NSUInteger)arg0 forContextAtPath:(id)arg1 completion:(id)arg2 ;
-(void)removeAuthorizationStatus:(NSUInteger)arg0 forHandoutAssignedItem:(id)arg1 completion:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(id)arg0 ;
-(void)setClassKitCatalogEnvironment:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setDevMode:(int)arg0 completion:(id)arg1 ;
-(void)statusWithCompletion:(id)arg0 ;
-(void)syncFetchWithCompletion:(id)arg0 ;
-(void)syncGetClassKitCatalogEnvironmentWithCompletion:(id)arg0 ;
-(void)syncGetDevModeWithCompletion:(id)arg0 ;
-(void)syncPushWithCompletion:(id)arg0 ;
-(void)syncRecreateDevelopmentDatabaseWithCompletion:(id)arg0 ;
-(void)syncSetClassKitCatalogEnvironment:(NSInteger)arg0 completion:(id)arg1 ;
-(void)syncSetDevMode:(int)arg0 completion:(id)arg1 ;
-(void)syncStatsWithCompletion:(id)arg0 ;


@end


#endif