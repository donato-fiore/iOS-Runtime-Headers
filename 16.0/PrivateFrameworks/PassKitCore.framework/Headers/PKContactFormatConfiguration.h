// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTFORMATCONFIGURATION_H
#define PKCONTACTFORMATCONFIGURATION_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKContactFormatConfiguration : NSObject <NSSecureCoding>

 {
    NSDictionary *_regionalAddressFormatConfigurations;
}


@property (readonly, nonatomic) BOOL checkFormatOfEmailAddress; // ivar: _checkFormatOfEmailAddress
@property (readonly, nonatomic) BOOL checkFormatOfPhoneNumber; // ivar: _checkFormatOfPhoneNumber


+(BOOL)supportsSecureCoding;
-(id)contactFieldConfigurationForCountryCode:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)regionalAddressFormatConfigurations;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif