// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACACCOUNTTYPE_H
#define ACACCOUNTTYPE_H

@class NSString, NSSet, NSURL;
@protocol ACProtobufCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ACAccountStore.h"

@interface ACAccountType : NSObject <ACProtobufCoding, NSCopying, NSSecureCoding>

 {
    int _visibility;
    NSString *_credentialProtectionPolicy;
}


@property (readonly, nonatomic) BOOL accessGranted;
@property (readonly, nonatomic) NSSet *accessKeys; // ivar: _accessKeys
@property (weak, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) NSString *accountTypeDescription; // ivar: _accountTypeDescription
@property (copy, nonatomic) id *credentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialType; // ivar: _credentialType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *objectID; // ivar: _objectID
@property (nonatomic, getter=isObsolete) BOOL obsolete; // ivar: _obsolete
@property (retain, nonatomic) NSString *owningBundleID; // ivar: _owningBundleID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *supportedDataclasses; // ivar: _supportedDataclasses
@property (nonatomic) int supportsAuthentication; // ivar: _supportsAuthentication
@property (nonatomic) BOOL supportsMultipleAccounts; // ivar: _supportsMultipleAccounts
@property (readonly, nonatomic) NSSet *syncableDataclasses; // ivar: _syncableDataclasses
@property (nonatomic) int visibility;


+(BOOL)supportsSecureCoding;
+(id)allIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(id)_encodeProtobuf;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg0 ;
-(id)_initWithProtobufData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 description:(id)arg1 ;
-(id)initWithManagedAccountType:(id)arg0 ;
-(id)initWithManagedAccountType:(id)arg0 accountStore:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif