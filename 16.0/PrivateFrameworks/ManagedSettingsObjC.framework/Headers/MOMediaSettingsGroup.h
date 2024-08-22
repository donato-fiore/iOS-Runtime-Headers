// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOMEDIASETTINGSGROUP_H
#define MOMEDIASETTINGSGROUP_H

@class NSNumber;


#import "MOSettingsGroup.h"

@interface MOMediaSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denyBookstoreErotica;
@property (retain, nonatomic) NSNumber *denyExplicitContent;
@property (retain, nonatomic) NSNumber *denyMusicService;
@property (retain, nonatomic) NSNumber *maximumMovieRating;
@property (retain, nonatomic) NSNumber *maximumTVShowRating;


+(id)groupName;


@end


#endif