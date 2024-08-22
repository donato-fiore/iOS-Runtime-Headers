// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPCHOICESETTINGSNIPPETTEMPLATE_H
#define SAINTENTGROUPCHOICESETTINGSNIPPETTEMPLATE_H

@protocol SAServerBoundCommand;


#import "SAIntentGroupSettingSnippetTemplate.h"

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSObject<SAServerBoundCommand> *updateSlotCommand;


+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif