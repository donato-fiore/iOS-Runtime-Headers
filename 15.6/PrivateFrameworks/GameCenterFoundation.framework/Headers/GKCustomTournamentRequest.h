// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCUSTOMTOURNAMENTREQUEST_H
#define GKCUSTOMTOURNAMENTREQUEST_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKCustomTournamentRequestInternal.h"
#import "GKPlayer.h"
#import "GKTournamentDefinition.h"

@interface GKCustomTournamentRequest : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat duration;
@property (retain, nonatomic) NSString *icon;
@property (retain) GKCustomTournamentRequestInternal *internal; // ivar: _internal
@property (nonatomic) BOOL isCreatorInTournament;
@property (nonatomic) NSInteger maxPlayers;
@property (nonatomic) NSInteger maxReplays;
@property (nonatomic) NSInteger minPlayers;
@property (nonatomic) NSInteger scoringMethod;
@property (nonatomic) NSInteger seedingMethod;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) GKPlayer *tournamentCreator;
@property (readonly, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (retain, nonatomic) NSString *tournamentName;


+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)initWithTournamentDefinition:(id)arg0 andCreator:(id)arg1 ;
-(void)createTournamentWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif