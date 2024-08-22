// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHSECURITYINFORMATIONRESULTOBJECT_H
#define DMFFETCHSECURITYINFORMATIONRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;


#import "DMFSecurityInformation.h"

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *errorsByPropertyKey; // ivar: _errorsByPropertyKey
@property (readonly, copy, nonatomic) DMFSecurityInformation *securityInformation; // ivar: _securityInformation
@property (readonly, copy, nonatomic) NSDictionary *valuesByPropertyKey; // ivar: _valuesByPropertyKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecurityInformation:(id)arg0 ;
-(id)initWithValuesByPropertyKey:(id)arg0 errorsByPropertyKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif