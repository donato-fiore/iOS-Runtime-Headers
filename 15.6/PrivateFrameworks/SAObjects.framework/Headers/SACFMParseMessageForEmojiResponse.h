// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFMPARSEMESSAGEFOREMOJIRESPONSE_H
#define SACFMPARSEMESSAGEFOREMOJIRESPONSE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SACFMParseMessageForEmojiResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *parseChunks;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)parseMessageForEmojiResponse;
+(id)parseMessageForEmojiResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif