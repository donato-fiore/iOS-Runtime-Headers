// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDEVICEOFFERREGISTRATIONTASK_H
#define AMSDEVICEOFFERREGISTRATIONTASK_H

@class ACAccount, NSString, NSSet, NSArray;
@protocol AMSBagConsumer, AMSBagProtocol, AMSDeviceOffersTracking;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSDeviceOfferEligibilityTask.h"
#import "AMSDeviceOfferRegistrationPrivacyValidator.h"
#import "AMSURLSession.h"

@interface AMSDeviceOfferRegistrationTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly, nonatomic) NSObject<AMSDeviceOffersTracking> *deviceOffersStore; // ivar: _deviceOffersStore
@property (readonly, nonatomic) AMSDeviceOfferEligibilityTask *eligibilityTask; // ivar: _eligibilityTask
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreRegistrationBlacklist; // ivar: _ignoreRegistrationBlacklist
@property (nonatomic) BOOL lightweightCheckOnly; // ivar: _lightweightCheckOnly
@property (readonly, nonatomic) NSString *masterSerialNumber; // ivar: _masterSerialNumber
@property (retain, nonatomic) NSSet *offerIdentifiers; // ivar: _offerIdentifiers
@property (readonly, nonatomic) AMSDeviceOfferRegistrationPrivacyValidator *privacyValidator; // ivar: _privacyValidator
@property (retain, nonatomic) NSArray *registrationGroups; // ivar: _registrationGroups
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSURLSession *urlSession; // ivar: _urlSession


+(id)createBagForSubProfile;
-(BOOL)_isDeviceGroupRegistrationAllowed;
-(BOOL)_isEligibilityCallsAllowed;
-(BOOL)_isRegistrationAllowed;
-(id)_accountEligibleSerialsFromDeviceOffers:(id)arg0 accountOffers:(id)arg1 ;
-(id)_bucketedOffers:(id)arg0 ;
-(id)_companionSerialNumbers;
-(id)_deviceOffersURL;
-(id)_eligibilityQualifiedRegistrationGroupsWithAccount:(id)arg0 pendingRegistrationGroups:(id)arg1 ;
-(id)_filteredRegistrationGroups:(id)arg0 ;
-(id)_handleRegistrationResult:(id)arg0 ;
-(id)_latestDeviceGroups;
-(id)_latestOffersWithFetchedDeviceOffers:(id)arg0 offersStore:(id)arg1 ;
-(id)_lightweightDeviceOffersURL;
-(id)_offersDecodedFromResult:(id)arg0 ;
-(id)_performLightweightRequestWithAccount:(id)arg0 ;
-(id)_performRegistrationRequestWithAccount:(id)arg0 ;
-(id)_registrationEndpointPOSTCompanionBodyWithDeviceGroups:(id)arg0 companionSerialNumbers:(id)arg1 ;
-(id)_registrationEndpointPOSTDeviceGroupsBody:(id)arg0 ;
-(id)_registrationEndpointPOSTParametersWithRegistrationGroups:(id)arg0 companionSerialNumbers:(id)arg1 ;
-(id)_registrationGroupsFrom:(id)arg0 matching:(id)arg1 ;
-(id)_registrationRequestEncoderWithAccount:(id)arg0 ;
-(id)_sanitizedResultPromise:(id)arg0 ;
-(id)_serialNumberBlacklist;
-(id)_urlRequestWithBagURL:(id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 deviceGUID:(id)arg2 deviceOffersStore:(id)arg3 eligibilityTask:(id)arg4 masterSerialNumber:(id)arg5 privacyValidator:(id)arg6 urlSession:(id)arg7 ;
-(id)perform;
-(void)_updateWithDeviceOffers:(id)arg0 ;


@end


#endif