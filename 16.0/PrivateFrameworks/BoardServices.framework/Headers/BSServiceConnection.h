// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSERVICECONNECTION_H
#define BSSERVICECONNECTION_H

@class NSString, BSAtomicSignal, RBSTarget, BSProcessHandle;
@protocol BSServiceConnectionClient, BSServiceConnectionHost, BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable, NSCopying;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnection.h"
#import "_BSServiceConnectionConfiguration.h"

@interface BSServiceConnection : NSObject <BSServiceConnectionClient, BSServiceConnectionHost, BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable>

 {
    BSXPCServiceConnection *_connection;
    NSString *_name;
    id<NSCopying> *_userInfo;
    os_unfair_lock_s _lock;
    _BSServiceConnectionConfiguration *_lock_config;
    BSAtomicSignal *_lock_activatedSignal;
    BOOL _lock_invalidated;
    BOOL _lock_noAssertInvalidatedOnDealloc;
    BOOL _requiresMessagingAfterHandshake;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *instance; // ivar: _instance
@property (readonly, nonatomic) RBSTarget *remoteAssertionTarget;
@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, nonatomic) id *remoteTarget;
@property (readonly, copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *userInfo;


// +(id)NSXPCConnectionWithEndpoint:(id)arg0 clientContextBuilder:(id)arg1 configurator:(unk)arg2  ;
+(id)NSXPCConnectionWithEndpoint:(id)arg0 configurator:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg0 ;
+(id)connectionWithEndpoint:(id)arg0 clientContextBuilder:(id)arg1 ;
+(id)currentContext;
-(id)createMessage;
-(id)createMessageWithCompletion:(id)arg0 ;
-(id)extractNSXPCConnectionWithConfigurator:(id)arg0 ;
-(id)init;
-(id)remoteTargetWithAssertionAttributes:(id)arg0 ;
-(id)remoteTargetWithLaunchingAssertionAttributes:(id)arg0 ;
-(void)_configureConnection:(id)arg0 ;
-(void)activate;
-(void)configureConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif