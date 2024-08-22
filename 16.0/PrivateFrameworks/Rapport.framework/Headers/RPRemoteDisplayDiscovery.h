// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPREMOTEDISPLAYDISCOVERY_H
#define RPREMOTEDISPLAYDISCOVERY_H

@class NSMutableDictionary, NSXPCConnection, NSArray;
@protocol NSSecureCoding, RPRemoteDisplayXPCClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface>

 {
    BOOL _activateCalled;
    NSMutableDictionary *_discoveredDevices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (readonly, copy, nonatomic) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger errorFlags; // ivar: _errorFlags
@property (copy, nonatomic) id *errorFlagsChangedHandler; // ivar: _errorFlagsChangedHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


+(BOOL)supportsSecureCoding;
-(BOOL)shouldReportDevice:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidated;
-(void)_lostAllDevices;
-(void)activateWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)remoteDisplayChangedDevice:(id)arg0 changes:(unsigned int)arg1 ;
-(void)remoteDisplayFoundDevice:(id)arg0 ;
-(void)remoteDisplayLostDevice:(id)arg0 ;
-(void)remoteDisplayUpdateErrorFlags:(NSUInteger)arg0 ;


@end


#endif