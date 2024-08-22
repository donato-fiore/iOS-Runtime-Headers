// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INGETAVAILABLERESTAURANTRESERVATIONBOOKINGSINTENTRESPONSE_H
#define INGETAVAILABLERESTAURANTRESERVATIONBOOKINGSINTENTRESPONSE_H

@class NSArray, NSString;
@protocol INImageProxyInjecting, INGetAvailableRestaurantReservationBookingsIntentResponseExport;


#import "INIntentResponse.h"
#import "INTermsAndConditions.h"

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingsIntentResponseExport>



@property (readonly, nonatomic) NSArray *availableBookings; // ivar: _availableBookings
@property (readonly, nonatomic) NSInteger code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedBookingAdvisementText; // ivar: _localizedBookingAdvisementText
@property (copy, nonatomic) NSString *localizedRestaurantDescriptionText; // ivar: _localizedRestaurantDescriptionText
@property (readonly) Class superclass;
@property (copy, nonatomic) INTermsAndConditions *termsAndConditions; // ivar: _termsAndConditions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAvailableBookings:(id)arg0 code:(NSInteger)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif