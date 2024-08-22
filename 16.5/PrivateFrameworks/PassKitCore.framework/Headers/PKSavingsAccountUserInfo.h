// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTUSERINFO_H
#define PKSAVINGSACCOUNTUSERINFO_H

@class CNContact;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAccountBeneficiaryInfo.h"

@interface PKSavingsAccountUserInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) PKAccountBeneficiaryInfo *beneficiaryInfo; // ivar: _beneficiaryInfo
@property (copy, nonatomic) CNContact *primaryUser; // ivar: _primaryUser


+(BOOL)supportsSecureCoding;
-(id)_pkRequiredStringFromDictionary:(id)arg0 forKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif