// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAPPLEIDACCOUNT_H
#define SFAPPLEIDACCOUNT_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFAppleIDContactInfo.h"
#import "SFAppleIDIdentity.h"
#import "SFAppleIDValidationRecord.h"

@interface SFAppleIDAccount : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) NSString *certificateToken; // ivar: _certificateToken
@property (retain, nonatomic) NSDate *certificateTokenCreationDate; // ivar: _certificateTokenCreationDate
@property (retain, nonatomic) SFAppleIDContactInfo *contactInfo; // ivar: _contactInfo
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) SFAppleIDIdentity *identity; // ivar: _identity
@property (retain, nonatomic) NSData *privateKeyPersistentReference; // ivar: _privateKeyPersistentReference
@property (retain, nonatomic) SFAppleIDValidationRecord *validationRecord; // ivar: _validationRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif