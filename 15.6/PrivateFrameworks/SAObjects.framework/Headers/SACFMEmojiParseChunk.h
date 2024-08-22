// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFMEMOJIPARSECHUNK_H
#define SACFMEMOJIPARSECHUNK_H

@class NSArray;


#import "SACFMMessageTextParseChunk.h"

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (nonatomic) NSInteger emojiCount;
@property (copy, nonatomic) NSArray *inflectedEmojiList;


+(id)emojiParseChunk;
+(id)emojiParseChunkWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif