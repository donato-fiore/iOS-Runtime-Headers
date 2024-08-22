// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPROJECTALBUM_H
#define PLPROJECTALBUM_H

@class NSData, NSString;


#import "PLManagedAlbum.h"

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;


+(BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg0 error:(*id)arg1 ;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 documentType:(id)arg2 projectExtensionIdentifier:(id)arg3 ;
+(id)validKindsForPersistence;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)setProjectPreviewImageData:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsAssetOrderKeys;
-(id)_previewImageFilename;
-(id)duplicateProjectPreviewImageData:(id)arg0 error:(*id)arg1 ;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)projectPreviewImageData;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;


@end


#endif