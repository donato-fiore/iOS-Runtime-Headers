// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDMUSICTRACK_H
#define MANAGEDMUSICTRACK_H

@class NSManagedObject, NSString, NSSet;


#import "ManagedArtwork.h"

@interface ManagedMusicTrack : NSManagedObject

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) ManagedArtwork *artwork;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadatas;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, copy) NSString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif