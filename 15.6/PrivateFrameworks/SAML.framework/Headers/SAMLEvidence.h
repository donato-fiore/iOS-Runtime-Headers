// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLEVIDENCE_H
#define SAMLEVIDENCE_H

@class NSString;


#import "SAMLBaseElement.h"
#import "SAMLAssertion.h"

@interface SAMLEvidence : SAMLBaseElement

@property (readonly, nonatomic) SAMLAssertion *assertion;
@property (readonly, nonatomic) NSString *assertionIdRef;
@property (readonly, nonatomic) NSString *assertionURIRef;


+(id)createElement:(*id)arg0 ;


@end


#endif