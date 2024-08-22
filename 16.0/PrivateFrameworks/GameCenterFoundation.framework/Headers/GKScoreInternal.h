// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSCOREINTERNAL_H
#define GKSCOREINTERNAL_H

@class NSString, NSDate;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKScoreInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *category;
@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *formattedValue; // ivar: _formattedValue
@property (retain, nonatomic) NSString *groupCategory;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier; // ivar: _groupLeaderboardIdentifier
@property (retain, nonatomic) NSString *leaderboardIdentifier; // ivar: _leaderboardIdentifier
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (readonly, nonatomic) NSString *playerID;
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (nonatomic) NSInteger value; // ivar: _value
@property (nonatomic) BOOL valueSet; // ivar: _valueSet


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serverRepresentation;


@end


#endif