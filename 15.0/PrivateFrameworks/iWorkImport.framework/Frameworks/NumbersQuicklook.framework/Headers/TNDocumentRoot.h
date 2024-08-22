// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNDOCUMENTROOT_H
#define TNDOCUMENTROOT_H

@class TSADocumentRoot, NSString, TSKTreeNodeDeprecated, NSMutableArray, NSArray, TSSStylesheet, TNHyperlinkController, TNDocumentViewController;
@protocol TSTResolverContainerNameProvider, TSTFormsSheetProvider;


#import "TNTheme.h"
#import "TNUIState.h"

@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider, TSTFormsSheetProvider>

 {
    NSString *_paperID;
    CGSize _pageSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TSKTreeNodeDeprecated *deprecatedSidebarOrder; // ivar: _deprecatedSidebarOrder
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *mutableSheets; // ivar: _mutableSheets
@property (nonatomic) CGSize pageSize;
@property (copy, nonatomic) NSString *paperID;
@property (readonly, nonatomic, getter=isPrintPreviewSupported) BOOL printPreviewSupported;
@property (copy, nonatomic) NSString *printerID;
@property (nonatomic, getter=isPrintingAllSheets) BOOL printingAllSheets; // ivar: _printingAllSheets
@property (nonatomic) BOOL removedAllQuickCalcFunctions;
@property (copy, nonatomic) NSArray *selectedQuickCalcFunctions;
@property (readonly, copy, nonatomic) NSArray *sheets;
@property (retain, nonatomic) TSSStylesheet *stylesheet; // ivar: _stylesheet
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tableCount;
@property (readonly, nonatomic) TNTheme *theme; // ivar: _theme
@property (retain, nonatomic) TNHyperlinkController *tn_hyperlinkController; // ivar: _tn_hyperlinkController
@property (retain, nonatomic) TNUIState *uiState;
@property (readonly, nonatomic) TNDocumentViewController *viewController;
@property (readonly, copy, nonatomic) NSArray *visibleSheets;


+(BOOL)platformSupportsForms;
+(BOOL)shouldShowImportedDataNotificationsOnOpen;
+(id)sheetDisplayPredicate;
+(struct CGSize )previewImageMaxSizeForType:(NSUInteger)arg0 ;
+(struct CGSize )previewImageSizeForType:(NSUInteger)arg0 ;
-(BOOL)_tableInfoIsEligibleForBuilder:(struct TSKUIDStruct )arg0 ;
-(BOOL)containsForms;
-(BOOL)isMultiPageForQuickLook;
-(BOOL)isPendingTableNameUniquification;
-(BOOL)isTableLinkedToAForm:(struct TSKUIDStruct )arg0 ;
-(BOOL)prepareAndValidateSidecarViewStateRootWithVersionUUIDMismatch:(id)arg0 sidecarDocumentRevision:(id)arg1 originalDocumentViewStateRoot:(id)arg2 ;
-(BOOL)shouldAllowDrawableInGroups:(id)arg0 ;
-(BOOL)shouldShowFloatingCommentInfo:(id)arg0 ;
-(BOOL)validName:(id)arg0 forRenamingSheet:(id)arg1 ;
-(BOOL)validNameForNewSheet:(id)arg0 ;
-(CGFloat)p_imageBorderForSize:(struct CGSize )arg0 ;
-(NSUInteger)applicationType;
-(NSUInteger)p_tableCountForSheet:(id)arg0 ;
-(id)UIStateForChart:(id)arg0 ;
-(id)_formSheetForTable:(struct TSKUIDStruct )arg0 ;
-(id)activeSheet;
-(id)childEnumerator;
-(id)createDeprecatedSidebarOrder;
-(id)formSheetForTable:(struct TSKUIDStruct )arg0 ;
-(id)formSheetsForTable:(struct TSKUIDStruct )arg0 ;
-(id)freehandDrawingToolkitUIState;
-(id)initWithContext:(id)arg0 ;
-(id)nameForResolverContainer:(id)arg0 ;
-(id)nearestDisplayableSheetToSheet:(id)arg0 ;
-(id)p_chartsWantingDeferredUpgrade;
-(id)p_previewImageWithImageSize:(struct CGSize )arg0 ;
-(id)p_resolverContainerForResolver:(id)arg0 ;
-(id)previewImageForSize:(struct CGSize )arg0 ;
-(id)resolverContainerForName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg0 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 ;
-(id)resolverMatchingName:(id)arg0 contextContainerName:(id)arg1 ;
-(id)resolverMatchingName:(id)arg0 contextResolver:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)sheetForName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)uniqueNameForNewSheetWithName:(id)arg0 ;
-(id)uniqueNameForSheet:(id)arg0 appendNewTag:(BOOL)arg1 ;
-(id)uniqueNameForSheetName:(id)arg0 forRenamingSheet:(id)arg1 ;
-(id)uniqueNameForSheetName:(id)arg0 forRenamingSheet:(id)arg1 appendNewTag:(BOOL)arg2 ;
-(id)untitledSheetName;
-(int)naturalAlignmentAtCharIndex:(NSUInteger)arg0 inTextStorage:(id)arg1 ;
-(int)verticalAlignmentForTextStorage:(id)arg0 ;
-(struct CGRect )p_contentFrameToCaptureForSheet:(id)arg0 ;
-(struct CGSize )p_adjustCapturedContentSize:(struct CGSize )arg0 toAspectRatio:(struct CGSize )arg1 ;
-(void)addSheet:(id)arg0 dolcContext:(id)arg1 ;
-(void)documentDidLoad;
-(void)initializeForImport;
-(void)initializeHardCodedBlankDocument;
-(void)insertSheet:(id)arg0 sheetIndex:(NSUInteger)arg1 forPasteOrUndoDelete:(BOOL)arg2 context:(id)arg3 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveSheetFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)p_clearDeprecatedSidebarOrder;
-(void)p_createDeprecatedSidebarOrderIfNecessaryFromSaveToArchiver;
-(void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg0 ;
-(void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
-(void)prepareNewDocumentWithTemplateIdentifier:(id)arg0 bundle:(id)arg1 documentLocale:(id)arg2 ;
-(void)removeAllSheets;
-(void)removeSheet:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setImportedPaperID:(id)arg0 printerID:(id)arg1 ;
-(void)setUIState:(id)arg0 forChart:(id)arg1 ;
-(void)sheet:(id)arg0 insertedDrawable:(id)arg1 ;
-(void)sheet:(id)arg0 removedDrawable:(id)arg1 ;
-(void)tableUID:(struct TSKUIDStruct *)arg0 changedToTableUID:(struct TSKUIDStruct *)arg1 ;
-(void)upgradeStylesheetForSheetStyles:(id)arg0 ;


@end


#endif