// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPTEXTSNIPPETTEMPLATE_H
#define SAINTENTGROUPTEXTSNIPPETTEMPLATE_H

@class NSString, NSArray;


#import "SAIntentGroupSnippetTemplate.h"

@interface SAIntentGroupTextSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSArray *labelComponents;
@property (nonatomic) BOOL showsDisclosureIndicator;


+(id)textSnippetTemplate;
+(id)textSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif