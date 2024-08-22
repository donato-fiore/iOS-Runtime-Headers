// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPMESSAGECONTENTSNIPPETTEMPLATE_H
#define SAINTENTGROUPMESSAGECONTENTSNIPPETTEMPLATE_H

@class NSString;


#import "SAIntentGroupSnippetTemplate.h"

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL sentStatus;


+(id)messageContentSnippetTemplate;
+(id)messageContentSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif