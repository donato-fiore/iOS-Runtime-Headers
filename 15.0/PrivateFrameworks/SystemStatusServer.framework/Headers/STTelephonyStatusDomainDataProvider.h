// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STTELEPHONYSTATUSDOMAINDATAPROVIDER_H
#define STTELEPHONYSTATUSDOMAINDATAPROVIDER_H

@class NSString, STTelephonyStatusDomainPublisher;
@protocol STTelephonyStateObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "STTelephonyStateProvider.h"

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) STTelephonyStatusDomainPublisher *telephonyDomainPublisher; // ivar: _telephonyDomainPublisher
@property (readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider; // ivar: _telephonyStateProvider


-(BOOL)_shouldShowEmergencyOnlyStatusForStateProvider:(id)arg0 registrationStatus:(NSUInteger)arg1 countryCode:(id)arg2 ;
-(BOOL)_simStatusMeansLocked:(id)arg0 ;
-(NSUInteger)_dataNetworkTypeForDataConnectionType:(NSUInteger)arg0 ;
-(NSUInteger)_serviceStateForStateProvider:(id)arg0 registrationStatus:(NSUInteger)arg1 countryCode:(id)arg2 ;
-(id)_SIMInfoForStateProvider:(id)arg0 subscriptionInfo:(id)arg1 slot:(NSInteger)arg2 ;
-(id)_displayStringForRegistrationStatus:(NSUInteger)arg0 ;
-(id)_displayStringForSIMStatus:(id)arg0 ;
-(id)_serviceDescriptionForStateProvider:(id)arg0 subscriptionInfo:(id)arg1 outSecondaryServiceDescription:(*id)arg2 ;
-(id)initWithServerHandle:(id)arg0 ;
-(id)initWithServerHandle:(id)arg0 stateProvider:(id)arg1 ;
-(void)_updateDataForSlot:(NSInteger)arg0 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;


@end


#endif