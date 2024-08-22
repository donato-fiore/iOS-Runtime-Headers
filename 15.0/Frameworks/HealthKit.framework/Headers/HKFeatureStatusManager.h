// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATURESTATUSMANAGER_H
#define HKFEATURESTATUSMANAGER_H

@class NSString;
@protocol HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding, HKFeatureAvailabilityProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKFeatureStatus.h"
#import "HKFeatureAvailabilityRequirementEvaluationDataSource.h"
#import "_HKDelayedOperation.h"
#import "HKObserverSet.h"
#import "HKFeatureAvailabilityRequirementSet.h"

@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding>



@property (retain, nonatomic) HKFeatureStatus *currentFeatureStatus; // ivar: _currentFeatureStatus
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityProviding; // ivar: _featureAvailabilityProviding
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _HKDelayedOperation *notifyObserversOperation; // ivar: _notifyObserversOperation
@property (readonly, nonatomic) HKObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HKFeatureAvailabilityRequirementSet *requirements; // ivar: _requirements
@property (readonly) Class superclass;


-(id)_queue_updateFeatureStatusAndNotifyObserversWithError:(*id)arg0 ;
-(id)_requirementSatisfactionOverrides;
-(id)featureStatusWithError:(*id)arg0 ;
-(id)initWithFeatureAvailabilityProviding:(id)arg0 featureAvailabilityDataSource:(id)arg1 ;
-(id)initWithFeatureAvailabilityProviding:(id)arg0 healthDataSource:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg0 healthStore:(id)arg1 currentCountryCode:(id)arg2 ;
-(void)_notifyObserversWithFeatureStatus:(id)arg0 ;
-(void)_registerForRequirementSatisfactionOverrideChangesForRequirements:(id)arg0 ;
-(void)_updateOverriddenSatisfactionOfRequirement:(id)arg0 overriddenSatisfaction:(id)arg1 ;
-(void)_updateSatisfactionOfRequirement:(id)arg0 isSatisfied:(BOOL)arg1 ;
-(void)dealloc;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateSettings:(id)arg0 ;
-(void)featureAvailabilityRequirement:(id)arg0 didUpdateSatisfaction:(BOOL)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif