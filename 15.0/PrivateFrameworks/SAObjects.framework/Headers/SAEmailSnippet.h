// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAEMAILSNIPPET_H
#define SAEMAILSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAEmailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *emails;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif