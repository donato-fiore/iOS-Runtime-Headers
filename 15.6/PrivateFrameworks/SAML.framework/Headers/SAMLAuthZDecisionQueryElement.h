// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLAUTHZDECISIONQUERYELEMENT_H
#define SAMLAUTHZDECISIONQUERYELEMENT_H

@class NSArray, NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLEvidence.h"
#import "SAMLSignature.h"
#import "SAMLSubject.h"

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSString *channelId;
@property (readonly, nonatomic) NSString *consent;
@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) SAMLEvidence *evidence;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *issueInstant;
@property (retain, nonatomic) NSString *resource;
@property (readonly, nonatomic) SAMLSignature *signature;
@property (retain, nonatomic) SAMLSubject *subject;


+(id)createElement:(*id)arg0 ;
-(void)addAction:(id)arg0 ;


@end


#endif