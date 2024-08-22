// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMUTABLEPOSTALADDRESS_H
#define CNMUTABLEPOSTALADDRESS_H

@class NSString;


#import "CNPostalAddress.h"

@interface CNMutablePostalAddress : CNPostalAddress

@property (copy, nonatomic) NSString *ISOCountryCode;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *formattedAddress;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)freeze;


@end


#endif