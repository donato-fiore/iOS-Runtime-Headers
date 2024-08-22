// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPPEOPLEDISCOVERY_H
#define RPPEOPLEDISCOVERY_H

@class NSMutableDictionary, NSMutableSet, NSXPCConnection, NSArray, NSSet;
@protocol NSSecureCoding, RPPeopleXPCClientInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface>

 {
    BOOL _activateCalled;
    NSMutableDictionary *_discoveredPeople;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableSet *_rangingPersonIDs;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSXPCConnection *_xpcCnx;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (readonly, copy, nonatomic) NSArray *discoveredPeople;
@property (nonatomic) unsigned int discoveryFlags; // ivar: _discoveryFlags
@property (nonatomic) int discoveryMode; // ivar: _discoveryMode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) int peopleDensity; // ivar: _peopleDensity
@property (copy, nonatomic) id *peopleDensityChangedHandler; // ivar: _peopleDensityChangedHandler
@property (copy, nonatomic) id *personChangedHandler; // ivar: _personChangedHandler
@property (copy, nonatomic) id *personFoundHandler; // ivar: _personFoundHandler
@property (copy, nonatomic) id *personLostHandler; // ivar: _personLostHandler
@property (copy, nonatomic) NSSet *rangingPeople; // ivar: _rangingPeople
@property (copy, nonatomic) id *statusChangedHandler; // ivar: _statusChangedHandler
@property (readonly, nonatomic) unsigned int statusFlags; // ivar: _statusFlags
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
-(void)_invokeBlockActivateSafe:(id)arg0 ;
-(void)_lostAllPeople;
-(void)_scheduleRetry;
-(void)_updatePeopleDensity:(NSUInteger)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addAppleID:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)removeAppleID:(id)arg0 completion:(id)arg1 ;
-(void)xpcPeopleStatusChanged:(unsigned int)arg0 ;
-(void)xpcPersonChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)xpcPersonFound:(id)arg0 ;
-(void)xpcPersonID:(id)arg0 deviceID:(id)arg1 updatedMeasurement:(id)arg2 ;
-(void)xpcPersonLost:(id)arg0 ;


@end


#endif