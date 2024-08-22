// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAANSWERDOMAINOBJECT_H
#define SAANSWERDOMAINOBJECT_H

@class NSString, NSArray;


#import "SADomainObject.h"
#import "SAUIAppPunchOut.h"
#import "SAAnswerDirectAnswer.h"

@interface SAAnswerDomainObject : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) SAAnswerDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;


+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif