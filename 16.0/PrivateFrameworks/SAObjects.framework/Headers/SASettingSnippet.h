// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSNIPPET_H
#define SASETTINGSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SASettingSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *settingKeys;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif