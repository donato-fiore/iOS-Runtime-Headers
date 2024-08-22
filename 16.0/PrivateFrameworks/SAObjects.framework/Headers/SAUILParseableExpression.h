// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUILPARSEABLEEXPRESSION_H
#define SAUILPARSEABLEEXPRESSION_H

@class NSString;


#import "SADomainObject.h"

@interface SAUILParseableExpression : SADomainObject

@property (retain, nonatomic) SADomainObject *context;
@property (copy, nonatomic) NSString *expressionString;


+(id)parseableExpression;
+(id)parseableExpressionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif