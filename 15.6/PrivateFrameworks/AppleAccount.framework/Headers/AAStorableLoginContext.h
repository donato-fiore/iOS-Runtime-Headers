// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASTORABLELOGINCONTEXT_H
#define AASTORABLELOGINCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AAStorableLoginContext : NSObject

@property (copy, nonatomic) NSString *DSID; // ivar: _DSID
@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic, getter=isBeneficiaryLogin) BOOL beneficiaryLogin; // ivar: _beneficiaryLogin
@property (copy, nonatomic) NSString *cloudKitToken; // ivar: _cloudKitToken
@property (copy, nonatomic) NSString *continuationKey; // ivar: _continuationKey
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSString *passwordResetKey; // ivar: _passwordResetKey
@property (copy, nonatomic) NSString *rawPassword; // ivar: _rawPassword


-(id)initWithAppleID:(id)arg0 altDSID:(id)arg1 ;


@end


#endif