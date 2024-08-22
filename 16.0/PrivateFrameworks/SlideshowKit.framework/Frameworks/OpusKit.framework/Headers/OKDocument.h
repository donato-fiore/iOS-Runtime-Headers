// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKDOCUMENT_H
#define OKDOCUMENT_H

@class UIDocument, NSRecursiveLock;
@protocol OKDocumentDelegate;


#import "OKPresentation.h"

@interface OKDocument : UIDocument {
    NSRecursiveLock *_posterImageLock;
}


@property (nonatomic) NSObject<OKDocumentDelegate> *delegate; // ivar: _delegate
@property BOOL hasPosterImageChanged; // ivar: _hasPosterImageChanged
@property BOOL isClosing; // ivar: _isClosing
@property *CGImage posterImage; // ivar: _posterImage
@property (retain) OKPresentation *presentation; // ivar: _presentation


+(id)_fileWrapperPosterImageFilenameKeyWithResolution:(NSUInteger)arg0 ;
+(id)_hashForImportedResourceURL:(id)arg0 ;
+(id)_importedMediaURLForImportedResourceURL:(id)arg0 withDocumentURL:(id)arg1 extension:(id)arg2 ;
+(id)_importedMetadataURLForImportedResourceURL:(id)arg0 withDocumentURL:(id)arg1 ;
+(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg0 withDocumentURL:(id)arg1 ;
+(id)_importedResourceURLWithHash:(id)arg0 ;
+(id)_importedResourcesDirectoryURLForDocumentURL:(id)arg0 ;
+(id)_importedThumbnailURLForImportedResourceURL:(id)arg0 withDocumentURL:(id)arg1 withExtension:(id)arg2 ;
+(id)_posterImageURLForFileURL:(id)arg0 withResolution:(NSUInteger)arg1 ;
+(id)_scriptURLForDocumentURL:(id)arg0 ;
+(id)infoForFileURL:(id)arg0 coordinateReading:(BOOL)arg1 ;
+(struct CGImage *)retainedPosterImageForFileURL:(id)arg0 withResolution:(NSUInteger)arg1 coordinateReading:(BOOL)arg2 ;
-(BOOL)_hasThumbnailForImportedResourceURL:(id)arg0 ;
-(BOOL)_hasThumbnailForImportedResourceURL:(id)arg0 size:(struct CGSize )arg1 ;
-(BOOL)_hasThumbnailFromMediaForImportedResourceURL:(id)arg0 ;
-(BOOL)_hasUnusedResources;
-(BOOL)_readImportedResourceURL:(id)arg0 error:(*id)arg1 byMediaAccessor:(id)arg2 ;
-(BOOL)_readImportedResourceURL:(id)arg0 error:(*id)arg1 byMetadataAccessor:(id)arg2 ;
-(BOOL)_readImportedResourceURL:(id)arg0 error:(*id)arg1 byThumbnailAccessor:(id)arg2 ;
-(BOOL)_readImportedResourceURL:(id)arg0 size:(struct CGSize )arg1 error:(*id)arg2 byThumbnailAccessor:(id)arg3 ;
-(BOOL)_updateImportedResourceURL:(id)arg0 error:(*id)arg1 byMetadataAccessor:(id)arg2 ;
-(BOOL)_updateImportedResourceURL:(id)arg0 size:(struct CGSize )arg1 error:(*id)arg2 byThumbnailAccessor:(id)arg3 ;
// -(BOOL)deleteImportedResourceURLs:(id)arg0 progressBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)isImportedResourceURLEmbedded:(id)arg0 ;
-(BOOL)loadFromContents:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeContents:(id)arg0 andAttributes:(id)arg1 safelyToURL:(id)arg2 forSaveOperation:(NSInteger)arg3 error:(*id)arg4 ;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)_extensionForImportedResourceURL:(id)arg0 ;
-(id)_extensionForThumbnailImportedResourceURL:(id)arg0 ;
-(id)_importedMediaURLForImportedResourceURL:(id)arg0 ;
-(id)_importedMediaURLForImportedResourceURL:(id)arg0 withImportedResourceDirectoryURL:(id)arg1 withExtension:(id)arg2 ;
-(id)_importedMetadataURLForImportedResourceURL:(id)arg0 ;
-(id)_importedMetadataURLWithImportedResourceDirectoryURL:(id)arg0 ;
-(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg0 ;
-(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg0 withImportedResourcesDirectoryURL:(id)arg1 ;
-(id)_importedResourceURLForRessourceURL:(id)arg0 ;
-(id)_importedResourcesDirectoryURL;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg0 ;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg0 resolution:(NSUInteger)arg1 ;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg0 withImportedResourceDirectoryURL:(id)arg1 withExtension:(id)arg2 ;
-(id)_importedThumbnailsDirectoryURLForImportedResourceURL:(id)arg0 ;
-(id)_importedThumbnailsURLWithImportedResourceDirectoryURL:(id)arg0 ;
-(id)_metadataForImportedResourceURL:(id)arg0 ;
-(id)_metadataObjectForKey:(id)arg0 forImportedResourceURL:(id)arg1 ;
-(id)_scriptURL;
-(id)contentsForType:(id)arg0 error:(*id)arg1 ;
-(id)documentURL;
// -(id)importResourceURL:(id)arg0 opaque:(BOOL)arg1 force:(BOOL)arg2 progressBlock:(id)arg3 error:(unk)arg4  ;
// -(id)importResourceURLs:(id)arg0 opaque:(BOOL)arg1 force:(BOOL)arg2 progressBlock:(id)arg3 error:(unk)arg4  ;
-(id)importedResourceURLs;
-(id)initWithFileURL:(id)arg0 ;
-(id)localizedName;
// -(id)prepareMediaURL:(id)arg0 force:(BOOL)arg1 colorSpace:(id)arg2 progressBlock:(id)arg3 error:(unk)arg4  ;
// -(id)prepareMediaURLs:(id)arg0 force:(BOOL)arg1 colorSpace:(id)arg2 progressBlock:(id)arg3 error:(unk)arg4  ;
-(struct CGImage *)_thumbnailForImportedResourceURL:(id)arg0 ;
-(struct CGImage *)_thumbnailForImportedResourceURL:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGImage *)_thumbnailFromMediaForImportedResourceURL:(id)arg0 ;
-(struct CGImage *)_thumbnailFromMediaForImportedResourceURL:(id)arg0 size:(struct CGSize )arg1 ;
-(void)_cleanupUnusedResources;
-(void)_commonInit;
-(void)_didEnterBackgroundNotification:(id)arg0 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg0 ;
-(void)_saveThumbnailToDisk:(struct CGImage *)arg0 forImportedResourceURL:(id)arg1 size:(struct CGSize )arg2 ;
-(void)_updateChangeCount:(NSUInteger)arg0 ;
-(void)_willEnterForegroundNotification:(id)arg0 ;
-(void)_willTerminateNotification:(id)arg0 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disableEditing;
-(void)enableEditing;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)revertToContentsOfURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveToURL:(id)arg0 forSaveOperation:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif