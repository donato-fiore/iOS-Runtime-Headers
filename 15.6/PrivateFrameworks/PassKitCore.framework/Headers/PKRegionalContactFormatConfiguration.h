// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREGIONALCONTACTFORMATCONFIGURATION_H
#define PKREGIONALCONTACTFORMATCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAddressFormatConfiguration.h"
#import "PKNameComponentFormatConfiguration.h"

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKAddressFormatConfiguration *addressFormatConfiguration; // ivar: _addressFormatConfiguration
@property (readonly, nonatomic) PKNameComponentFormatConfiguration *nameComponentFormatConfiguration; // ivar: _nameComponentFormatConfiguration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif