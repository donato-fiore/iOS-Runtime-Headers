// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKSNIPPET_H
#define SAGKSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"
#import "SAUIAppPunchOut.h"

@interface SAGKSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSArray *pods;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif