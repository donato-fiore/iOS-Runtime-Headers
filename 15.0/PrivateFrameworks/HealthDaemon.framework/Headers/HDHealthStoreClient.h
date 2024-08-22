// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHSTORECLIENT_H
#define HDHEALTHSTORECLIENT_H

@class HDXPCClient, HKHealthStoreConfiguration, NSXPCConnection, NSString, _HKEntitlements, HDXPCProcess;

#import <Foundation/Foundation.h>

#import "HDClientAuthorizationOracle.h"
#import "HDProfile.h"

@interface HDHealthStoreClient : NSObject

@property (readonly) HDXPCClient *XPCClient; // ivar: _XPCClient
@property (readonly) HDClientAuthorizationOracle *authorizationOracle; // ivar: _authorizationOracle
@property (readonly, copy) HKHealthStoreConfiguration *configuration; // ivar: _configuration
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier; // ivar: _defaultSourceBundleIdentifier
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDXPCProcess *process;
@property (readonly) HDProfile *profile; // ivar: _profile
@property (readonly, copy) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly, copy) NSString *sourceVersion; // ivar: _sourceVersion


-(BOOL)hasArrayEntitlement:(id)arg0 containing:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasPrivateMetadataAccess;
-(BOOL)hasRequiredArrayEntitlement:(id)arg0 containing:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasRequiredEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldBypassAuthorization;
-(BOOL)verifyHealthRecordsPermissionGrantedWithError:(*id)arg0 ;
-(id)baseDataEntityEncodingOptions;
-(id)filterWithQueryFilter:(id)arg0 objectType:(id)arg1 ;
-(id)initWithXPCClient:(id)arg0 configuration:(id)arg1 profile:(id)arg2 ;
-(id)valueForEntitlement:(id)arg0 ;


@end


#endif