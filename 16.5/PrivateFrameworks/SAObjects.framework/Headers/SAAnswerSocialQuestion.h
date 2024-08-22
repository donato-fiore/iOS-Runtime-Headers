// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAANSWERSOCIALQUESTION_H
#define SAANSWERSOCIALQUESTION_H

@class NSArray;


#import "SAAnswerAbstractSocialPost.h"

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSArray *socialAnswers;


+(id)socialQuestion;
+(id)socialQuestionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif