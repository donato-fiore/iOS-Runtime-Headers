// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMUTABLECONTACT_H
#define DNDMUTABLECONTACT_H

@class NSString, NSSet;


#import "DNDContact.h"

@interface DNDMutableContact : DNDContact

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSSet *emailAddresses;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSSet *phoneNumbers;


-(id)init;


@end


#endif