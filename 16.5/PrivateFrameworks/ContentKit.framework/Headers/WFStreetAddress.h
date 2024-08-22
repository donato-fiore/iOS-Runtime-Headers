// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTREETADDRESS_H
#define WFSTREETADDRESS_H

@class NSString, CLPlacemark, CNPostalAddress;
@protocol WFNaming, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent>



@property (readonly, nonatomic) NSString *addressString; // ivar: _addressString
@property (readonly, nonatomic) NSString *city; // ivar: _city
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (readonly, nonatomic) CNPostalAddress *postalAddress; // ivar: _postalAddress
@property (readonly, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (readonly, nonatomic) NSString *shortAddressString;
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) NSString *street; // ivar: _street
@property (readonly, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (readonly, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)stringContainsStreetAddresses:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)streetAddressWithPlacemark:(id)arg0 label:(id)arg1 ;
+(id)streetAddressWithPostalAddress:(id)arg0 label:(id)arg1 ;
+(id)streetAddressWithStreet:(id)arg0 subLocality:(id)arg1 city:(id)arg2 subAdministrativeArea:(id)arg3 state:(id)arg4 postalCode:(id)arg5 country:(id)arg6 isoCountryCode:(id)arg7 label:(id)arg8 ;
+(id)streetAddressWithTextCheckingResult:(id)arg0 ;
+(id)streetAddressesInString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 placemark:(id)arg1 formattedAddress:(id)arg2 label:(id)arg3 ;
-(id)initWithStreet:(id)arg0 subLocality:(id)arg1 city:(id)arg2 subAdministrativeArea:(id)arg3 state:(id)arg4 postalCode:(id)arg5 country:(id)arg6 isoCountryCode:(id)arg7 placemark:(id)arg8 formattedAddress:(id)arg9 label:(id)arg10 ;
-(id)streetAddressWithLabel:(id)arg0 ;
-(id)wfSerializedRepresentation;


@end


#endif