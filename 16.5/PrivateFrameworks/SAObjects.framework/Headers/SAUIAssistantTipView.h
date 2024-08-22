// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIASSISTANTTIPVIEW_H
#define SAUIASSISTANTTIPVIEW_H

@class NSString;


#import "SAUIAssistantUtteranceView.h"

@interface SAUIAssistantTipView : SAUIAssistantUtteranceView

@property (copy, nonatomic) NSString *flowIdentifier;
@property (copy, nonatomic) NSString *tipPrefix;


+(id)assistantTipView;
+(id)assistantTipViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif