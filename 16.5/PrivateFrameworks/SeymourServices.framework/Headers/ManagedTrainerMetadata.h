// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDTRAINERMETADATA_H
#define MANAGEDTRAINERMETADATA_H

@class NSManagedObject, NSString, NSSet;


#import "ManagedCatalogPreview.h"

@interface ManagedTrainerMetadata : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *informalName;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, retain) NSSet *socialMediaHandles;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif