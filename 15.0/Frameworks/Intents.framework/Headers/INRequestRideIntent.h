// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INREQUESTRIDEINTENT_H
#define INREQUESTRIDEINTENT_H

@class NSString, CLPlacemark, NSNumber;
@protocol INRequestRideIntentExport;


#import "INIntent.h"
#import "INPaymentMethod.h"
#import "INSpeakableString.h"
#import "INDateComponentsRange.h"

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *partySize;
@property (readonly, copy, nonatomic) INPaymentMethod *paymentMethod;
@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly, copy, nonatomic) INSpeakableString *rideOptionName;
@property (readonly, copy, nonatomic) INDateComponentsRange *scheduledPickupTime;
@property (readonly) Class superclass;


+(id)_ignoredParameters;
-(BOOL)_isUserConfirmationRequired;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithPickupLocation:(id)arg0 dropOffLocation:(id)arg1 rideOptionName:(id)arg2 partySize:(id)arg3 paymentMethod:(id)arg4 ;
-(id)initWithPickupLocation:(id)arg0 dropOffLocation:(id)arg1 rideOptionName:(id)arg2 partySize:(id)arg3 paymentMethod:(id)arg4 scheduledPickupTime:(id)arg5 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif