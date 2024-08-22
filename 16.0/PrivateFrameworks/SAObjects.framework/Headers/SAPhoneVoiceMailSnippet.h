// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEVOICEMAILSNIPPET_H
#define SAPHONEVOICEMAILSNIPPET_H

@class NSNumber, NSArray;
@protocol SAClientBoundCommand;


#import "SAUISnippet.h"

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *autoPlay;
@property (copy, nonatomic) NSArray *calls;
@property (copy, nonatomic) NSArray *playVoiceMailCommands;
@property (retain, nonatomic) NSObject<SAClientBoundCommand> *postPlayCommand;


+(id)voiceMailSnippet;
+(id)voiceMailSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif