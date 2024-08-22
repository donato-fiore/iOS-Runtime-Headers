// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKDOCUMENTROOT_H
#define TSKDOCUMENTROOT_H

@class TSPObject, TSULocale, NSMutableArray, NSDictionary, TSKChangeNotifier, NSString, TSKDocumentSupport, TSKPasteboardController;
@protocol TSKAccessControllerDelegate, TSKModel, TSKDocumentRootDelegate, TSULogContext;


#import "TSKAccessController.h"
#import "TSKAnnotationAuthorStorage.h"
#import "TSKAnnotationAuthor.h"
#import "TSKSelectionDispatcher.h"

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel>

 {
    BOOL _hasUserDefinedLocale;
    id<TSKDocumentRootDelegate> *_delegate;
    TSULocale *_documentLocale;
    os_unfair_lock_s _documentLocaleLock;
    NSMutableArray *_iCloudTeardownStack;
    BOOL _preventImageConversionOnOpen;
    id<TSULogContext> *_logContext;
    id *_collaborationDidUploadAllDataObserver;
}


@property (readonly, nonatomic) TSKAccessController *accessController; // ivar: _accessController
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage; // ivar: _annotationAuthorStorage
@property (readonly, nonatomic) NSUInteger applicationType;
@property (retain, nonatomic) TSKAnnotationAuthor *authorForFiltering; // ivar: _authorForFiltering
@property (readonly, nonatomic) NSUInteger availableSizeForMediaItems;
@property (readonly, nonatomic) BOOL canUseHEVC;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier; // ivar: _changeNotifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSKDocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSULocale *documentCreationLocale; // ivar: _documentCreationLocale
@property (nonatomic, getter=isDocumentCurrentlyImporting) BOOL documentCurrentlyImporting; // ivar: _documentCurrentlyImporting
@property (readonly, nonatomic) NSString *documentLanguage;
@property (retain) TSULocale *documentLocale;
@property (readonly, nonatomic) TSKDocumentSupport *documentSupport; // ivar: _documentSupport
@property (readonly, nonatomic) TSKDocumentSupport *documentSupportIfAvailable; // ivar: _documentSupportIfAvailable
@property (nonatomic, getter=isFindActive) BOOL findActive; // ivar: _isFindActive
@property (readonly, nonatomic) BOOL freehandDrawingsRequireSpacerShape;
@property (readonly, nonatomic) BOOL hasFloatingLocale;
@property (readonly, nonatomic) BOOL hasICloudConflict;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBeingLocalized; // ivar: _isBeingLocalized
@property (readonly, nonatomic) BOOL isCollaborativeClient;
@property (readonly, nonatomic) BOOL isCollaborativeClientOrServer;
@property (readonly, nonatomic) BOOL isCollaborativeServer;
@property (readonly, nonatomic) NSObject<TSULogContext> *logContext;
@property (readonly, nonatomic) NSUInteger maxEmbeddedMediaItemFileSize;
@property (readonly, nonatomic) NSUInteger maxMediaItemFileSize;
@property (readonly, nonatomic) NSUInteger maximumDocumentSize;
@property (readonly, nonatomic) NSUInteger minLargeDataLengthInBytes;
@property (retain, nonatomic) TSKPasteboardController *pasteboardController; // ivar: _pasteboardController
@property (readonly, nonatomic) TSKSelectionDispatcher *selectionDispatcher; // ivar: _selectionDispatcher
@property (nonatomic) BOOL shouldMeasureNegativelyTrackedTextCorrectly; // ivar: _shouldMeasureNegativelyTrackedTextCorrectly
@property (nonatomic) BOOL shouldPreventImageConversionOnOpen;
@property (readonly, nonatomic) BOOL shouldUseAnchoredDrawableWrapSlop;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useOptimizedTextVerticalAlignment; // ivar: _useOptimizedTextVerticalAlignment
@property (readonly, nonatomic) NSUInteger writingDirection;
@property (readonly, nonatomic) NSUInteger writingDirectionForStorage;


