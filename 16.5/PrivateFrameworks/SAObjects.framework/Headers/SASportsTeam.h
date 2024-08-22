// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSTEAM_H
#define SASPORTSTEAM_H

@class NSString, NSArray, NSNumber;


#import "SASportsEntity.h"

@interface SASportsTeam : SASportsEntity

@property (copy, nonatomic) NSString *abbreviatedName;
@property (nonatomic) BOOL alwaysUseAthleteFullName;
@property (copy, nonatomic) NSArray *athletes;
@property (copy, nonatomic) NSString *awayLosses;
@property (copy, nonatomic) NSString *awayOvertimeLosses;
@property (copy, nonatomic) NSString *awayPoints;
@property (copy, nonatomic) NSString *awayTies;
@property (copy, nonatomic) NSString *awayWins;
@property (copy, nonatomic) NSNumber *clinchedQualificationPosition;
@property (copy, nonatomic) NSNumber *conferencePosition;
@property (copy, nonatomic) NSString *gamesBehind;
@property (copy, nonatomic) NSString *gamesPlayed;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSNumber *groupPosition;
@property (copy, nonatomic) NSString *groupPositionDescription;
@property (copy, nonatomic) NSString *homeLosses;
@property (copy, nonatomic) NSString *homeOvertimeLosses;
@property (copy, nonatomic) NSString *homePoints;
@property (copy, nonatomic) NSString *homeTies;
@property (copy, nonatomic) NSString *homeWins;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *losses;
@property (copy, nonatomic) NSString *monogram;
@property (copy, nonatomic) NSString *netRunRate;
@property (copy, nonatomic) NSArray *news;
@property (copy, nonatomic) NSString *overtimeLosses;
@property (copy, nonatomic) NSString *points;
@property (copy, nonatomic) NSString *pointsAgainst;
@property (copy, nonatomic) NSString *pointsFor;
@property (copy, nonatomic) NSNumber *primaryColor;
@property (copy, nonatomic) NSString *qualificationPosition;
@property (copy, nonatomic) NSString *qualificationPositionSummary;
@property (copy, nonatomic) NSArray *rankings;
@property (copy, nonatomic) NSNumber *secondaryColor;
@property (copy, nonatomic) NSArray *statistics;
@property (copy, nonatomic) NSString *streakNumber;
@property (copy, nonatomic) NSString *streakType;
@property (copy, nonatomic) NSString *ties;
@property (copy, nonatomic) NSString *venueLocation;
@property (copy, nonatomic) NSString *venueName;
@property (copy, nonatomic) NSString *winPercentage;
@property (copy, nonatomic) NSString *wins;


+(id)team;
+(id)teamWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif