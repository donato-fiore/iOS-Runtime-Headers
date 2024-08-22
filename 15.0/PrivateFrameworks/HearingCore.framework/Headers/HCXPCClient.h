// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HCXPCCLIENT_H
#define HCXPCCLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HCXPCClient : NSObject

@property (nonatomic) NSUInteger requestedUpdates; // ivar: _requestedUpdates
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // ivar: _xpcQueue


+(id)clientWithConnection:(id)arg0 ;
-(BOOL)sendMessage:(id)arg0 errorBlock:(id)arg1 ;
-(BOOL)wantsUpdatesForIdentifier:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)setWantsUpdates:(BOOL)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)teardownConnection;


@end


#endif