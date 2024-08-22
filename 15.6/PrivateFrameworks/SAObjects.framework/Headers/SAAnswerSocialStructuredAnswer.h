// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERSOCIALSTRUCTUREDANSWER_H
#define SAANSWERSOCIALSTRUCTUREDANSWER_H

@class NSString, NSArray;
@protocol SAAnswerStructuredAnswer;


#import "AceObject.h"

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer>



@property (copy, nonatomic) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *socialQuestions;
@property (readonly) Class superclass;


+(id)socialStructuredAnswer;
+(id)socialStructuredAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif