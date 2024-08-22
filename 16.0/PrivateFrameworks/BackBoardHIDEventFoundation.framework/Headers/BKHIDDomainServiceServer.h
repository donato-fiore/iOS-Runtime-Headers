// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDDOMAINSERVICESERVER_H
#define BKHIDDOMAINSERVICESERVER_H

@class BSServiceConnectionListener, BSServiceInterface, NSString, BSMutableIntegerMap;
@protocol BSServiceConnectionListenerDelegate, BSInvalidatable, BKHIDDomainServiceDelegate, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface BKHIDDomainServiceServer : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable>

 {
    BSServiceConnectionListener *_connectionListener;
    id<BKHIDDomainServiceDelegate> *_delegate;
    BSServiceInterface *_interface;
    id *_serviceTarget;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSString *_entitlement;
    NSString *_serviceName;
    BSMutableIntegerMap *_lock_connectionsByPID;
    os_unfair_lock_s _lock;
    atomic_flag _invalid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)connectionForPID:(int)arg0 ;
-(id)initWithDelegate:(id)arg0 serverTarget:(id)arg1 serverProtocol:(id)arg2 clientProtocol:(id)arg3 serviceName:(id)arg4 queue:(id)arg5 log:(id)arg6 entitlement:(id)arg7 ;
-(id)userInfoForConnection:(id)arg0 ;
-(void)activate;
-(void)enumerateUserInfoWithBlock:(id)arg0 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)setUserInfo:(id)arg0 forConnection:(id)arg1 ;


@end


#endif