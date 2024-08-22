// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSUPGRADEREQUEST_H
#define PKPASSUPGRADEREQUEST_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirement.h"

@interface PKPassUpgradeRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *fields; // ivar: _fields
@property (readonly, nonatomic) PKOSVersionRequirement *minimumOSVersion; // ivar: _minimumOSVersion
@property (readonly, nonatomic) NSArray *paymentApplicationIdentifiers; // ivar: _paymentApplicationIdentifiers
@property (copy, nonatomic) NSString *secureElementIdentifier; // ivar: _secureElementIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)passUpgradeRequestFromDictionary:(id)arg0 ;
-(id)asDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif