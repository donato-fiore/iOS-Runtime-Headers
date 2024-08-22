// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUSERIDENTITYLOOKUPINFO_H
#define CKUSERIDENTITYLOOKUPINFO_H

@class NSString, NSData;
@protocol CKXPCSuitableString, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSData *encryptedPersonalInfo; // ivar: _encryptedPersonalInfo
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) BOOL shouldReportMissingIdentity; // ivar: _shouldReportMissingIdentity
@property (copy, nonatomic) CKRecordID *userRecordID; // ivar: _userRecordID


+(BOOL)supportsSecureCoding;
+(id)lookupInfosWithEmails:(id)arg0 ;
+(id)lookupInfosWithPhoneNumbers:(id)arg0 ;
+(id)lookupInfosWithRecordIDs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)lookupField;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKPropertiesDescription;
-(id)CKXPCSuitableString;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(id)initWithUserRecordID:(id)arg0 ;
-(id)lookupValue;
-(void)_stripPersonalInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif