// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAANSWEROBJECT_H
#define SAANSWEROBJECT_H

@class NSArray, NSString;


#import "SADomainObject.h"

@interface SAAnswerObject : SADomainObject

@property (copy, nonatomic) NSArray *lines;
@property (copy, nonatomic) NSString *title;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif