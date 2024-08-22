// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPORTSSNIPPET_H
#define SASPORTSSNIPPET_H



#import "SAUISnippet.h"
#import "SASportsLeague.h"
#import "SAUIAppPunchOut.h"

@interface SASportsSnippet : SAUISnippet

@property (retain, nonatomic) SASportsLeague *league;
@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif