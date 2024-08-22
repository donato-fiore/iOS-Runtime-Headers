// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PODAEMONCONNECTION_H
#define PODAEMONCONNECTION_H

@class NSString, NSXPCConnection;
@protocol PODaemonProtocol;

#import <Foundation/Foundation.h>


@interface PODaemonConnection : NSObject <PODaemonProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)xpcQueue;
-(BOOL)_connectToService;
-(id)init;
-(void)dealloc;
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