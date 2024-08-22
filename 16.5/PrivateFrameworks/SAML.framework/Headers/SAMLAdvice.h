// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLADVICE_H
#define SAMLADVICE_H

@class NSString;


#import "SAMLBaseElement.h"
#import "SAMLAssertion.h"

@interface SAMLAdvice : SAMLBaseElement

@property (retain, nonatomic) SAMLAssertion *assertion;
@property (retain, nonatomic) NSString *assertionIDRef;
@property (retain, nonatomic) NSString *assertionURIRef;


+(id)createElement:(*id)arg0 ;


@end


#endif