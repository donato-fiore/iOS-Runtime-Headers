// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASSPEECHALTERNATIVESSNIPPET_H
#define SASSPEECHALTERNATIVESSNIPPET_H

@class NSString;


#import "SAUISnippet.h"
#import "SASRecognition.h"

@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (nonatomic) NSInteger maxEntryToShow;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *sessionId;


+(id)speechAlternativesSnippet;
+(id)speechAlternativesSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif