// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGKOPENENDEDDOMAINOBJECT_H
#define SAGKOPENENDEDDOMAINOBJECT_H

@class NSArray;


#import "SAGKDomainObject.h"
#import "SAGKDirectAnswer.h"

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (retain, nonatomic) SAGKDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;


+(id)openEndedDomainObject;
+(id)openEndedDomainObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif