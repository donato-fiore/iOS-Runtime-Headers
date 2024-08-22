// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSADOCUMENTROOT_H
#define TSADOCUMENTROOT_H

@class TSWPDocumentRoot, NSMutableDictionary, TSPLazyReference, NSMutableSet, NSString, TSCECalculationEngine, TSTCustomFormatList, TSKCustomFormatList, SFUCryptoKey, NSArray, TSADocumentInfo, TSADrawableFactory, TSDFreehandDrawingToolkitUIState, NSMapTable, NSDictionary, NSSet, TSKPencilAnnotationUIState, TSKViewState;
@protocol TSKPencilAnnotationSupportedDocument, TSDImportExportDelegate, TSDScrollingAwareChangeSource, OS_dispatch_queue, TSAUIState;


#import "TSAFunctionBrowserState.h"
#import "TSAShortcutController.h"

@interface TSADocumentRoot : TSWPDocumentRoot <TSKPencilAnnotationSupportedDocument, TSDImportExportDelegate, TSDScrollingAwareChangeSource>

 {
    uint8_t _needsToCaptureViewState;
    NSMutableDictionary *_upgradeState;
    TSPLazyReference *_viewStateReference;
    NSMutableSet *_warnings;
    NSString *_documentLanguage;
    NSUInteger _documentLanguageWritingDirection;
    TSCECalculationEngine *_calculationEngine;
    TSAFunctionBrowserState *_functionBrowserState;
    TSTCustomFormatList *_deprecatedTablesCustomFormatList;
    TSKCustomFormatList *_tablesCustomFormatList;
    TSAShortcutController *_shortcutController;
    BOOL _needsMediaCompatibilityUpgrade;
    BOOL _collaborativeMediaCompatibilityUpgradeDidFail;
    BOOL _canUseHEVC;
    BOOL _didPauseRecalculationForBackgroundDocument;
    BOOL _preparedForCollaborationSessionAfterConnecting;
    NSString *_templateIdentifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    SFUCryptoKey *_accessQueue_documentCacheDecryptionKey;
    NSObject<OS_dispatch_queue> *_fetchLatestRevisionQueue;
}


@property (copy, nonatomic) NSArray *buildVersionHistory; // ivar: _buildVersionHistory
@property (retain, nonatomic) TSCECalculationEngine *calculationEngine;
@property (nonatomic) BOOL collaborativeMediaCompatibilityUpgradeDidFail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoadDocumentFromRevert; // ivar: _didLoadDocumentFromRevert
@property (nonatomic) BOOL didLoadDocumentFromTemplate; // ivar: _didLoadDocumentFromTemplate
@property (readonly, nonatomic) TSADocumentInfo *documentInfo;
@property (readonly, nonatomic) BOOL documentLocaleWasUpdated; // ivar: _documentLocaleWasUpdated
@property (readonly, nonatomic) TSADrawableFactory *drawableFactory;
@property (readonly, nonatomic) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (readonly, nonatomic) BOOL hasFloatingLocale;
@property (nonatomic) BOOL hasPreUFFVersion; // ivar: _hasPreUFFVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property (readonly, nonatomic) NSMapTable *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property (readonly, nonatomic) BOOL isBrowsingVersions;
@property (readonly, nonatomic) BOOL isClosed; // ivar: _isClosed
@property (readonly, nonatomic) BOOL isLoaded; // ivar: _didLoadControllers
@property (readonly, nonatomic) BOOL isMultiPageForQuickLook;
@property (readonly, nonatomic) NSDictionary *missingFontNamesAndWarningMessages;
@property (readonly, nonatomic) NSSet *missingFontWarningMessages;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needsMediaCompatibilityUpgrade;
@property (readonly, nonatomic) NSDictionary *packageDataForWrite;
@property (readonly, nonatomic) TSKPencilAnnotationUIState *pencilAnnotationUIState;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *templateIdentifier;
@property (retain, nonatomic) NSObject<TSAUIState> *uiState; // ivar: _uiState
@property (readonly, nonatomic) TSKViewState *viewState;


+(BOOL)doesTopMostContainerSupportRTLOrigin;
+(BOOL)shouldShowImportedDataNotificationsOnOpen;
+(BOOL)writePreviewImagesToPackageDataWriter:(id)arg0 scalableImage:(id)arg1 ;
+(BOOL)writePreviewImagesToPackageDataWriter:(id)arg0 scalableImage:(id)arg1 group:(id)arg2 queue:(id)arg3 ;
+(BOOL)writePreviewImagesToPath:(id)arg0 scalableImage:(id)arg1 ;
+(BOOL)writePreviewImagesToPath:(id)arg0 scalableImage:(id)arg1 group:(id)arg2 queue:(id)arg3 ;
+(NSUInteger)previewTypeForCurrentDevice;
+(id)_localeForUnlocalizedValues;
+(id)_localizedStringKeyForValue:(CGFloat)arg0 templateName:(id)arg1 tableInfo:(id)arg2 unlocalizedTableName:(id)arg3 cellAddress:(struct TSUCellCoord )arg4 defaultValue:(*id)arg5 ;
+(id)identifierForAttachmentNumber:(NSUInteger)arg0 ;
+(id)localizedFontNameForFontName:(id)arg0 withLocale:(id)arg1 ;
+(id)localizedTemplateStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 templateBundle:(id)arg3 locale:(id)arg4 ;
+(id)prelocalizedStringForStorage:(id)arg0 range:(struct _NSRange )arg1 attachmentHandlingBlock:(id)arg2 ;
+(id)scaledPreviewImageForType:(NSUInteger)arg0 scalableImage:(id)arg1 ;
+(id)supportedPreviewImageExtensions;
+(id)supportedScalablePreviewNames;
+(struct CGSize )previewImageMaxSizeForType:(NSUInteger)arg0 ;
+(struct CGSize )previewImageSizeForType:(NSUInteger)arg0 ;
+(void)localizeChartInfo:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
+(void)localizeDropCapsInStorage:(id)arg0 withLocale:(id)arg1 ;
+(void)localizeModelObject:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
+(void)localizePropertiesOfIdentifiedStyle:(id)arg0 withMap:(id)arg1 ;
+(void)localizePropertiesOfNamedStyle:(id)arg0 withMap:(id)arg1 ;
+(void)localizePropertiesOfStyle:(id)arg0 withMap:(id)arg1 ;
+(void)localizePropertiesOfStylesInStylesheet:(id)arg0 withMap:(id)arg1 ;
+(void)localizeTableInfo:(id)arg0 templateBundle:(id)arg1 andLocale:(id)arg2 ;
+(void)localizeTextStorage:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
+(void)removeExistingPreviewsForDocumentAtPath:(id)arg0 ;
+(void)replacePropertiesOfStyle:(id)arg0 withMap:(id)arg1 ;
// +(void)writePreviewImage:(id)arg0 group:(id)arg1 queue:(id)arg2 dataConsumerProvider:(id)arg3 completion:(unk)arg4  ;
+(void)writePreviewImage:(id)arg0 toPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 name:(id)arg3 group:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(BOOL)canBeAnnotatedWithPencil;
-(BOOL)childrenCanBeAnnotatedWithPencil;
-(BOOL)exportToPath:(id)arg0 exporter:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)exportToPath:(id)arg0 exporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasExpandedTables;
-(BOOL)hasICloudConflict;
-(BOOL)hasPencilAnnotations;
-(BOOL)objectsNeedToBeMigrated:(id)arg0 ;
-(BOOL)p_updateDocumentLanguageToCurrentIfNeeded;
-(BOOL)shouldAllowDrawableInGroups:(id)arg0 ;
-(BOOL)shouldCancelScrollingToSelectionPath:(id)arg0 forChanges:(id)arg1 ;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(BOOL)writeData:(id)arg0 atDocumentCachePath:(id)arg1 ;
-(CGFloat)currentDesiredPencilAnnotationDrawingScale;
-(NSInteger)compareLocationSortingInfo:(id)arg0 toSortingInfo:(id)arg1 ;
-(NSUInteger)writingDirection;
-(id)additionalDocumentPropertiesForWrite;
-(id)additionalResourceRequestsForObjectContext:(id)arg0 ;
-(id)allPencilAnnotations;
-(id)buildVersionHistoryTemplateNameForIdentifier:(id)arg0 ;
-(id)captureViewState;
-(id)captureViewStateForImport;
-(id)commandForPropagatingPresetChangeCommand:(id)arg0 alwaysPreserveAppearance:(BOOL)arg1 ;
-(id)consolidatedDocumentWarningsFromWarnings:(id)arg0 ;
-(id)createViewStateRootForContinuation:(BOOL)arg0 ;
-(id)customFormatList;
-(id)dataFromDocumentCachePath:(id)arg0 ;
-(id)documentCachePath;
-(id)documentCachePathWithRelativePath:(id)arg0 ;
-(id)documentLanguage;
-(id)functionBrowserState;
-(id)initWithContext:(id)arg0 ;
-(id)makeIsolatedStyleMapper;
-(id)makeStyleMapper;
-(id)newExporterForType:(id)arg0 options:(id)arg1 preferredType:(*id)arg2 ;
-(id)p_captureViewStateForImport:(BOOL)arg0 ;
-(id)p_parseNumberOutOfBasename:(id)arg0 hasNumber:(*BOOL)arg1 number:(*NSUInteger)arg2 ;
-(id)pencilAnnotationEnumeratorFromRootObject:(id)arg0 ;
-(id)previewImage;
-(id)previewImageForSize:(struct CGSize )arg0 ;
-(id)protected_defaultTextPresetOrdering;
-(id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg0 ;
-(id)referencedStylesOfClass:(Class)arg0 ;
-(id)shortcutController;
-(id)tableToShowImportedDataNotificationOnOpenFor;
-(id)tsa_delegate;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg0 ;
-(id)upgradeState;
-(id)warningLocationDescriptionForAffectedObjects:(id)arg0 sortingInfo:(*id)arg1 ;
-(id)warnings;
-(id)warningsByCombiningSortedWarnings:(id)arg0 withWarnings:(id)arg1 ;
-(struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg0 ;
-(void)addWarning:(id)arg0 ;
-(void)applyViewState:(id)arg0 ;
-(void)backgroundDocumentDidLoad;
-(void)blockForRecalcWithTimeout:(CGFloat)arg0 ;
-(void)captureViewStateIfNeeded;
-(void)cleanupForImportFailure;
-(void)commonInit;
-(void)dealloc;
-(void)didDownloadDocumentResources:(id)arg0 ;
-(void)didDownloadRemoteData:(id)arg0 ;
-(void)didEnterBackground;
-(void)didSaveWithEncryptionChange;
-(void)documentCacheWasInvalidated;
-(void)documentDidLoad;
-(void)enumeratePencilAnnotationsFromRootObject:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePencilAnnotationsUsingBlock:(id)arg0 ;
-(void)enumerateStylesheetsUsingBlock:(id)arg0 ;
-(void)finalizeFromSageImport;
-(void)fontUpdatedForStyleClient:(id)arg0 ;
-(void)fulfillPasteboardPromises;
-(void)importerDidFinish:(id)arg0 ;
-(void)initializeForImport;
-(void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg0 insertAtBeginningOfGroup:(BOOL)arg1 ;
-(void)invalidateViewState;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)pUpgradeHyperlinks;
-(void)pUpgradeHyperlinksInStorage:(id)arg0 ;
-(void)p_addCaptionShapeStyles;
-(void)p_cleanupColumnStyles;
-(void)p_registerAllFormulasAfterImport;
-(void)p_removeStyles:(id)arg0 ;
-(void)p_replaceStyle:(id)arg0 andChildrenWithVariationOfStyle:(id)arg1 ;
-(void)p_replaceStyles:(id)arg0 andChildrenWithVariationOfStyle:(id)arg1 ;
-(void)p_updateBuildVersionHistoryWithVersionOfTemplateIdentifier:(id)arg0 ;
-(void)p_updateViewStateWithRoot:(id)arg0 ;
-(void)p_upgradeCustomFormatList;
-(void)p_upgradeDocumentCreationLocale;
-(void)p_upgradeRemainingOutlinedTextStylesWithFileFormatVersion:(NSUInteger)arg0 ;
-(void)p_verifyEntireDocument;
-(void)pauseRecalculation;
-(void)pauseRecalculationSometimeSoon;
-(void)performHyperlinkUpgradesIfNecessaryForVersion:(NSUInteger)arg0 ;
-(void)performStylesheetUpdatesIfNecessaryForVersion:(NSUInteger)arg0 ;
-(void)prepareForSavingAsTemplate;
-(void)prepareNewDocumentWithTemplateIdentifier:(id)arg0 bundle:(id)arg1 documentLocale:(id)arg2 ;
-(void)prepareNewDocumentWithUserTemplateIdentifier:(id)arg0 ;
-(void)prepareToGeneratePreview;
-(void)prepareUIStateForInitialViewing:(id)arg0 ;
-(void)presentDocumentWarnings;
-(void)removePencilAnnotations;
-(void)removePencilAnnotationsFromDrawables:(id)arg0 ;
-(void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
-(void)removeWarning:(id)arg0 ;
-(void)resumeBackgroundActivities;
-(void)resumeRecalculation;
-(void)resumeRecalculationForBlock:(id)arg0 ;
-(void)resumeThumbnailing;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)sendDocumentOpenedAnalyticsEventWithEventPayload:(id)arg0 ;
-(void)setCustomFormatListToUpgrade:(id)arg0 ;
-(void)setDocumentCreationLocale:(id)arg0 ;
-(void)setDocumentLanguage:(id)arg0 ;
-(void)setFunctionBrowserState:(id)arg0 ;
-(void)setShortcutController:(id)arg0 ;
-(void)stashUpgradeState:(*void)arg0 unarchiver:(id)arg1 ;
-(void)suspendBackgroundActivities;
-(void)suspendThumbnailing;
-(void)updateViewStateWithRoot:(id)arg0 ;
-(void)updateWritingDirection:(NSUInteger)arg0 ;
-(void)upgradeCellStyles;
-(void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
-(void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
-(void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(NSUInteger)arg0 ;
-(void)upgradeTextboxPresets;
-(void)upgradeToFixNonVariationChildStylesWithFileFormatVersion:(NSUInteger)arg0 ;
-(void)upgradeToSingleStylesheet;
-(void)willClose;
-(void)willEnterForeground;
-(void)willUnload;


@end


#endif