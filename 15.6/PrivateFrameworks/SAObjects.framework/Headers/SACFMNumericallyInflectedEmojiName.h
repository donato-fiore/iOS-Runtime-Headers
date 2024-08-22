// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFMNUMERICALLYINFLECTEDEMOJINAME_H
#define SACFMNUMERICALLYINFLECTEDEMOJINAME_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SACFMNumericallyInflectedEmojiName : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *withEmoji;
@property (copy, nonatomic) NSString *withoutEmoji;


+(id)numericallyInflectedEmojiName;
+(id)numericallyInflectedEmojiNameWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif