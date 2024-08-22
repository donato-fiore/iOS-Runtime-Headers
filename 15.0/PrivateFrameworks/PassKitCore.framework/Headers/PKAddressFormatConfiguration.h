// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDRESSFORMATCONFIGURATION_H
#define PKADDRESSFORMATCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKContactFieldConfiguration.h"

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKContactFieldConfiguration *cityFieldConfiguration; // ivar: _cityFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *postalCodeFieldConfiguration; // ivar: _postalCodeFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *stateFieldConfiguration; // ivar: _stateFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *streetFieldConfiguration; // ivar: _streetFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *subAdministrativeAreaFieldConfiguration; // ivar: _subAdministrativeAreaFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *subLocalityFieldConfiguration; // ivar: _subLocalityFieldConfiguration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif