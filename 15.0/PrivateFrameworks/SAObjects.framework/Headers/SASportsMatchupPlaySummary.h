// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPORTSMATCHUPPLAYSUMMARY_H
#define SASPORTSMATCHUPPLAYSUMMARY_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASportsAthlete.h"

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>



@property (nonatomic) BOOL appliesToAwayTeam;
@property (nonatomic) BOOL appliesToHomeTeam;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *nonFormattedTime;
@property (retain, nonatomic) SASportsAthlete *offensivePlayer;
@property (copy, nonatomic) NSString *summaryDescription;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *time;


+(id)matchupPlaySummary;
+(id)matchupPlaySummaryWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif