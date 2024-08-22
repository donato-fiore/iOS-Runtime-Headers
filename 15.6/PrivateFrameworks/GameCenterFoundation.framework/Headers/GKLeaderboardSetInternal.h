// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLEADERBOARDSETINTERNAL_H
#define GKLEADERBOARDSETINTERNAL_H

@class NSString, NSDictionary;


#import "GKInternalRepresentation.h"

@interface GKLeaderboardSetInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) NSDictionary *icons; // ivar: _icons
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDictionary *leaderboardIdentifiers; // ivar: _leaderboardIdentifiers
@property (retain, nonatomic) NSString *setIdentifier;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif