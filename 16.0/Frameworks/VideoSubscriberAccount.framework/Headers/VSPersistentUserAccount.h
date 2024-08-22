// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPERSISTENTUSERACCOUNT_H
#define VSPERSISTENTUSERACCOUNT_H

@class NSManagedObject, NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface VSPersistentUserAccount : NSManagedObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) NSInteger accountType;
@property (copy, nonatomic) NSString *authenticationData;
@property (copy, nonatomic) NSDate *billingCycleEndDate;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) BOOL developer;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) NSInteger deviceType;
@property (nonatomic) NSInteger keychainItemHash;
@property (nonatomic) BOOL markedAsDeleted;
@property (copy, nonatomic) NSDate *modified;
@property (copy, nonatomic) NSString *providerID;
@property (nonatomic) BOOL requiresSystemTrust;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) NSInteger sourceType;
@property (retain, nonatomic) NSObject *tierIdentifiers;
@property (copy, nonatomic) NSURL *updateURL;
@property (nonatomic) short version;


+(id)fetchRequest;


@end


#endif