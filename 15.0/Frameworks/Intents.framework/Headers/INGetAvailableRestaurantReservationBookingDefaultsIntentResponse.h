// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETAVAILABLERESTAURANTRESERVATIONBOOKINGDEFAULTSINTENTRESPONSE_H
#define INGETAVAILABLERESTAURANTRESERVATIONBOOKINGDEFAULTSINTENTRESPONSE_H

@class NSString, NSDate, NSNumber;
@protocol INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport;


#import "INIntentResponse.h"
#import "INImage.h"

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport>



@property (readonly, nonatomic) NSInteger code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *defaultBookingDate; // ivar: _defaultBookingDate
@property (readonly, nonatomic) NSUInteger defaultPartySize; // ivar: _defaultPartySize
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumPartySize; // ivar: _maximumPartySize
@property (copy, nonatomic) NSNumber *minimumPartySize; // ivar: _minimumPartySize
@property (copy, nonatomic) INImage *providerImage; // ivar: _providerImage
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultPartySize:(NSUInteger)arg0 defaultBookingDate:(id)arg1 code:(NSInteger)arg2 userActivity:(id)arg3 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif