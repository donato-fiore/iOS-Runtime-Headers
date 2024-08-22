// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSDONATEDEVENT_H
#define CSDONATEDEVENT_H

@class NSDictionary, NSArray, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSDonatedEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (readonly) NSDictionary *attributes;
@property (copy, nonatomic) NSArray *docIDs;
@property (nonatomic) BOOL fromAllowListedSender;
@property (retain) NSMutableDictionary *mutableAttributes; // ivar: _mutableAttributes
@property (copy, nonatomic) NSString *type;


+(id)eventFromData:(id)arg0 ;
-(BOOL)senderIsCourier;
-(id)arrivalAirportCode;
-(id)arrivalAirportName;
-(id)arrivalDateTime;
-(id)arrivalTerminal;
-(id)bookingInfoUrl;
-(id)checkInUrl;
-(id)confirmationNumber;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)courierName;
-(id)data;
-(id)deliveryDateTime;
-(id)departureAirportCode;
-(id)departureAirportName;
-(id)departureDateTime;
-(id)departureTerminal;
-(id)description;
-(id)flightCarrier;
-(id)flightNumber;
-(id)flightStatus;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithType:(id)arg0 ;
-(id)merchantName;
-(id)orderDateTime;
-(id)trackingNumber;
-(id)trackingUrl;
-(void)setArrivalAirportCode:(id)arg0 ;
-(void)setArrivalAirportName:(id)arg0 ;
-(void)setArrivalDateTime:(id)arg0 ;
-(void)setArrivalTerminal:(id)arg0 ;
-(void)setBookingInfoUrl:(id)arg0 ;
-(void)setCheckInUrl:(id)arg0 ;
-(void)setConfirmationNumber:(id)arg0 ;
-(void)setCourierName:(id)arg0 ;
-(void)setDeliveryDateTime:(id)arg0 ;
-(void)setDepartureAirportCode:(id)arg0 ;
-(void)setDepartureAirportName:(id)arg0 ;
-(void)setDepartureDateTime:(id)arg0 ;
-(void)setDepartureTerminal:(id)arg0 ;
-(void)setFlightCarrier:(id)arg0 ;
-(void)setFlightNumber:(id)arg0 ;
-(void)setFlightStatus:(id)arg0 ;
-(void)setMerchantName:(id)arg0 ;
-(void)setOrderDateTime:(id)arg0 ;
-(void)setSenderIsCourier:(BOOL)arg0 ;
-(void)setTrackingNumber:(id)arg0 ;
-(void)setTrackingUrl:(id)arg0 ;


@end


#endif