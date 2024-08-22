// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSENDPOINTCONNECTION_H
#define CLSENDPOINTCONNECTION_H

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;
@protocol CLSClientDelegate, NSLocking;

#import <Foundation/Foundation.h>


@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking>

 {
    os_unfair_recursive_lock_s _lock;
    NSXPCConnection *_serverConnection;
    NSXPCListenerEndpoint *_endpoint;
    BOOL _connectionBorked;
    BOOL _interrupted;
    int _progressdAvailableToken;
    int _devModeChangedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *onConnect; // ivar: _onConnect
@property (copy, nonatomic) id *onInterupt; // ivar: _onInterupt
@property (copy, nonatomic) NSString *overrideBundleIdentifier; // ivar: _overrideBundleIdentifier
@property (readonly) Class superclass;


+(BOOL)isAllowedToMakeXPCCalls;
+(BOOL)isClassKitEnabled;
+(BOOL)isInDevelopmentEnvironment;
+(id)classKitEnvironment;
+(id)instanceForEndpoint:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isBorked;
-(id)dataServer:(id)arg0 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(id)server:(id)arg0 ;
-(id)serverConnection;
-(id)syncDataServer:(id)arg0 ;
-(id)syncServer:(id)arg0 ;
-(id)syncUtilityServer:(id)arg0 ;
-(id)utilityServer:(id)arg0 ;
-(void)_registerForDarwinNotifications;
-(void)_updateBundleIdentifier:(id)arg0 forConnection:(id)arg1 completion:(id)arg2 ;
-(void)accountChanged;
-(void)addBarrierBlock:(id)arg0 ;
-(void)connect;
-(void)connectionBorked:(id)arg0 ;
-(void)connectionInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)deleteAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)devModeChanged;
-(void)invalidate;
-(void)listAppsWithCompletion:(id)arg0 ;
-(void)lock;
-(void)unlock;


@end


#endif