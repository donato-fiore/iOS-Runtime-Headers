// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLASSERTION_H
#define SAMLASSERTION_H

@class NSArray, NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLAdvice.h"
#import "SAMLAuthNStatement.h"
#import "SAMLConditions.h"
#import "SAMLSignature.h"
#import "SAMLSubject.h"

@interface SAMLAssertion : SAMLBaseElement

@property (readonly, nonatomic) SAMLAdvice *advice;
@property (readonly, nonatomic) SAMLAuthNStatement *authentication;
@property (readonly, nonatomic) NSArray *authorizations;
@property (readonly, nonatomic) SAMLConditions *conditions;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSArray *samlAttributes;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (readonly, nonatomic) SAMLSubject *subject;


+(id)createElement:(*id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)isValidForRequestor:(id)arg0 ;
-(BOOL)meetsConditions:(*id)arg0 ;
-(id)authorizationForResource:(id)arg0 ;


@end


#endif