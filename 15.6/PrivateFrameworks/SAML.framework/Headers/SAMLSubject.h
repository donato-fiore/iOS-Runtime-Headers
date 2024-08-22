// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLSUBJECT_H
#define SAMLSUBJECT_H

@class NSArray;


#import "SAMLBaseElement.h"
#import "SAMLNameId.h"

@interface SAMLSubject : SAMLBaseElement

@property (readonly, nonatomic) SAMLNameId *nameId;
@property (readonly, nonatomic) NSArray *subjectConfirmations;


+(id)createElement:(*id)arg0 ;


@end


#endif