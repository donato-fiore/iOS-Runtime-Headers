// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLATTRIBUTEQUERYELEMENT_H
#define SAMLATTRIBUTEQUERYELEMENT_H

@class NSString, NSDate, NSArray;


#import "SAMLBaseElement.h"
#import "SAMLSignature.h"
#import "SAMLSubject.h"

@interface SAMLAttributeQueryElement : SAMLBaseElement

@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) NSString *consent;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (readonly, nonatomic) NSArray *samlAttributes;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;


+(id)createElement:(*id)arg0 ;
-(void)addAttribute:(id)arg0 ;


@end


#endif