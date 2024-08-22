// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDMANAGEDACCOUNT_H
#define ACDMANAGEDACCOUNT_H

@class NSManagedObject, NSString, NSNumber, NSSet, NSDate;


#import "ACDManagedAccountType.h"
#import "ACDManagedAccount.h"

@interface ACDManagedAccount : NSManagedObject

@property (retain, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) ACDManagedAccountType *accountType;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *authenticated;
@property (retain, nonatomic) NSString *authenticationType;
@property (retain, nonatomic) NSSet *childAccounts;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSSet *customProperties;
@property (retain, nonatomic) id *dataclassProperties;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSSet *enabledDataclasses;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
@property (retain, nonatomic) NSString *modificationID;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) ACDManagedAccount *parentAccount;
@property (retain, nonatomic) NSSet *provisionedDataclasses;
@property (retain, nonatomic) NSNumber *supportsAuthentication;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSNumber *visible;
@property (retain, nonatomic) NSNumber *warmingUp;


-(id)description;


@end


#endif