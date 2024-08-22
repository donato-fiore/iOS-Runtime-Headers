// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIHELPERSERVICEFRAMEWORKCLIENT_H
#define MIHELPERSERVICEFRAMEWORKCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MIHelperServiceFrameworkClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedInstance;
-(BOOL)createWrappedAppForInstalledBundleIdentifier:(id)arg0 atTargetURL:(id)arg1 installationInfo:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(BOOL)createWrappedAppForInstalledBundleIdentifier:(id)arg0 atTargetURL:(id)arg1 installationRecords:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)arg0 keepStagingDirectory:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)removeDeveloperAppAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeWrappedAppWithBundleID:(id)arg0 atURL:(id)arg1 error:(*id)arg2 ;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_sharedConnection;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)createWrappedAppForInstalledBundleIdentifier:(id)arg0 inTargetDirectory:(id)arg1 installationInfo:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(id)createWrappedAppForInstalledBundleIdentifier:(id)arg0 inTargetDirectory:(id)arg1 installationRecords:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(id)installMacDeveloperAppAtURL:(id)arg0 toURL:(id)arg1 targetURLType:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)updateWrappedAppAt:(id)arg0 forInstalledBundleIdentifier:(id)arg1 installationInfo:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(id)updateWrappedAppAt:(id)arg0 forInstalledBundleIdentifier:(id)arg1 installationRecords:(id)arg2 onBehalfOf:(struct ? )arg3 error:(*id)arg4 ;
-(void)_invalidateObject;
-(void)dealloc;


@end


#endif