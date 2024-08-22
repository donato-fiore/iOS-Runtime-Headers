// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSATHLETECOMPARISONSNIPPET_H
#define SASPORTSATHLETECOMPARISONSNIPPET_H

@class NSDictionary;


#import "SASportsAthleteSnippet.h"

@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (copy, nonatomic) NSDictionary *comparisonItemDetails;


+(id)athleteComparisonSnippet;
+(id)athleteComparisonSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif