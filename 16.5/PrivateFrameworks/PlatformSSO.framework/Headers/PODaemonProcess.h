// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PODAEMONPROCESS_H
#define PODAEMONPROCESS_H

@class NSXPCConnection, NSString;
@protocol PODaemonProtocol;

#import <Foundation/Foundation.h>

#import "POKeyWrap.h"

@interface PODaemonProcess : NSObject <PODaemonProtocol>

 {
    NSXPCConnection *_xpcConnection;
}


@property BOOL dataVaultInitialized; // ivar: _dataVaultInitialized
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain) POKeyWrap *keyWrap; // ivar: _keyWrap
@property (readonly) Class superclass;


-(BOOL)_initDataVaultIfNeededWithError:(*id)arg0 ;
-(id)_defaultConfigurationPath;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)connectionInvalidated;
-(void)deviceConfigurationForExtension:(id)arg0 completion:(id)arg1 ;
-(void)disablePlatformSSORuleForScreensaver:(id)arg0 ;
-(void)enablePlatformSSORuleForScreensaver:(id)arg0 ;
-(void)loginConfigurationForExtension:(id)arg0 completion:(id)arg1 ;
-(void)removeDeviceConfigurationForExtension:(id)arg0 completion:(id)arg1 ;
-(void)removeLoginConfigurationForExtension:(id)arg0 completion:(id)arg1 ;
-(void)removeUserConfigurationForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetStoredConfigurationWithCompletion:(id)arg0 ;
-(void)saveDeviceConfiguration:(id)arg0 forExtension:(id)arg1 completion:(id)arg2 ;
-(void)saveLoginConfiguration:(id)arg0 forExtension:(id)arg1 completion:(id)arg2 ;
-(void)saveUserConfiguration:(id)arg0 forIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)userConfigurationForIdentifier:(id)arg0 passwordContext:(id)arg1 completion:(id)arg2 ;


@end


#endif