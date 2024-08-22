// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEENTITYCORRELATORINTERNALSTATE_H
#define ATXMODEENTITYCORRELATORINTERNALSTATE_H

@class NSMutableSet, NSMutableDictionary, NSCountedSet, NSDate;

#import <Foundation/Foundation.h>

#import "ATXModeEvent.h"

@interface ATXModeEntityCorrelatorInternalState : NSObject

@property (retain, nonatomic) NSMutableSet *entitiesSeenForMostRecentModeEvent; // ivar: _entitiesSeenForMostRecentModeEvent
@property (retain, nonatomic) NSMutableDictionary *entityToEntityFeaturesDict; // ivar: _entityToEntityFeaturesDict
@property (retain, nonatomic) NSCountedSet *globalEntityOccurrences; // ivar: _globalEntityOccurrences
@property (retain, nonatomic) NSMutableDictionary *globalLaunchesHistogramPerEntity; // ivar: _globalLaunchesHistogramPerEntity
@property (retain, nonatomic) NSMutableDictionary *modeLaunchesHistogramPerEntity; // ivar: _modeLaunchesHistogramPerEntity
@property (retain, nonatomic) NSCountedSet *modeLocalEntityOccurrences; // ivar: _modeLocalEntityOccurrences
@property (nonatomic) NSUInteger modeOccurrences; // ivar: _modeOccurrences
@property (retain, nonatomic) ATXModeEvent *mostRecentModeEvent; // ivar: _mostRecentModeEvent
@property (nonatomic) BOOL seenAtLeastOneEntityEvent; // ivar: _seenAtLeastOneEntityEvent
@property (readonly, nonatomic) NSDate *today; // ivar: _today
@property (retain, nonatomic) NSCountedSet *uniqueModeOccurrences; // ivar: _uniqueModeOccurrences


-(id)init;


@end


#endif