// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTIDENTITY_H
#define MCMCLIENTIDENTITY_H

@class NSURL;
@protocol MCMAllows, NSCopying, MCMClientCodeSignInfo;

#import <Foundation/Foundation.h>

#import "MCMPOSIXUser.h"
#import "MCMUserIdentity.h"

@interface MCMClientIdentity : NSObject <MCMAllows, NSCopying>



@property (readonly, nonatomic) BOOL cached; // ivar: _cached
@property (readonly, nonatomic) NSObject<MCMClientCodeSignInfo> *codeSignInfo; // ivar: _codeSignInfo
@property (readonly, nonatomic) ? effectiveAuditToken; // ivar: _effectiveAuditToken
@property (readonly, nonatomic, getter=isKernel) BOOL kernel; // ivar: _kernel
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform
@property (readonly, nonatomic) int posixPID; // ivar: _posixPID
@property (readonly, nonatomic) MCMPOSIXUser *posixUser; // ivar: _posixUser
@property (readonly, nonatomic) ? realAuditToken; // ivar: _realAuditToken
@property (readonly, nonatomic) NSURL *sandboxContainerURL; // ivar: _sandboxContainerURL
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed; // ivar: _sandboxed
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity


+(id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)arg0 ;
+(id)privilegedClientIdentityWithUserIdentity:(id)arg0 kernel:(BOOL)arg1 ;
-(BOOL)isAllowedToAccessCodesignMapping;
-(BOOL)isAllowedToAccessInfoMetadata;
-(BOOL)isAllowedToAccessUserAssets;
-(BOOL)isAllowedToChangeReferences;
-(BOOL)isAllowedToControlCaches;
-(BOOL)isAllowedToDelete;
-(BOOL)isAllowedToLookupAllContainersOfClass:(NSUInteger)arg0 ;
-(BOOL)isAllowedToLookupContainerIdentity:(id)arg0 ;
-(BOOL)isAllowedToLookupGroupContainersOfClass:(NSUInteger)arg0 ownedByIdentifier:(id)arg1 ;
-(BOOL)isAllowedToReadReferences;
-(BOOL)isAllowedToRecreateContainerStructure;
-(BOOL)isAllowedToRegenerateDirectoryUUIDs;
-(BOOL)isAllowedToReplaceContainers;
-(BOOL)isAllowedToRestoreContainer;
-(BOOL)isAllowedToSetDataProtection;
-(BOOL)isAllowedToStageSharedContent;
-(BOOL)isAllowedToStartDataMigration;
-(BOOL)isAllowedToStartUserDataMigration;
-(BOOL)isAllowedToTest;
-(BOOL)isAllowedToWipeAnyDataContainer;
-(BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg0 ;
-(BOOL)needsSandboxExtensionForContainerWithClass:(NSUInteger)arg0 identifier:(id)arg1 ;
-(char *)issueSandboxExtensionWithMetadata:(id)arg0 forceIssue:(BOOL)arg1 error:(*NSUInteger)arg2 ;
-(id)clientIdentityByChangingCached:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initInternal;
-(id)initWithPOSIXUser:(id)arg0 POSIXPID:(int)arg1 platform:(unsigned int)arg2 userIdentity:(id)arg3 effectiveAuditToken:(struct ? )arg4 realAuditToken:(struct ? )arg5 codeSignInfo:(id)arg6 sandboxed:(BOOL)arg7 sandboxContainerURL:(id)arg8 kernel:(BOOL)arg9 ;
-(id)shortDescription;
-(struct container_client *)createLibsystemClient;


@end


#endif