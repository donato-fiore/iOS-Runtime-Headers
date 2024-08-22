// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPACTIVITYINDICATORSNIPPETTEMPLATE_H
#define SAINTENTGROUPACTIVITYINDICATORSNIPPETTEMPLATE_H

@class NSString;


#import "SAIntentGroupSnippetTemplate.h"

@interface SAIntentGroupActivityIndicatorSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *detailText;


+(id)activityIndicatorSnippetTemplate;
+(id)activityIndicatorSnippetTemplateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif