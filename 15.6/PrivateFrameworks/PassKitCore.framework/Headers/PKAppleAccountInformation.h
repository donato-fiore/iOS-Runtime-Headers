// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEACCOUNTINFORMATION_H
#define PKAPPLEACCOUNTINFORMATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *aaAlternateDSID; // ivar: _aaAlternateDSID
@property (copy, nonatomic) NSString *aaDSID; // ivar: _aaDSID
@property (copy, nonatomic) NSString *aidaAlternateDSID; // ivar: _aidaAlternateDSID
@property (copy, nonatomic) NSString *aidaToken; // ivar: _aidaToken
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *authorizationHeader; // ivar: _authorizationHeader
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) BOOL isSandboxAccount; // ivar: _isSandboxAccount
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *primaryEmailAddress; // ivar: _primaryEmailAddress


+(BOOL)supportsSecureCoding;
-(BOOL)aidaAccountAvailable;
-(id)altDsidAppleAccountHash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)primaryAppleAccountHash;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif