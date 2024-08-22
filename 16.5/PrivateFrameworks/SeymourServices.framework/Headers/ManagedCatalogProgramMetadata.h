// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCATALOGPROGRAMMETADATA_H
#define MANAGEDCATALOGPROGRAMMETADATA_H

@class NSManagedObject, NSSet, NSData, NSString;


#import "ManagedCatalogPreview.h"

@interface ManagedCatalogProgramMetadata : NSManagedObject

@property (nonatomic, retain) NSSet *accessibilityFeatures;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) NSSet *contributors;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, retain) ManagedCatalogPreview *preview;
@property (nonatomic, copy) NSString *previewStreamingURL;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif