// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCCLIENTPRIVILEGESDESCRIPTOR_H
#define BRCCLIENTPRIVILEGESDESCRIPTOR_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface BRCClientPrivilegesDescriptor : NSObject {
    NSString *_debugIdentifier;
    char _cloudEnabledStatusWithoutLogOutStatus;
    BOOL _canGetApplicationInfo;
}


@property (readonly, nonatomic) NSSet *appLibraryIDs; // ivar: _appLibraryIDs
@property (readonly, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) BOOL canFetchUserQuota;
@property (readonly, nonatomic) NSString *defaultAppLibraryID; // ivar: _defaultAppLibraryID
@property (readonly, nonatomic) BOOL hasAuditToken; // ivar: _hasAuditToken
@property (readonly, nonatomic) BOOL isAllowedToAccessAnyCloudService; // ivar: _isAllowedToAccessAnyCloudService
@property (readonly, nonatomic) BOOL isAutomationEntitled; // ivar: _isAutomationEntitled
@property (readonly, nonatomic) BOOL isFolderSharingProxyEntitled; // ivar: _isFolderSharingProxyEntitled
@property (readonly, nonatomic) BOOL isNonAppSandboxed; // ivar: _isNonAppSandboxed
@property (readonly, nonatomic) BOOL isProxyEntitled; // ivar: _isProxyEntitled
@property (readonly, nonatomic) BOOL isSharingPrivateInterfaceEntitled; // ivar: _isSharingPrivateInterfaceEntitled
@property (readonly, nonatomic) BOOL isSharingProxyEntitled; // ivar: _isSharingProxyEntitled


+(BOOL)_isNonSandboxedForAuditToken:(struct ? )arg0 ;
-(BOOL)hasPid;
-(char)_computeCloudEnabledStatusWithoutLogOutStatus;
-(char)cloudEnabledStatusForSession:(id)arg0 ;
-(id)description;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithNonSandboxedAppWithAppLibraryIDs:(id)arg0 bundleID:(id)arg1 auditToken:(struct ? )arg2 ;
-(int)pid;
-(void)_finishSetupWithClientContainerIDs:(id)arg0 ;
-(void)updateCloudEnabledStatus;


@end


#endif