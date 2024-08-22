// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERDICTIONARYSTRUCTUREDANSWER_H
#define SAANSWERDICTIONARYSTRUCTUREDANSWER_H

@class NSString, NSArray, NSURL;
@protocol SAAnswerStructuredAnswer;


#import "AceObject.h"

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>



@property (copy, nonatomic) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *definitionGroups;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phoneticPronunciation;
@property (copy, nonatomic) NSURL *sound;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *syllables;
@property (copy, nonatomic) NSString *word;


+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif