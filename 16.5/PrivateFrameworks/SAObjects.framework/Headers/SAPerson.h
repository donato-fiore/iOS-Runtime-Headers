// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPERSON_H
#define SAPERSON_H

@class NSArray, NSDate, NSString, NSDictionary, NSNumber;
@protocol SAAceComparable;


#import "SADomainObject.h"

@interface SAPerson : SADomainObject <SAAceComparable>



@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *companyPhonetic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emails;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSDictionary *firstNameAPGs;
@property (copy, nonatomic) NSString *firstNamePhonetic;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *internalGUID;
@property (copy, nonatomic) NSNumber *isBlocked;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDictionary *lastNameAPGs;
@property (copy, nonatomic) NSString *lastNamePhonetic;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSDictionary *nickNameAPGs;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSNumber *pseudo;
@property (copy, nonatomic) NSArray *relatedNames;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) NSString *suffix;
@property (readonly) Class superclass;


+(id)person;
+(id)personWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)groupIdentifier;


@end


#endif