// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENXPCSERVICELISTENER_H
#define ENXPCSERVICELISTENER_H

@class NSMutableSet;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENXPCServiceListener : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_xpc_object> *_xpcListener;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;


+(id)sharedServiceListener;
-(id)_init;
-(id)initAnonymousListener;
-(void)activate;
-(void)connectionInvalidated:(id)arg0 ;
-(void)invalidate;
-(void)main;
-(void)xpcConnectionAccept:(id)arg0 ;
-(void)xpcListenerEvent:(id)arg0 ;


@end


#endif