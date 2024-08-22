// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAANSWERDIRECTANSWER_H
#define SAANSWERDIRECTANSWER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAAnswerSpeakableAnswer.h"

@interface SAAnswerDirectAnswer : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *answer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAAnswerSpeakableAnswer *speakableAnswer;
@property (readonly) Class superclass;


+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif