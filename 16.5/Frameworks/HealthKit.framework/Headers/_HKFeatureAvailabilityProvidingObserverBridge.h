// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKFEATUREAVAILABILITYPROVIDINGOBSERVERBRIDGE_H
#define _HKFEATUREAVAILABILITYPROVIDINGOBSERVERBRIDGE_H

@class NSString;
@protocol HKFeatureAvailabilityProvidingObserver;

#import <Foundation/Foundation.h>

#import "HKObserverBridgeHandle.h"

@interface _HKFeatureAvailabilityProvidingObserverBridge : NSObject <HKFeatureAvailabilityProvidingObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKObserverBridgeHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHandle:(id)arg0 ;
-(void)_notifyObserversWithFeatureAvailabilityProviding:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;


@end


#endif