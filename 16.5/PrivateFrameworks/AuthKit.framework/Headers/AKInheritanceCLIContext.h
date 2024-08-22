// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINHERITANCECLICONTEXT_H
#define AKINHERITANCECLICONTEXT_H

@class NSString;


#import "AKInheritanceContext.h"

@interface AKInheritanceCLIContext : AKInheritanceContext

@property (copy, nonatomic) NSString *accessKeyString; // ivar: _accessKeyString
@property (copy, nonatomic) NSString *beneficiaryFirstName; // ivar: _beneficiaryFirstName
@property (copy, nonatomic) NSString *beneficiaryLastName; // ivar: _beneficiaryLastName
@property (copy, nonatomic) NSString *beneficiaryPassword; // ivar: _beneficiaryPassword
@property (copy, nonatomic) NSString *identityToken; // ivar: _identityToken


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif