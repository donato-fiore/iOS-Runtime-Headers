// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCAPABILITYSERVICE_H
#define COCAPABILITYSERVICE_H

@class NSDictionary, NSString, NSSet;
@protocol COCapabilityAddOnDelegate, COCapabilityManagerServiceInterface;


#import "COService.h"

@interface COCapabilityService : COService <COCapabilityAddOnDelegate, COCapabilityManagerServiceInterface>



@property (copy, nonatomic) NSDictionary *availableCapabilities; // ivar: _availableCapabilities
@property (copy, nonatomic) NSDictionary *capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedCapabilities; // ivar: _supportedCapabilities


+(id)serviceWithDelegate:(id)arg0 ;
-(BOOL)_canRequestCreationOfCluster:(id)arg0 ;
-(BOOL)_isCapabilityAvailable:(id)arg0 inCluster:(id)arg1 ;
-(BOOL)_isCapabilitySupported:(id)arg0 ;
-(id)_getEffectiveCapabilitiesForCluster:(id)arg0 ;
-(id)_remoteInterfaceForClient:(id)arg0 withErrorHandler:(id)arg1 ;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_clientLost:(id)arg0 ;
-(void)_cluster:(id)arg0 availableCapabilitiesChanged:(id)arg1 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)_diffCapabilities:(id)arg0 withCapabilities:(id)arg1 result:(id)arg2 ;
-(void)_effectiveCapabilitiesForCluster:(id)arg0 changedFrom:(id)arg1 to:(id)arg2 ;
-(void)_notifyClient:(id)arg0 availability:(BOOL)arg1 ofCapability:(id)arg2 inCluster:(id)arg3 ;
-(void)_notifyObserversAvailabilityChangedOfCapability:(id)arg0 inCluster:(id)arg1 ;
-(void)_updateSupportedCapabilities;
-(void)addMesh:(id)arg0 forCluster:(id)arg1 completion:(id)arg2 ;
-(void)addObserverForCapability:(id)arg0 inCluster:(id)arg1 ;
-(void)addOn:(id)arg0 availableCapabilitiesChanged:(id)arg1 ;
-(void)registerCapability:(id)arg0 ;
-(void)removeObserverForCapability:(id)arg0 inCluster:(id)arg1 ;
-(void)unregisterCapability:(id)arg0 ;


@end


#endif