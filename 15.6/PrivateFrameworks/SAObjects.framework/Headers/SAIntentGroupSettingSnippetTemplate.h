// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPSETTINGSNIPPETTEMPLATE_H
#define SAINTENTGROUPSETTINGSNIPPETTEMPLATE_H

@class NSString;


#import "SAIntentGroupSnippetTemplate.h"

@interface SAIntentGroupSettingSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *text;


+(id)settingSnippetTemplate;
+(id)settingSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif