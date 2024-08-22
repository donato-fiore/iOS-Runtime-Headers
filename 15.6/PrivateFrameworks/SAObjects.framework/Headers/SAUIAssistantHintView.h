// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIASSISTANTHINTVIEW_H
#define SAUIASSISTANTHINTVIEW_H

@class NSArray;


#import "SAUIAssistantUtteranceView.h"

@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *regions;


+(id)assistantHintView;
+(id)assistantHintViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif