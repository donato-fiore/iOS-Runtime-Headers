// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSYNCINFO_H
#define MTSYNCINFO_H

@class NSManagedObject, NSString;


#import "MTEpisode.h"
#import "MTPlaylist.h"
#import "MTPodcast.h"

@interface MTSyncInfo : NSManagedObject

@property (nonatomic) NSInteger artworkUpdateRevision;
@property (nonatomic) int entityType;
@property (weak, nonatomic) MTEpisode *episode;
@property (nonatomic) NSInteger insertionRevision;
@property (weak, nonatomic) MTPlaylist *playlist;
@property (weak, nonatomic) MTPodcast *podcast;
@property (nonatomic) NSInteger syncID;
@property (nonatomic) int syncability;
@property (nonatomic) NSInteger updateRevision;
@property (retain, nonatomic) NSString *uuid;


+(id)predicateForHasNoInverseRelation;
+(id)predicateForIsCurrentlySyncable:(BOOL)arg0 ;


@end


#endif