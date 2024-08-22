// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEBOBJECT_H
#define SAWEBOBJECT_H

@class NSString;


#import "SADomainObject.h"
#import "SAWebWebSearchResult.h"

@interface SAWebObject : SADomainObject

@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) SAWebWebSearchResult *results;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif