// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPDOCUMENTROOT_H
#define TPDOCUMENTROOT_H

@class TSADocumentRoot, NSArray, TPDocumentViewController, NSMutableDictionary, NSMutableSet, TSPData, EQKitEnvironment, NSMutableArray, TSWPChangeSession, NSString, TSWPStorage, TPBookmarkController, TSWPFlowInfoContainer, TSSStylesheet, TSDThumbnailController;
@protocol TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer, TPPageControllerDelegate, TSWPTOCController;


#import "TPTheme.h"
#import "TPDocumentSettings.h"
#import "TPDocumentRoot.h"
#import "TPDrawablesZOrder.h"
#import "TPSection.h"
#import "TPFloatingDrawables.h"
#import "TPUIState.h"

@interface TPDocumentRoot : TSADocumentRoot <TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer, TPPageControllerDelegate>

 {
    NSArray *_citationRecords;
    BOOL _shouldUniquifyTableNames;
    NSArray *_obsoleteTOCStyles;
    TPTheme *_theme;
    TPDocumentSettings *_settings;
    BOOL _usesSingleHeaderFooter;
    BOOL _needsInitialization;
    CGSize _pageSize;
    CGFloat _pageScale;
    CGFloat _leftMargin;
    CGFloat _rightMargin;
    CGFloat _topMargin;
    CGFloat _bottomMargin;
    CGFloat _headerMargin;
    CGFloat _footerMargin;
    BOOL _laysOutBodyVertically;
    *__CFLocale _hyphenationLocale;
    BOOL _changeTrackingEnabled;
    BOOL _viewDidAppear;
    BOOL _isTornDown;
    TPDocumentViewController *_viewController;
    unsigned int _tableNameCounter;
    NSMutableDictionary *_tablesWithUniqueNames;
    NSMutableSet *_remappedTableNames;
    TSPData *_equationEnvironmentData;
    EQKitEnvironment *_equationEnvironment;
    NSMutableArray *_pageTemplates;
    BOOL _shouldUseAnchoredDrawableWrapSlop;
    id<TSWPTOCController> *_tocInfoController;
}


@property (retain, nonatomic) TSWPChangeSession *activeChangeSession; // ivar: _activeChangeSession
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) NSString *blankPageTemplateName;
@property (readonly, nonatomic) TSWPStorage *bodyStorage; // ivar: _bodyStorage
@property (readonly, nonatomic) TPBookmarkController *bookmarkController; // ivar: _bookmarkController
@property (nonatomic) CGFloat bottomMargin;
@property (readonly, nonatomic) BOOL canTrackChanges;
@property (retain, nonatomic) NSMutableArray *changeSessionHistory; // ivar: _changeSessionHistory
@property (nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (retain, nonatomic) TPDrawablesZOrder *drawablesZOrder; // ivar: _drawablesZOrder
@property (readonly, nonatomic) TPSection *firstSection;
@property (retain, nonatomic) TPFloatingDrawables *floatingDrawables; // ivar: _floatingDrawables
@property (retain, nonatomic) TSWPFlowInfoContainer *flowInfoContainer; // ivar: _flowInfoContainer
@property (nonatomic) CGFloat footerMargin;
@property (nonatomic) BOOL forceChangeTrackingMarkupHidden; // ivar: _forceChangeTrackingMarkupHidden
@property (readonly, nonatomic) BOOL hasTrackedChanges;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headerMargin;
@property (readonly, nonatomic) BOOL isNewDocument; // ivar: _newDocument
@property (readonly, nonatomic) BOOL isTrackingChanges;
@property (nonatomic) CGFloat leftMargin;
@property (retain, nonatomic) TSWPChangeSession *mostRecentChangeSession; // ivar: _mostRecentChangeSession
@property (readonly, nonatomic) NSArray *nonHiddenSections;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat pageScale;
@property (nonatomic) CGSize pageSize;
@property (readonly, nonatomic) NSArray *pageTemplates;
@property (readonly, nonatomic) NSInteger pageViewState;
@property (copy, nonatomic) NSString *paperID; // ivar: _paperID
@property (readonly, nonatomic) CGSize paperSize;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (copy, nonatomic) NSString *printerID; // ivar: _printerID
@property (nonatomic) CGFloat rightMargin;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) TPDocumentSettings *settings;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (retain, nonatomic) TSSStylesheet *stylesheet; // ivar: _stylesheet
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (nonatomic) BOOL suppressViewStateCapture; // ivar: _suppressViewStateCapture
@property (readonly, nonatomic) BOOL textIsLinked;
@property (retain, nonatomic) TPTheme *theme;
@property (readonly, nonatomic) TSDThumbnailController *thumbnailController; // ivar: _thumbnailController
@property (nonatomic) CGFloat topMargin;
@property (readonly, nonatomic, getter=isTrackingChanges) BOOL trackingChanges;
@property (copy, nonatomic) TPUIState *uiState;
@property (readonly, nonatomic) CGSize unrotatedPaperSize;
@property (nonatomic) BOOL usesSingleHeaderFooter;
@property (readonly, weak, nonatomic) TPDocumentViewController *viewController;


