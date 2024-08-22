// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUSSNIPPET_H
#define SAUSSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAUSSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *sections;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif