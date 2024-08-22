// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKWEBSEARCHDOMAINOBJECT_H
#define SAGKWEBSEARCHDOMAINOBJECT_H

@class NSArray, NSString;


#import "SAGKDomainObject.h"

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *query;


+(id)webSearchDomainObject;
+(id)webSearchDomainObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif