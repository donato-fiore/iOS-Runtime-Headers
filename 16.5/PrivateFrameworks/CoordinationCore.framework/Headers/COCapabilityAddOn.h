// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCAPABILITYADDON_H
#define COCAPABILITYADDON_H

@class NSSet, NSString, NSDictionary;
@protocol COCapabilityLegacyShimDelegate, COCapabilityAddOnDelegate;


#import "COMeshAddOn.h"
#import "COCapabilityLegacyShim.h"

@interface COCapabilityAddOn : COMeshAddOn <COCapabilityLegacyShimDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSSet *availableCapabilities; // ivar: _availableCapabilities
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<COCapabilityAddOnDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *gatheredCapabilities; // ivar: _gatheredCapabilities
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COCapabilityLegacyShim *pairLegacyShim; // ivar: _pairLegacyShim
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedCapabilities; // ivar: _supportedCapabilities


-(BOOL)_legacyShimOverridesAvailableCapabilities:(id)arg0 ;
-(id)init;
-(id)initWithSupportedCapabilities:(id)arg0 ;
-(void)_enableForPairLegacySupport;
-(void)_notifyDelegateCapabilitiesChanged;
-(void)_withLock:(id)arg0 ;
-(void)didAddToMeshController:(id)arg0 ;
-(void)didChangeNodesForMeshController:(id)arg0 ;
-(void)handleCapabilitiesReadRequest:(id)arg0 callback:(id)arg1 ;
-(void)handleCapabilitiesUpdateCommand:(id)arg0 ;
-(void)handleCapabilitiesUpdateNotification:(id)arg0 ;
-(void)legacyShim:(id)arg0 availableCapabilitiesChanged:(id)arg1 ;
-(void)meshController:(id)arg0 didTransitionToState:(NSUInteger)arg1 ;
-(void)performCapabilitiesUpdate;
-(void)willRemoveFromMeshController:(id)arg0 ;


@end


#endif