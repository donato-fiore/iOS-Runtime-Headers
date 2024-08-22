// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACFMPARSEMESSAGEFOREMOJIREQUEST_H
#define SACFMPARSEMESSAGEFOREMOJIREQUEST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *messageText;


+(id)parseMessageForEmojiRequest;
+(id)parseMessageForEmojiRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif