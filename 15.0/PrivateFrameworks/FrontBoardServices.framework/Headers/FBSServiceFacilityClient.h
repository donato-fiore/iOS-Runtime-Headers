// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSERVICEFACILITYCLIENT_H
#define FBSSERVICEFACILITYCLIENT_H

@class BSServiceConnectionEndpoint, NSString, BSServiceInterface, BSServiceConnection, BSServiceQuality;
@protocol FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable>

 {
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_facilityID;
    BSServiceInterface *_interface;
    id *_configOnly_interfaceTarget;
    os_unfair_lock_s _lock;
    BSServiceConnection *_lock_connection;
    BOOL _lock_connectionDenied;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _uisHack;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic, getter=isConfigured) BOOL configured; // ivar: _configured
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceQuality *serviceQuality; // ivar: _serviceQuality
@property (readonly) Class superclass;


+(id)defaultShellEndpoint;
-(BOOL)_isValid;
-(id)init;
-(id)initWithConfigurator:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 calloutQueue:(id)arg1 ;
-(void)_lock_activate;
-(void)_lock_invalidate;
-(void)_queue_handleError:(id)arg0 ;
-(void)_queue_handleMessage:(id)arg0 ;
-(void)activate;
-(void)configureConnectMessage:(id)arg0 ;
-(void)dealloc;
-(void)handleError:(id)arg0 ;
-(void)handleMessage:(id)arg0 withType:(NSInteger)arg1 ;
-(void)invalidate;
-(void)sendMessage:(id)arg0 withType:(NSInteger)arg1 ;
// -(void)sendMessage:(id)arg0 withType:(NSInteger)arg1 replyHandler:(id)arg2 waitForReply:(unk)arg3 timeout:(BOOL)arg4  ;
-(void)setEndpoint:(id)arg0 ;
-(void)setInterface:(id)arg0 ;
-(void)setInterfaceTarget:(id)arg0 ;


@end


#endif