// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLAUTHNREQUESTELEMENT_H
#define SAMLAUTHNREQUESTELEMENT_H

@class NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLConditions.h"
#import "SAMLRequestedAuthNContext.h"
#import "SAMLNameIdPolicy.h"
#import "SAMLScoping.h"
#import "SAMLSignature.h"
#import "SAMLSubject.h"

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (retain, nonatomic) SAMLConditions *conditions;
@property (readonly, nonatomic) NSString *consent;
@property (readonly, nonatomic) SAMLRequestedAuthNContext *context;
@property (retain, nonatomic) NSString *destination;
@property (nonatomic) BOOL forceAuthN;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isPassive;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (retain, nonatomic) NSString *issuer;
@property (retain, nonatomic) SAMLNameIdPolicy *nameIdPolicy;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) SAMLScoping *scoping;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;


+(id)createElement:(*id)arg0 ;


@end


#endif