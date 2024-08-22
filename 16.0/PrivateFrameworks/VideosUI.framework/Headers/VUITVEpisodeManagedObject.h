// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITVEPISODEMANAGEDOBJECT_H
#define VUITVEPISODEMANAGEDOBJECT_H

@class NSNumber;


#import "VUIVideoManagedObject.h"
#import "VUITVSeasonManagedObject.h"
#import "VUITVSeriesManagedObject.h"

@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (copy, nonatomic) NSNumber *episodeNumberInSeason;
@property (copy, nonatomic) NSNumber *episodeNumberInSeries;
@property (copy, nonatomic) NSNumber *fractionalEpisodeNumberInSeason;
@property (retain, nonatomic) VUITVSeasonManagedObject *season;
@property (retain, nonatomic) VUITVSeriesManagedObject *series;


+(id)fetchRequest;


@end


#endif