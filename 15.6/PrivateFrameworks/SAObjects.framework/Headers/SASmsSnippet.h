// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASMSSNIPPET_H
#define SASMSSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SASmsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *smss;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif