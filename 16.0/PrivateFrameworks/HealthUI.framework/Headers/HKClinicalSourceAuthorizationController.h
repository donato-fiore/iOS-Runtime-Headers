// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALSOURCEAUTHORIZATIONCONTROLLER_H
#define HKCLINICALSOURCEAUTHORIZATIONCONTROLLER_H

@class HKAuthorizationStore, NSDate, NSError, HKHealthRecordsStore, HKHealthStore, NSArray, HKSource, NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface HKClinicalSourceAuthorizationController : NSObject

@property (copy, nonatomic, setter=_unitTesting_setReminderRegistryCompletion:) id *_unitTesting_reminderRegistryCompletion; // ivar: __unitTesting_reminderRegistryCompletion
@property (nonatomic) BOOL anyDeterminedTypeAllowsReading; // ivar: _anyDeterminedTypeAllowsReading
@property (readonly, nonatomic) BOOL anyTypeRequested;
@property (nonatomic) NSInteger authorizationModeForSource; // ivar: _authorizationModeForSource
@property (readonly, nonatomic) HKAuthorizationStore *authorizationStore; // ivar: _authorizationStore
@property (copy, nonatomic) NSDate *displayReadAuthorizationAnchorDate; // ivar: _displayReadAuthorizationAnchorDate
@property (copy, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, copy, nonatomic) NSArray *orderedTypesForReading; // ivar: _orderedTypesForReading
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly, nonatomic) NSMutableSet *typesEnabledForReading; // ivar: _typesEnabledForReading
@property (copy, nonatomic) NSSet *typesForReading; // ivar: _typesForReading
@property (readonly, copy, nonatomic) NSSet *typesRequestedForReading; // ivar: _typesRequestedForReading


-(BOOL)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(NSInteger)arg0 ;
-(BOOL)allTypesEnabled;
-(BOOL)anyTypeEnabled;
-(BOOL)isTypeEnabled:(id)arg0 ;
-(NSInteger)_authorizationStatusWithType:(id)arg0 ;
-(id)_authorizationModesWithMode:(NSInteger)arg0 types:(id)arg1 ;
-(id)_authorizationStatusesWithTypes:(id)arg0 ;
-(id)_fetchAllClinicalAuthorizationRecordsWithError:(*id)arg0 ;
-(id)_orderTypes:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 healthRecordsStore:(id)arg1 source:(id)arg2 typesRequestedForReading:(id)arg3 ;
-(void)_commitModeConfirmationAlertRegistrationShouldDisplay:(BOOL)arg0 ;
-(void)_setAuthorizationStatuses:(id)arg0 modes:(id)arg1 shouldUpdateAnchor:(BOOL)arg2 ;
-(void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg0 ;
-(void)_updateReminderRegistrationIfNeededForCommittingModes:(id)arg0 anyTypeEnabled:(BOOL)arg1 ;
-(void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(NSInteger)arg0 ;
-(void)reload;
-(void)setEnabled:(BOOL)arg0 forType:(id)arg1 commit:(BOOL)arg2 ;
-(void)setEnabledForAllTypes:(BOOL)arg0 ;


@end


#endif