+(struct CGSize )pageSizeFromPaperSize:(struct CGSize )arg0 pageScale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
+(struct CGSize )previewImageSizeForType:(NSUInteger)arg0 ;
+(void)localizeModelObject:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
+(void)localizeTextStorage:(id)arg0 withTemplateBundle:(id)arg1 andLocale:(id)arg2 ;
-(BOOL)cellCommentsAllowedOnInfo:(id)arg0 ;
-(BOOL)containsVerticalText;
-(BOOL)documentAllowsPencilAnnotationsOnModel:(id)arg0 ;
-(BOOL)documentDisallowsHighlightsOnStorage:(id)arg0 ;
-(BOOL)exportToPath:(id)arg0 exporter:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)footnotesShouldAffectBodyLayout;
-(BOOL)freehandDrawingsRequireSpacerShape;
-(BOOL)hasPageBackgroundsForSections;
-(BOOL)hasPencilAnnotations;
-(BOOL)hasViewState;
-(BOOL)isDrawableOnSectionTemplatePage:(id)arg0 ;
-(BOOL)isMultiPageForQuickLook;
-(BOOL)isPendingTableNameUniquification;
-(BOOL)isSectionModel:(id)arg0 ;
-(BOOL)isSectionTemplateInfo:(id)arg0 ;
-(BOOL)laysOutBodyVertically;
-(BOOL)needsToExplainEnablingChangeTracking;
-(BOOL)p_drawableInfoIsOwnedByATPPageTemplate:(id)arg0 ;
-(BOOL)p_isUniquePageTemplateName:(id)arg0 ;
-(BOOL)prepareAndValidateSidecarViewStateRootWithVersionUUIDMismatch:(id)arg0 sidecarDocumentRevision:(id)arg1 originalDocumentViewStateRoot:(id)arg2 ;
-(BOOL)resolverNameIsUsed:(id)arg0 ;
-(BOOL)sectionTemplatePagesAllowDrawable:(id)arg0 ;
-(BOOL)shouldHyphenate;
-(BOOL)shouldShowChangeKind:(int)arg0 date:(id)arg1 ;
-(BOOL)shouldShowMarkupForChangeKind:(int)arg0 date:(id)arg1 ;
-(BOOL)shouldUseAnchoredDrawableWrapSlop;
-(BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)textIsVerticalInStorage:(id)arg0 atCharIndex:(NSUInteger)arg1 ;
-(BOOL)useLigatures;
-(CGFloat)bodyWidth;
-(CGFloat)currentDesiredPencilAnnotationDrawingScale;
-(CGFloat)footnoteGap;
-(CGFloat)valueForMargin:(NSInteger)arg0 ;
-(Class)thumbnailImagerClass;
-(NSInteger)footnoteKind;
-(NSInteger)naturalAlignmentAtCharIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(NSUInteger)applicationType;
-(NSUInteger)inheritedSectionIndexForSectionIndex:(NSUInteger)arg0 ;
-(NSUInteger)pageIndexForThumbnailIdentifier:(id)arg0 ;
-(NSUInteger)pageTemplateIndexForModelObject:(id)arg0 ;
-(NSUInteger)rootIndexForObject:(id)arg0 ;
-(id)UIStateForChart:(id)arg0 ;
-(id)changeSessionManagerForModel:(id)arg0 ;
-(id)changeVisibility;
-(id)childEnumerator;
-(id)citationRecords;
-(id)equationEnvironment;
-(id)freehandDrawingToolkitUIState;
-(id)initForThemeImportWithContext:(id)arg0 ;
-(id)initUsingDefaultThemeWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)modelEnumeratorWithFlags:(NSUInteger)arg0 forObjectsPassingTest:(id)arg1 ;
-(id)modelPathComponentForChild:(id)arg0 ;
-(id)nameForResolverContainer:(id)arg0 ;
-(id)pBlankPageTemplate;
-(id)pCreateBlankPageTemplate;
-(id)p_previewImageWithImageSize:(struct CGSize )arg0 ;
-(id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg0 context:(id)arg1 ;
-(id)pageTemplateWithName:(id)arg0 ;
-(id)pencilAnnotationUIState;
-(id)previewImageForSize:(struct CGSize )arg0 ;
-(id)remappedTableNames;
-(id)resolverContainerForName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg0 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 contextContainerName:(id)arg1 ;
-(id)resolverMatchingName:(id)arg0 contextResolver:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)sectionTemplatePageOwningModel:(id)arg0 ;
-(id)selectionPathForSearchReference:(id)arg0 ;
-(id)storagesWithChanges;
-(id)thumbnailIdentifierForPageIndex:(NSUInteger)arg0 ;
-(id)tocInfoController;
-(id)uniquePageTemplateNameWithProposedPageTemplateName:(id)arg0 ;
-(id)uuidPathPrefixComponentsForInfo:(id)arg0 ;
-(int)indexForObject:(id)arg0 ;
-(int)verticalAlignmentForTextStorage:(id)arg0 ;
-(struct CGRect )pageBoundsWithinMargins;
-(struct __CFLocale *)hyphenationLocale;
-(unsigned int)nextUntitledResolverIndex;
-(unsigned int)saveNextUntitledResolverIndex;
-(void)addRemappedTableName:(id)arg0 ;
-(void)clearRemappedTableNames;
-(void)dealloc;
-(void)didAddDrawable:(id)arg0 ;
-(void)documentDidLoad;
-(void)i_assignBlankPageTemplateToAllSections;
-(void)i_removeAllPageTemplates;
-(void)i_upgradeSectionsForPageTemplates;
-(void)invalidateThumbnailForPageIndex:(NSUInteger)arg0 ;
-(void)invalidateViewState;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)pCommonInitialization;
-(void)pCreateBodyStorage;
-(void)pCreateDrawablesZOrderBodyStorage:(id)arg0 addAnchoredDrawables:(BOOL)arg1 ;
-(void)pCreateFloatingDrawables;
-(void)pCreateFlowInfoContainer;
-(void)pFinishInitialization;
-(void)pUpgradeSection:(id)arg0 documentVersion:(NSUInteger)arg1 ;
-(void)p_initializeShowInBookmarksListParagraphStylesProperty;
-(void)p_uniquifyTableNames;
-(void)p_upgradeBodyTOC;
-(void)p_upgradeTOCModelForUnity20;
-(void)p_upgradeTOCStyles;
-(void)prepareNewDocumentWithTemplateIdentifier:(id)arg0 bundle:(id)arg1 documentLocale:(id)arg2 ;
-(void)readViewState;
-(void)rollbackNextUntitledResolverIndex:(unsigned int)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setExportViewModeForCTMarkup:(BOOL)arg0 deletions:(BOOL)arg1 paginatedPageController:(id)arg2 ;
-(void)setIndex:(int)arg0 forObject:(id)arg1 ;
-(void)setLaysOutBodyVertically:(BOOL)arg0 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;
-(void)setValue:(CGFloat)arg0 forMargin:(NSInteger)arg1 ;
-(void)tearDown;
-(void)updateWritingDirection:(NSUInteger)arg0 ;
-(void)upgradeFromOldSectionWithPageSize:(struct CGSize )arg0 leftMargin:(CGFloat)arg1 rightMargin:(CGFloat)arg2 topMargin:(CGFloat)arg3 bottomMargin:(CGFloat)arg4 headerMargin:(CGFloat)arg5 footerMargin:(CGFloat)arg6 ;
-(void)upgradeParagraphStylesForTOCNavigator;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(void)willClose;
-(void)willHide;
-(void)willRemoveDrawable:(id)arg0 ;


@end


#endif