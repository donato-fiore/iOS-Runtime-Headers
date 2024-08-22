// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIERRORSNIPPET_H
#define SAUIERRORSNIPPET_H

@class NSString;


#import "SAUISnippet.h"

@interface SAUIErrorSnippet : SAUISnippet

@property (copy, nonatomic) NSString *message;


+(id)errorSnippet;
+(id)errorSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif