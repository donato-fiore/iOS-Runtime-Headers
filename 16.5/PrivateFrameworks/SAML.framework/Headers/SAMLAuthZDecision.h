// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLAUTHZDECISION_H
#define SAMLAUTHZDECISION_H

@class NSArray, NSString;


#import "SAMLBaseElement.h"
#import "SAMLEvidence.h"

@interface SAMLAuthZDecision : SAMLBaseElement

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSString *decision;
@property (readonly, nonatomic) SAMLEvidence *evidence;
@property (readonly, nonatomic) NSString *resource;


+(id)createElement:(*id)arg0 ;


@end


#endif