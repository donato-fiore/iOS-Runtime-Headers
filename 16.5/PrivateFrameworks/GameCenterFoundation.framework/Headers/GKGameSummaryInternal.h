// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGAMESUMMARYINTERNAL_H
#define GKGAMESUMMARYINTERNAL_H

@class NSNumber, NSString, NSSet, NSDate;


#import "GKInternalRepresentation.h"

@interface GKGameSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSSet *compatiblePlatforms; // ivar: _compatiblePlatforms
@property (nonatomic) BOOL isArcade; // ivar: _isArcade
@property (retain, nonatomic) NSDate *playedAt; // ivar: _playedAt


+(id)secureCodedPropertyKeys;
-(id)description;
-(id)initWithGameSummary:(id)arg0 ;


@end


#endif