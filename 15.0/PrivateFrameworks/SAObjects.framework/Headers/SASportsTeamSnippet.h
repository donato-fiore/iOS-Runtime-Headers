// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSTEAMSNIPPET_H
#define SASPORTSTEAMSNIPPET_H

@class NSArray;


#import "SASportsSnippet.h"

@interface SASportsTeamSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *teams;


+(id)teamSnippet;
+(id)teamSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif