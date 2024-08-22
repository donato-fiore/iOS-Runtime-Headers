// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPDISCOVERY_H
#define RPDISCOVERY_H

@class NSMutableDictionary, NSXPCConnection, NSArray, NSString;
@protocol NSSecureCoding, RPCompanionLinkXPCClientInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPDiscovery : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface>

 {
    BOOL _activateCalled;
    NSMutableDictionary *_endpointMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (copy, nonatomic) id *changedHandler; // ivar: _changedHandler
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *foundHandler; // ivar: _foundHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *lostHandler; // ivar: _lostHandler
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession


+(BOOL)supportsSecureCoding;
-(BOOL)_ensureXPCStarted;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_lostAllEndpoints;
-(void)_scheduleRetry;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)xpcDiscoveryChangedEndpoint:(id)arg0 ;
-(void)xpcDiscoveryFoundEndpoint:(id)arg0 ;
-(void)xpcDiscoveryLostEndpoint:(id)arg0 ;


@end


#endif