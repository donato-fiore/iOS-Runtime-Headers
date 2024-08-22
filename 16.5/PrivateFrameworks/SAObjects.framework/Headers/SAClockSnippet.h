// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACLOCKSNIPPET_H
#define SACLOCKSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAClockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *clocks;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif