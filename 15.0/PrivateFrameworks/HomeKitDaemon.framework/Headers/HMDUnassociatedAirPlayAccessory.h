// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUNASSOCIATEDAIRPLAYACCESSORY_H
#define HMDUNASSOCIATEDAIRPLAYACCESSORY_H

@class NSString, HMFPairingIdentity;
@protocol HMFLogging, HMDAccessoryAssociation;


#import "HMDUnassociatedMediaAccessory.h"

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAssociation;


+(id)logCategory;
+(id)modelForChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
-(id)addTransactionForHome:(id)arg0 configurationAppIdentifier:(id)arg1 ;
-(id)logIdentifier;
-(void)associateToHome:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif