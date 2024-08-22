// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPPROFILESNIPPETTEMPLATE_H
#define SAINTENTGROUPPROFILESNIPPETTEMPLATE_H

@class NSString, NSArray;


#import "SAIntentGroupSnippetTemplate.h"

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *imageStyle;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSArray *labelComponents;


+(id)profileSnippetTemplate;
+(id)profileSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif