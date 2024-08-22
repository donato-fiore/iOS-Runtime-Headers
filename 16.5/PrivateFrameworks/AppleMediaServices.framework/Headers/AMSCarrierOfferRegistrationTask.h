// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCARRIEROFFERREGISTRATIONTASK_H
#define AMSCARRIEROFFERREGISTRATIONTASK_H

@class ACAccount, NSArray, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSURLRequestEncoder.h"
#import "AMSProcessInfo.h"
#import "AMSPromise.h"
#import "AMSURLSession.h"

@interface AMSCarrierOfferRegistrationTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSArray *carriers; // ivar: _carriers
@property (readonly, nonatomic) AMSURLRequestEncoder *checkOfferRequestEncoder; // ivar: _checkOfferRequestEncoder
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *msisdn; // ivar: _msisdn
@property (readonly, nonatomic) AMSPromise *pacTokenPromise; // ivar: _pacTokenPromise
@property (readonly, nonatomic) AMSURLRequestEncoder *registrationRequestEncoder; // ivar: _registrationRequestEncoder
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSURLSession *urlSession; // ivar: _urlSession


+(id)createBagForSubProfile;
+(id)invalidParameterError:(id)arg0 ;
+(id)pollingIntervalFromBag:(id)arg0 ;
-(id)_checkOffersBody;
-(id)_checkOffersRequest;
-(id)_hasOffers;
-(id)_includesAllowedCarrier;
-(id)_pacToken;
-(id)_parseCheckOffersResult:(id)arg0 ;
-(id)_performRegistrationFlow;
-(id)_registerCarrierOffersToAccount;
-(id)_registrationBody;
-(id)_registrationRequest;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 carriers:(id)arg2 checkOfferRequestEncoder:(id)arg3 deviceGUID:(id)arg4 msisdn:(id)arg5 pacTokenPromise:(id)arg6 registrationRequestEncoder:(id)arg7 urlSession:(id)arg8 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 carriers:(id)arg2 deviceGUID:(id)arg3 msisdn:(id)arg4 ;
-(id)perform;


@end


#endif