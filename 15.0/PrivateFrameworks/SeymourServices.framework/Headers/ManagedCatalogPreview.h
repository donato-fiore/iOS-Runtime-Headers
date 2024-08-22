// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGPREVIEW_H
#define MANAGEDCATALOGPREVIEW_H

@class NSManagedObject, NSString;


#import "ManagedCatalogModalityMetadata.h"
#import "ManagedCatalogProgramMetadata.h"
#import "ManagedCatalogWorkoutMetadata.h"
#import "ManagedTrainerMetadata.h"

@interface ManagedCatalogPreview : NSManagedObject

@property (nonatomic, retain) ManagedCatalogModalityMetadata *catalogModalityMetadata;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, retain) ManagedTrainerMetadata *trainerMetadata;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif