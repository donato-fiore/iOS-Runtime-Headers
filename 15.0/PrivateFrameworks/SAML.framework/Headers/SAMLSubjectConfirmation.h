// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLSUBJECTCONFIRMATION_H
#define SAMLSUBJECTCONFIRMATION_H

@class NSString, NSDate;


#import "SAMLBaseElement.h"
#import "SAMLNameId.h"

@interface SAMLSubjectConfirmation : SAMLBaseElement

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *inResponseTo;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) SAMLNameId *nameId;
@property (readonly, nonatomic) NSDate *notBefore;
@property (readonly, nonatomic) NSDate *notOnOrAfter;
@property (readonly, nonatomic) NSString *recipient;


+(id)createElement:(*id)arg0 ;
-(?)xmlNode;


@end


#endif