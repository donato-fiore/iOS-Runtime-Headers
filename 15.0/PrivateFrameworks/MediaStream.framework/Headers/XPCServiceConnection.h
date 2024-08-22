// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XPCSERVICECONNECTION_H
#define XPCSERVICECONNECTION_H

@class NSString;
@protocol OS_xpc_object, NSObject, XPCServiceConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "XPCServiceListener.h"

@interface XPCServiceConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *client; // ivar: _client
@property (retain, nonatomic) NSObject<NSObject> *context; // ivar: _context
@property (weak, nonatomic) NSObject<XPCServiceConnectionDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) XPCServiceListener *serviceListener; // ivar: _serviceListener
@property (readonly, retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)debugDescription;
-(id)initWithServiceName:(id)arg0 client:(id)arg1 queue:(id)arg2 ;
-(void)resume;
-(void)sendMessage:(id)arg0 withHandler:(id)arg1 ;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)workQueueHandleIncomingMessage:(id)arg0 ;


@end


#endif