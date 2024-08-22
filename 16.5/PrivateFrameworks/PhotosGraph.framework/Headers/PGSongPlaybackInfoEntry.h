// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSONGPLAYBACKINFOENTRY_H
#define PGSONGPLAYBACKINFOENTRY_H

@class NSManagedObject, NSString;


#import "PGSongEntry.h"

@interface PGSongPlaybackInfoEntry : NSManagedObject

@property (nonatomic, copy) NSString *dateUTC;
@property (nonatomic, copy) NSString *devices;
@property (nonatomic, copy) NSString *hoursUTC;
@property (nonatomic) BOOL ignoreForRecommendations;
@property (nonatomic, copy) NSString *lastEndReason;
@property (nonatomic) NSInteger playCount;
@property (nonatomic) NSInteger playDurationInMilliseconds;
@property (nonatomic) NSInteger skipCount;
@property (nonatomic, retain) PGSongEntry *song;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif