// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMLAUTHNSTATEMENT_H
#define SAMLAUTHNSTATEMENT_H

@class NSString, NSDate;


#import "SAMLBaseElement.h"

@interface SAMLAuthNStatement : SAMLBaseElement

@property (readonly, nonatomic) NSString *authenticatingAuthority;
@property (readonly, nonatomic) NSString *authnContextClassRef;
@property (readonly, nonatomic) NSString *authnContextDecl;
@property (readonly, nonatomic) NSString *authnContextDeclRef;
@property (readonly, nonatomic) NSDate *authnInstant;
@property (readonly, nonatomic) NSString *sessionIndex;
@property (readonly, nonatomic) NSDate *sessionNotOnOrAfter;
@property (readonly, nonatomic) NSString *subjectAddress;
@property (readonly, nonatomic) NSString *subjectDNSName;


+(id)createElement:(*id)arg0 ;
-(BOOL)isValid;


@end


#endif