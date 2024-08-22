// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMANAGEDDOCUMENT_H
#define UIMANAGEDDOCUMENT_H

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSDictionary, NSString;


#import "UIDocument.h"

@interface UIManagedDocument : UIDocument {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSDictionary *_documentMetadata;
    __mdocFlags _mdocFlags;
}


@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (copy, nonatomic) NSString *modelConfiguration; // ivar: modelConfiguration
@property (copy, nonatomic) NSDictionary *persistentStoreOptions; // ivar: persistentStoreOptions


+(BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg0 ;
+(id)additionalContentPathComponent;
+(id)persistentStoreName;
+(void)initialize;
-(BOOL)_writeMetadataToDocumentURL:(id)arg0 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg0 ofType:(id)arg1 modelConfiguration:(id)arg2 storeOptions:(id)arg3 error:(*id)arg4 ;
-(BOOL)readAdditionalContentFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeAdditionalContent:(id)arg0 toURL:(id)arg1 originalContentsURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeContents:(id)arg0 andAttributes:(id)arg1 safelyToURL:(id)arg2 forSaveOperation:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeContents:(id)arg0 toURL:(id)arg1 forSaveOperation:(NSInteger)arg2 originalContentsURL:(id)arg3 error:(*id)arg4 ;
-(id)_readMetadataFromDocumentURL:(id)arg0 ;
-(id)additionalContentForURL:(id)arg0 error:(*id)arg1 ;
-(id)contentsForType:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)persistentStoreTypeForFileType:(id)arg0 ;
-(void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg0 toSyncedURL:(id)arg1 ;
-(void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg0 toNonSyncedURL:(id)arg1 ;
-(void)dealloc;
-(void)revertToContentsOfURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif