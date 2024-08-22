// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTUSERINFO_H
#define PKACCOUNTUSERINFO_H

@class CNContact;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKSavingsAccountUserInfo.h"

@interface PKAccountUserInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) CNContact *creditPrimaryUser; // ivar: _creditPrimaryUser
@property (copy, nonatomic) PKSavingsAccountUserInfo *savingsUserInfo; // ivar: _savingsUserInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif