// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIPRONUNCIATIONSNIPPET_H
#define SAUIPRONUNCIATIONSNIPPET_H

@class NSArray, NSString;


#import "SAUISnippet.h"

@interface SAUIPronunciationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *cancelCommands;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSArray *pronunciations;
@property (copy, nonatomic) NSArray *selectNoneCommands;
@property (copy, nonatomic) NSString *selectNoneText;


+(id)pronunciationSnippet;
+(id)pronunciationSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif