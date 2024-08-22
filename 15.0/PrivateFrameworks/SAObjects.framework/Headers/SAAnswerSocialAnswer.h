// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERSOCIALANSWER_H
#define SAANSWERSOCIALANSWER_H

@class NSNumber;


#import "SAAnswerAbstractSocialPost.h"

@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSNumber *selectedAnswer;


+(id)socialAnswer;
+(id)socialAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif