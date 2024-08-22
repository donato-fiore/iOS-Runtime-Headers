// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGKENCYCLOPEDIADOMAINOBJECT_H
#define SAGKENCYCLOPEDIADOMAINOBJECT_H

@class NSArray, NSString;


#import "SAGKDomainObject.h"

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameAnnotation;
@property (copy, nonatomic) NSArray *structuredAnswers;


+(id)encyclopediaDomainObject;
+(id)encyclopediaDomainObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif