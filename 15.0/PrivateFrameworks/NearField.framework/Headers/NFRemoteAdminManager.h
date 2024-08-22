// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFREMOTEADMINMANAGER_H
#define NFREMOTEADMINMANAGER_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks;

#import <Foundation/Foundation.h>


@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks>

 {
    NSXPCConnection *_connection;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedRemoteAdminManager;
-(BOOL)cancelCardIngestion;
-(BOOL)queueServerConnection:(id)arg0 ;
-(BOOL)queueServerConnectionForApplets:(id)arg0 ;
-(BOOL)setRegistrationInfo:(id)arg0 primaryRegionTopic:(id)arg1 ;
-(id)deleteAllAppletsAndCleanupWithTSM;
-(id)getAPNPublicToken;
-(id)init;
-(id)nextRequestForServer:(id)arg0 ;
-(id)primaryRegionTopic;
-(id)registrationInfo;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_connectIfNeeded;
-(void)appletStateChange:(id)arg0 ;
-(void)connectToServer:(id)arg0 callback:(id)arg1 ;
-(void)didInterruptXPCConnection:(id)arg0 ;
-(void)didInvalidateXPCConnection:(id)arg0 ;
-(void)getSELDInfoForBroker:(id)arg0 ;
-(void)ingestCard:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)readerModeCardIngestionStatus:(NSUInteger)arg0 ;
-(void)readerModeCardSessionToken:(id)arg0 ;
-(void)registerEventListener:(id)arg0 ;
-(void)remoteAdminCleanupProgress:(CGFloat)arg0 ;
-(void)unregisterEventListener:(id)arg0 ;


@end


#endif