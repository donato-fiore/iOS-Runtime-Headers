// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBIOMETRICSSIGNATUREREQUEST_H
#define AMSBIOMETRICSSIGNATUREREQUEST_H

@class ACAccount, NSString, LAContext, NSDictionary;
@protocol NSSecureCoding, AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"
#import "AMSKeychainOptions.h"

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *challenge; // ivar: _challenge
@property (readonly, copy, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (nonatomic, getter=isDualAction) BOOL dualAction; // ivar: _dualAction
@property (readonly, nonatomic) AMSKeychainOptions *keychainOptions; // ivar: _keychainOptions
@property (readonly, nonatomic) *__SecAccessControl localAuthAccessControlRef; // ivar: _localAuthAccessControlRef
@property (readonly, nonatomic) LAContext *localAuthContext; // ivar: _localAuthContext
@property (readonly, nonatomic) NSDictionary *localAuthOptions; // ivar: _localAuthOptions


+(BOOL)supportsSecureCoding;
+(id)biometricsSignatureRequestForURLResponse:(id)arg0 account:(id)arg1 session:(id)arg2 task:(id)arg3 clientInfo:(id)arg4 options:(id)arg5 error:(*id)arg6 ;
-(id)initWithAccount:(id)arg0 clientInfo:(id)arg1 challenge:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif