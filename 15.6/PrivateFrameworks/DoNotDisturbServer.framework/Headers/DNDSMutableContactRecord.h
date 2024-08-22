// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLECONTACTRECORD_H
#define DNDSMUTABLECONTACTRECORD_H

@class NSString, NSSet;


#import "DNDSContactRecord.h"

@interface DNDSMutableContactRecord : DNDSContactRecord

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSSet *emailAddresses;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSSet *phoneNumbers;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif