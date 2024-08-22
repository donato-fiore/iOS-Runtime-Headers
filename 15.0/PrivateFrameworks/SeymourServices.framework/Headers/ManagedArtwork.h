// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDARTWORK_H
#define MANAGEDARTWORK_H

@class NSManagedObject, NSString;


#import "ManagedCatalogModalityMetadata.h"
#import "ManagedCatalogProgramMetadata.h"
#import "ManagedCatalogWorkoutMetadata.h"
#import "ManagedTrainerReference.h"
#import "ManagedMediaMoment.h"
#import "ManagedMusicTrack.h"

@interface ManagedArtwork : NSManagedObject

@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, retain) ManagedCatalogModalityMetadata *catalogModalityMetadata;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, retain) ManagedTrainerReference *contributorReference;
@property (nonatomic, copy) NSString *flavor;
@property (nonatomic) int height;
@property (nonatomic, retain) ManagedMediaMoment *mediaMoment;
@property (nonatomic, retain) ManagedMusicTrack *musicTrack;
@property (nonatomic, copy) NSString *template;
@property (nonatomic, copy) NSString *textColor;
@property (nonatomic) int width;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif