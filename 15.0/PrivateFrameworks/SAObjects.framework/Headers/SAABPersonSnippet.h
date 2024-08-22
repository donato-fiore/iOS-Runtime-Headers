// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAABPERSONSNIPPET_H
#define SAABPERSONSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAABPersonSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *displayProperties;
@property (copy, nonatomic) NSArray *persons;


+(id)personSnippet;
+(id)personSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif