// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETUSERCURRENTRESTAURANTRESERVATIONBOOKINGSINTENTRESPONSE_H
#define INGETUSERCURRENTRESTAURANTRESERVATIONBOOKINGSINTENTRESPONSE_H

@class NSString, NSArray;
@protocol INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport;


#import "INIntentResponse.h"

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport>



@property (readonly, nonatomic) NSInteger code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userCurrentBookings; // ivar: _userCurrentBookings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserCurrentBookings:(id)arg0 code:(NSInteger)arg1 userActivity:(id)arg2 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif