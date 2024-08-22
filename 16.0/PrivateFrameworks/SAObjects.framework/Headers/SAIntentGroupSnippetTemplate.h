// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSNIPPETTEMPLATE_H
#define SAINTENTGROUPSNIPPETTEMPLATE_H

@class NSArray, NSString;


#import "SADomainObject.h"
#import "SAUISnippet.h"

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (retain, nonatomic) SAUISnippet *detailSnippet;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *key;


+(id)snippetTemplate;
+(id)snippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif