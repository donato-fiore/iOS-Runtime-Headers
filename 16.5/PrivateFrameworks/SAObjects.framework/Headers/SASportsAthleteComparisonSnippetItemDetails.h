// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSATHLETECOMPARISONSNIPPETITEMDETAILS_H
#define SASPORTSATHLETECOMPARISONSNIPPETITEMDETAILS_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"
#import "SASportsMetadata.h"

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIAppPunchOut *leagueAppPunchOut;
@property (retain, nonatomic) SASportsMetadata *metadata;
@property (retain, nonatomic) SAUIAppPunchOut *providerPunchOut;
@property (readonly) Class superclass;


+(id)athleteComparisonSnippetItemDetails;
+(id)athleteComparisonSnippetItemDetailsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif