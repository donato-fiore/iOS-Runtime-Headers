// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLRESPONSEELEMENT_H
#define SAMLRESPONSEELEMENT_H

@class NSArray, NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLSignature.h"
#import "SAMLStatus.h"

@interface SAMLResponseElement : SAMLBaseElement

@property (readonly, nonatomic) NSArray *assertions;
@property (readonly, nonatomic) NSString *consent;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSString *relatedRequest;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (readonly, nonatomic) SAMLStatus *status;


+(id)createElement:(*id)arg0 ;
-(BOOL)assertionMeetsConditions:(*id)arg0 ;
-(id)authnStatement;


@end


#endif