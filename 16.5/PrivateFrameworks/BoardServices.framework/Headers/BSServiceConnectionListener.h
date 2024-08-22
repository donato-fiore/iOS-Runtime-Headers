// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSSERVICECONNECTIONLISTENER_H
#define BSSERVICECONNECTIONLISTENER_H

@class NSString;
@protocol BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable, BSServiceConnectionListenerDelegate;

#import <Foundation/Foundation.h>

#import "BSServiceManager.h"
#import "BSServiceConnectionEndpoint.h"

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable>

 {
    BSServiceManager *_manager;
    os_unfair_lock_s _lock;
    id<BSServiceConnectionListenerDelegate> *_lock_delegate;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    os_unfair_lock_s _registrationLock;
    id<BSInvalidatable> *_registrationLock_assertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *instance; // ivar: _instance
@property (readonly, copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


+(id)extendBootstrap;
+(id)listenerWithConfigurator:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)dealloc;
-(void)didReceiveConnection:(id)arg0 ;
-(void)invalidate;
-(void)setDelegate:(id)arg0 ;


@end


#endif