+(BOOL)needsObjectUUID;
-(BOOL)documentAllowsPencilAnnotationsOnModel:(id)arg0 ;
-(BOOL)documentDisallowsHighlightsOnStorage:(id)arg0 ;
-(BOOL)hasExpandedTables;
-(BOOL)hasICloudTeardownObserver;
-(BOOL)isDirectionRightToLeft;
-(BOOL)shouldDropOperationHistoryWithDocumentRevision:(id)arg0 ;
-(BOOL)shouldShowFloatingCommentInfo:(id)arg0 ;
-(BOOL)updateDocumentLocaleToCurrentIfNeeded;
-(BOOL)updateDocumentLocaleToUseLanguageIfNeeded:(id)arg0 ;
-(BOOL)writeData:(id)arg0 atDocumentCachePath:(id)arg1 ;
-(NSInteger)addObserverForICloudTeardownSuspendingCollaboration:(BOOL)arg0 block:(id)arg1 ;
-(NSInteger)addObserverForICloudTeardownWithBlock:(id)arg0 ;
-(id)boostPrimaryThreadQualityOfService;
-(id)calculationEngine;
-(id)commandForRemovingCommentsFromDrawables:(id)arg0 context:(id)arg1 ;
-(id)commandForUpdatingAfterInsertingDrawables:(id)arg0 context:(id)arg1 ;
-(id)currentAnnotationAuthorName;
-(id)currentAnnotationAuthorPrivateID;
-(id)customFormatList;
-(id)dataFromDocumentCachePath:(id)arg0 ;
-(id)documentCachePathWithRelativePath:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)makeIsolatedStyleMapper;
-(id)makeStyleMapper;
-(id)modelEnumerator;
-(id)modelEnumeratorForObjectsConformingToProtocol:(id)arg0 ;
-(id)modelEnumeratorForObjectsOfClass:(Class)arg0 ;
-(id)modelEnumeratorForObjectsPassingTest:(id)arg0 ;
-(id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg0 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 forObjectsConformingToProtocol:(id)arg1 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 forObjectsOfClass:(Class)arg1 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 forObjectsPassingTest:(id)arg1 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 forObjectsRespondingToSelector:(SEL)arg1 ;
-(id)tableIdRemappingCommandsForTablesInDrawables:(id)arg0 ;
-(id)tableIdRemappingCommandsForTablesInStorages:(id)arg0 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg0 ;
-(struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg0 ;
-(void)backgroundDocumentDidLoad;
-(void)blockForRecalcWithTimeout:(CGFloat)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)didAcquireReadLock;
-(void)didSaveWithEncryptionChange;
-(void)documentDidLoad;
-(void)dumpReaderWriterThreads;
-(void)enqueueTableIDRemappingCommandsForAddedDrawables:(id)arg0 andCallBlock:(id)arg1 ;
-(void)gilligan_documentDidInsertObject:(id)arg0 ;
-(void)gilligan_documentDidRemoveObject:(id)arg0 ;
-(void)gilligan_documentWillInsertObject:(id)arg0 ;
-(void)gilligan_documentWillRemoveObject:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)notifyICloudTeardownObserversWithReason:(NSUInteger)arg0 ;
-(void)p_addUploadObserver;
-(void)p_setUpControllersForBackground:(BOOL)arg0 ;
-(void)pauseRecalculation;
-(void)pauseRecalculationForBlock:(id)arg0 ;
-(void)pauseRecalculationSometimeSoon;
-(void)removeAllAnnotationsFromDrawables:(id)arg0 ;
-(void)removeICloudTeardownObserver:(NSInteger)arg0 ;
-(void)resumeRecalculation;
-(void)resumeRecalculationForBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setUpAccessControllerIfNeeded;
-(void)updateAnnotationAuthorList:(id)arg0 ;
-(void)updateForNonCommandChangesWithWriteLock:(id)arg0 ;
-(void)willClose;
-(void)willRelinquishReadLock;


@end


#endif