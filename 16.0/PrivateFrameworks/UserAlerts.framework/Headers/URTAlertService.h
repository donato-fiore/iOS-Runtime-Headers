// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef URTALERTSERVICE_H
#define URTALERTSERVICE_H

@class NSMutableArray, NSString, BSServiceConnectionListener;
@protocol BSServiceConnectionListenerDelegate, BSInvalidatable, OS_dispatch_queue, URTAlertServiceDelegate;

#import <Foundation/Foundation.h>

#import "URTAlertServiceDelegateProxy.h"

@interface URTAlertService : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, nonatomic) NSMutableArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<URTAlertServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) URTAlertServiceDelegateProxy *delegateProxy; // ivar: _delegateProxy
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSObject<BSInvalidatable> *domainActivationToken; // ivar: _domainActivationToken
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSServiceConnectionListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(id)_connectionQueue_alertConnectionForConnection:(id)arg0 ;
-(id)initWithDomain:(id)arg0 ;
-(void)_connectionQueue_addConnection:(id)arg0 ;
-(void)_connectionQueue_dismissAlert:(id)arg0 forConnection:(id)arg1 ;
-(void)_connectionQueue_presentAlert:(id)arg0 forConnection:(id)arg1 ;
-(void)_connectionQueue_removeConnection:(id)arg0 ;
-(void)_performClientActionForAlert:(id)arg0 clientAction:(id)arg1 ;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif