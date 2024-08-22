// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AIRPLAYCONTROLLERSERVER_H
#define AIRPLAYCONTROLLERSERVER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, AirPlayControllerAsync, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync>

 {
    NSString *_serviceName;
    NSXPCListener *_xpcListener;
}


@property (copy, nonatomic) id *copyPropertyBlock; // ivar: _copyPropertyBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _queue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *performCommandBlock; // ivar: _performCommandBlock
@property (copy, nonatomic) id *setPropertyBlock; // ivar: _setPropertyBlock
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)_connectionInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)getProperty:(id)arg0 qualifier:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)performCommand:(id)arg0 qualifier:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)postEvent:(id)arg0 qualifier:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)setProperty:(id)arg0 qualifier:(id)arg1 value:(id)arg2 completion:(id)arg3 ;
-(void)startWithXPCName:(id)arg0 ;


@end


#endif