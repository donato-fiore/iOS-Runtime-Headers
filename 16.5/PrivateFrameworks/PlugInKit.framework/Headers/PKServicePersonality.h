// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEPERSONALITY_H
#define PKSERVICEPERSONALITY_H

@class NSDictionary, NSXPCConnection, NSString, NSUserDefaults, NSURL, NSUUID;
@protocol PKCorePlugInProtocol, PKSubsystemServicePersonality;


#import "PKPlugInCore.h"

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality>



@property (copy) NSDictionary *_userInfo;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) id *embeddedPrincipal; // ivar: _embeddedPrincipal
@property (readonly) NSUInteger hash;
@property (retain) id *hostPrincipal; // ivar: _hostPrincipal
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *plugInDictionary;
@property (retain) id *plugInPrincipal; // ivar: _plugInPrincipal
@property (retain) NSUserDefaults *preferences; // ivar: _preferences
@property (readonly) Class superclass;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;


-(CGFloat)cleanExitTimeout;
-(id)defaultPrincipalObject;
-(id)findProtocol:(id)arg0 ;
-(id)initWithConnection:(id)arg0 proxyFactory:(id)arg1 ;
-(id)setupWithIdentifier:(id)arg0 extensionPointPlatform:(unsigned int)arg1 ;
-(void)beginUsingPlugIn:(id)arg0 ready:(id)arg1 ;
-(void)hostHasControl;
-(void)prefsObjectForKey:(id)arg0 inPlugIn:(id)arg1 result:(id)arg2 ;
-(void)prefsSetObject:(id)arg0 forKey:(id)arg1 inPlugIn:(id)arg2 result:(id)arg3 ;
-(void)prepareUsing:(id)arg0 reply:(id)arg1 ;
-(void)prepareUsingPlugIn:(id)arg0 hostProtocol:(id)arg1 reply:(id)arg2 ;
-(void)shutdownPlugIn;


@end


#endif