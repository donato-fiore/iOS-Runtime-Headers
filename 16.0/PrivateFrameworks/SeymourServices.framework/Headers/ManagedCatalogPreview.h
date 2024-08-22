// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDCATALOGPREVIEW_H
#define MANAGEDCATALOGPREVIEW_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedCatalogPreview : NSManagedObject

@property (nonatomic, retain) NSSet *catalogModalityMetadata;
@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, retain) NSSet *trainerMetadata;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif