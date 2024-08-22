// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPPRIVATEDISCOVERY_H
#define RPPRIVATEDISCOVERY_H

@class NSXPCConnection, NSString;
@protocol NSSecureCoding, RPPrivateDiscoveryXPCClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPPrivateDiscovery : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface>

 {
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *endpointChangedHandler; // ivar: _endpointChangedHandler
@property (copy, nonatomic) id *endpointFoundHandler; // ivar: _endpointFoundHandler
@property (copy, nonatomic) id *endpointLostHandler; // ivar: _endpointLostHandler
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activateDirect;
-(void)_activateXPC:(BOOL)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidateDirect;
-(void)_invalidated;
-(void)_update;
-(void)_updateIfNeededWithBlock:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)xpcPrivateDiscoveryEndpointChanged:(id)arg0 ;
-(void)xpcPrivateDiscoveryEndpointFound:(id)arg0 ;
-(void)xpcPrivateDiscoveryEndpointLost:(id)arg0 ;


@end


#endif