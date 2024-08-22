// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNAMECOMPONENTFORMATCONFIGURATION_H
#define PKNAMECOMPONENTFORMATCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKContactFieldConfiguration.h"

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKContactFieldConfiguration *familyNameFieldConfiguration; // ivar: _familyNameFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *givenNameFieldConfiguration; // ivar: _givenNameFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticFamilyNameFieldConfiguration; // ivar: _phoneticFamilyNameFieldConfiguration
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticGivenNameFieldConfiguration; // ivar: _phoneticGivenNameFieldConfiguration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif