// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDMANAGEDACCOUNTTYPE_H
#define ACDMANAGEDACCOUNTTYPE_H

@class NSManagedObject, NSSet, NSString, NSNumber;



@interface ACDManagedAccountType : NSManagedObject

@property (retain, nonatomic) NSSet *accessKeys;
@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSSet *accounts;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *obsolete;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) NSSet *permission;
@property (retain, nonatomic) NSSet *supportedDataclasses;
@property (retain, nonatomic) NSNumber *supportsAuthentication;
@property (retain, nonatomic) NSNumber *supportsMultipleAccounts;
@property (retain, nonatomic) NSSet *syncableDataclasses;
@property (retain, nonatomic) NSNumber *visibility;


-(id)description;


@end


#endif