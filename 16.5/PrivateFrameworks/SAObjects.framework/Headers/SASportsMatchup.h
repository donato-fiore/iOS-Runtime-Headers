// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSMATCHUP_H
#define SASPORTSMATCHUP_H

@class NSArray, NSString, NSNumber, NSDate;
@protocol SAServerBoundCommand;


#import "SADomainObject.h"
#import "SASportsEntity.h"
#import "SALCMLiveTuneInButton.h"
#import "SAUIAppPunchOut.h"
#import "SALCMToggleButton.h"

@interface SASportsMatchup : SADomainObject

@property (retain, nonatomic) SASportsEntity *awayEntity;
@property (copy, nonatomic) NSArray *awayLineScores;
@property (copy, nonatomic) NSString *awayScore;
@property (copy, nonatomic) NSNumber *awayShootoutPoints;
@property (copy, nonatomic) NSString *awayTeamRecordSummary;
@property (copy, nonatomic) NSString *currentPeriod;
@property (copy, nonatomic) NSNumber *expectedLineScoreCount;
@property (copy, nonatomic) NSString *favoredEntity;
@property (copy, nonatomic) NSString *gameSummary;
@property (copy, nonatomic) NSString *gameType;
@property (retain, nonatomic) NSObject<SAServerBoundCommand> *getAppsCommand;
@property (retain, nonatomic) NSObject<SAServerBoundCommand> *getModalDetailSnippetCommand;
@property (retain, nonatomic) SASportsEntity *homeEntity;
@property (copy, nonatomic) NSArray *homeLineScores;
@property (copy, nonatomic) NSString *homeScore;
@property (copy, nonatomic) NSNumber *homeShootoutPoints;
@property (copy, nonatomic) NSString *homeTeamRecordSummary;
@property (nonatomic) BOOL isAvailable;
@property (copy, nonatomic) NSNumber *isExplicitlyEndOfPeriod;
@property (nonatomic) BOOL isOnNow;
@property (nonatomic) BOOL isWatchlistable;
@property (copy, nonatomic) NSString *line;
@property (retain, nonatomic) SALCMLiveTuneInButton *liveTuneInButton;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *matchupOrder;
@property (copy, nonatomic) NSString *overUnder;
@property (copy, nonatomic) NSString *periodDescription;
@property (copy, nonatomic) NSArray *playSummaries;
@property (copy, nonatomic) NSNumber *playoff;
@property (retain, nonatomic) SAUIAppPunchOut *punchout;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSNumber *statsId;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *timeRemaining;
@property (copy, nonatomic) NSNumber *timeTBD;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SALCMToggleButton *toggleButton;
@property (copy, nonatomic) NSString *tournamentSeriesDescription;
@property (copy, nonatomic) NSArray *tvChannels;
@property (copy, nonatomic) NSString *winningEntity;


+(id)matchup;
+(id)matchupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif