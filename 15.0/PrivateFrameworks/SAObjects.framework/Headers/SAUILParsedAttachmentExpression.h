// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUILPARSEDATTACHMENTEXPRESSION_H
#define SAUILPARSEDATTACHMENTEXPRESSION_H

@class NSData;


#import "SAUILParsedExpression.h"

@interface SAUILParsedAttachmentExpression : SAUILParsedExpression

@property (copy, nonatomic) NSData *attachment;


+(id)parsedAttachmentExpression;
+(id)parsedAttachmentExpressionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif