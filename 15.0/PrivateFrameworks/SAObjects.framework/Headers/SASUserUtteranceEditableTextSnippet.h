// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASUSERUTTERANCEEDITABLETEXTSNIPPET_H
#define SASUSERUTTERANCEEDITABLETEXTSNIPPET_H

@class NSString;


#import "SAUISnippet.h"

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utterance;


+(id)userUtteranceEditableTextSnippet;
+(id)userUtteranceEditableTextSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif