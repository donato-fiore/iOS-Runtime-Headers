// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BSSERVICECONNECTIONCONFIGURATION_H
#define _BSSERVICECONNECTIONCONFIGURATION_H

@class NSString;
@protocol BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue, OS_xpc_object, NSCopying, OS_dispatch_queue, BSServiceDispatchingQueue;

#import <Foundation/Foundation.h>

#import "BSServiceQuality.h"
#import "BSServiceInterface.h"

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue>

 {
    *os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_clientContext;
    id<NSCopying> *_userInfo;
    NSString *_name;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id *_target;
    id *_activationHandler;
    id *_interruptionHandler;
    id *_invalidationHandler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> *_targetDispatchingQueue;
    id *_messageHandler;
    id *_errorHandler;
}




-(id)interface;
-(void)setActivationHandler:(id)arg0 ;
-(void)setErrorHandler:(id)arg0 ;
-(void)setInterface:(id)arg0 ;
-(void)setInterfaceTarget:(id)arg0 ;
-(void)setInterruptionHandler:(id)arg0 ;
-(void)setInvalidationHandler:(id)arg0 ;
-(void)setMessageHandler:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setServiceQuality:(id)arg0 ;
-(void)setTargetDispatchingQueue:(id)arg0 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif