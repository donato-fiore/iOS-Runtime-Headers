// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POCONFIGURATIONMANAGER_H
#define POCONFIGURATIONMANAGER_H

@class NSString, NSData;
@protocol POJWKSStorageProvider;

#import <Foundation/Foundation.h>

#import "PODaemonConnection.h"
#import "PODeviceConfiguration.h"
#import "POLoginConfiguration.h"
#import "POUserConfiguration.h"
#import "PODirectoryServices.h"
#import "POKeychainHelper.h"
#import "POConfigurationVersion.h"

@interface POConfigurationManager : NSObject <POJWKSStorageProvider>

 {
    PODaemonConnection *_serviceConnection;
}


@property (readonly) PODeviceConfiguration *currentDeviceConfiguration; // ivar: _currentDeviceConfiguration
@property (readonly) POLoginConfiguration *currentLoginConfiguration; // ivar: _currentLoginConfiguration
@property (readonly) POUserConfiguration *currentUserConfiguration; // ivar: _currentUserConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PODirectoryServices *directoryServices; // ivar: _directoryServices
@property (readonly) NSUInteger hash;
@property (retain) NSData *jwksCache;
@property (retain) POKeychainHelper *keychainHelper; // ivar: _keychainHelper
@property (readonly) Class superclass;
@property (readonly) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly) NSString *userName; // ivar: _userName
@property (retain) POConfigurationVersion *version; // ivar: _version


+(id)sharedInstance;
-(BOOL)removeDeviceConfigurationForExtension:(id)arg0 ;
-(BOOL)removeLoginConfigurationForExtension:(id)arg0 ;
-(BOOL)removeUserConfigurationForUserName:(id)arg0 ;
-(BOOL)resetStoredConfiguration;
-(BOOL)saveCurrentUserConfiguration;
-(BOOL)saveDeviceConfiguration:(id)arg0 forExtension:(id)arg1 ;
-(BOOL)saveLoginConfiguration:(id)arg0 forExtension:(id)arg1 ;
-(BOOL)saveUserConfiguration:(id)arg0 forUserName:(id)arg1 ;
-(id)deviceConfigurationForExtension:(id)arg0 ;
-(id)initWithUserName:(id)arg0 ;
-(id)jwksCacheForExtensionIdentifier:(id)arg0 ;
-(id)loginConfigurationForExtension:(id)arg0 ;
-(id)userConfigurationForUserName:(id)arg0 ;
-(id)userConfigurationForUserName:(id)arg0 passwordContext:(id)arg1 ;
-(void)enableScreensaverRuleIfNeeded:(id)arg0 ;
-(void)restoreScreensaverRuleIfNeeded;


@end


#endif