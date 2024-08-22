// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUILPARSEDEXPRESSION_H
#define SAUILPARSEDEXPRESSION_H

@class NSString;


#import "SADomainObject.h"
#import "SAUILParseableExpression.h"

@interface SAUILParsedExpression : SADomainObject

@property (retain, nonatomic) SAUILParseableExpression *parseableExpression;
@property (copy, nonatomic) NSString *parsedOutput;


+(id)parsedExpression;
+(id)parsedExpressionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif