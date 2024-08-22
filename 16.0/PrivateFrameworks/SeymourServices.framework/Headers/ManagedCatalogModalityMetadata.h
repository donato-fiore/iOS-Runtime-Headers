// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDCATALOGMODALITYMETADATA_H
#define MANAGEDCATALOGMODALITYMETADATA_H

@class NSManagedObject, NSString, NSData;


#import "ManagedCatalogPreview.h"

@interface ManagedCatalogModalityMetadata : NSManagedObject

@property (nonatomic, copy) NSString *abridgedSummary;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif