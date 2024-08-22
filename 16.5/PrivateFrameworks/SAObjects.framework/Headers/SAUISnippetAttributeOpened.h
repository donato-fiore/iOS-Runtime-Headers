// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISNIPPETATTRIBUTEOPENED_H
#define SAUISNIPPETATTRIBUTEOPENED_H

@class NSString;


#import "SAUISnippetInteraction.h"

@interface SAUISnippetAttributeOpened : SAUISnippetInteraction

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *attributeValue;


+(id)snippetAttributeOpened;
+(id)snippetAttributeOpenedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif