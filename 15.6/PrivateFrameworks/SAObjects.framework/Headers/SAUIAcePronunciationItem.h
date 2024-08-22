// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIACEPRONUNCIATIONITEM_H
#define SAUIACEPRONUNCIATIONITEM_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tts;


+(id)acePronunciationItem;
+(id)acePronunciationItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif