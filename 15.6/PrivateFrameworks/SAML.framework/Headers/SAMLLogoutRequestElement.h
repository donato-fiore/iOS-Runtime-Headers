// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLLOGOUTREQUESTELEMENT_H
#define SAMLLOGOUTREQUESTELEMENT_H

@class NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLNameId.h"
#import "SAMLSignature.h"

@interface SAMLLogoutRequestElement : SAMLBaseElement

@property (readonly, nonatomic) NSString *consent;
@property (retain, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) SAMLNameId *nameId;
@property (retain, nonatomic) NSDate *notOnOrAfter;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *sessionIndex;
@property (readonly, nonatomic) SAMLSignature *signature;


+(id)createElement:(*id)arg0 ;


@end


#endif