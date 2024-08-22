// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENTDEFINITION_H
#define GKTOURNAMENTDEFINITION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKTournamentDefinitionInternal.h"
#import "GKRecurrenceRule.h"

@interface GKTournamentDefinition : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat PreRegistrationTime;
@property (readonly, nonatomic) NSInteger creationMethod;
@property (readonly, nonatomic) NSInteger customMaxPlayers;
@property (readonly, nonatomic) NSInteger customMaxReplays;
@property (readonly, nonatomic) NSInteger customMinPlayers;
@property (readonly, nonatomic) NSInteger customScoringMethods;
@property (readonly, nonatomic) NSInteger customSeedingMethods;
@property (readonly, nonatomic) BOOL customTournamentAllowIcon;
@property (readonly, nonatomic) CGFloat customTournamentDuration;
@property (readonly, nonatomic) NSString *customTournamentIcon;
@property (readonly, nonatomic) NSString *customTournamentName;
@property (readonly, nonatomic) NSInteger customTournamentNameFormat;
@property (retain) GKTournamentDefinitionInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSInteger maxPlayerShards;
@property (readonly, nonatomic) NSInteger maxPlayers;
@property (readonly, nonatomic) NSInteger maxReplays;
@property (readonly, nonatomic) NSInteger minPlayers;
@property (readonly, nonatomic) NSInteger participationType;
@property (readonly, nonatomic) GKRecurrenceRule *recurrenceRule;
@property (readonly, nonatomic) NSInteger scoringMethod;
@property (readonly, nonatomic) NSInteger seedingMethod;
@property (readonly, nonatomic) NSString *tournamentDefinitionID;
@property (readonly, nonatomic) NSString *tournamentDescription;
@property (readonly, nonatomic) CGFloat tournamentDuration;
@property (readonly, nonatomic) NSString *tournamentIcon;
@property (readonly, nonatomic) NSString *tournamentName;
@property (readonly, nonatomic) NSInteger tournamentNameFormat;
@property (readonly, nonatomic) NSInteger tournamentType;
@property (readonly, nonatomic) CGFloat typicalGameplayDuration;


+(BOOL)supportsSecureCoding;
+(void)loadTournamentDefinitionWithID:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadTournamentDefinitionsWithCompletionHandler:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)proposedNextCustomTournamentStartDate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadHistoricalDataForPlayer:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadTournamentsWithPredicate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif