// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDMEDIAMOMENT_H
#define MANAGEDMEDIAMOMENT_H

@class NSManagedObject;


#import "ManagedArtwork.h"
#import "ManagedCatalogWorkoutMetadata.h"

@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic, retain) ManagedArtwork *artwork;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat startTime;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif