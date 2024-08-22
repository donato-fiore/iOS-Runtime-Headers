// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNSHEET_H
#define TNSHEET_H

@class TSPObject, NSMutableArray, NSMutableSet, TSDLayoutController, TSDColorFill, NSArray, NSString, TSDInfoGeometry, NSEnumerator, TSPObject<TSDOwningAttachment>, NSSet;
@protocol TNPrintableInfoProviding, TSKDocumentObject, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSSStyleClient, TSWPHeaderFooterProvider, TSWPStorageParent, TSDInfo;


#import "TNDocumentRoot.h"
#import "TNSheetStyle.h"

@interface TNSheet : TSPObject <TNPrintableInfoProviding, TSKDocumentObject, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSSStyleClient, TSWPHeaderFooterProvider, TSWPStorageParent>

 {
    NSMutableArray *_childInfos;
    unsigned int _tableNameCounter;
    TSWPStorage"] _headerFooters;
    NSMutableSet *_remappedTableNames;
}


@property (retain, nonatomic) TSDLayoutController *activeRootSearchLayoutController; // ivar: _activeRootSearchLayoutController
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) TSDColorFill *backgroundColor;
@property (readonly, nonatomic) CGFloat bodyWidth;
@property (copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TNDocumentRoot *documentRoot;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic) NSArray *footerStorages;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property (readonly, nonatomic) NSArray *headerStorages;
@property (nonatomic) BOOL inDocument; // ivar: _inDocument
@property (nonatomic) BOOL inPortraitPageOrientation; // ivar: _inPortraitPageOrientation
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) BOOL isAutofitOn; // ivar: _isAutofitOn
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isPrintable;
@property (readonly, nonatomic) BOOL isTopmostContainerInfo;
@property (nonatomic) NSUInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property CGFloat pageFooterInset; // ivar: _pageFooterInset
@property CGFloat pageHeaderInset; // ivar: _pageHeaderInset
@property NSUInteger pageOrder; // ivar: _pageOrder
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (nonatomic) BOOL printBackgrounds; // ivar: _printBackgrounds
@property (nonatomic) UIEdgeInsets printMargins; // ivar: _printMargins
@property (readonly, nonatomic) NSArray *printableInfos;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (nonatomic) BOOL shouldPrintComments; // ivar: _shouldPrintComments
@property (nonatomic) BOOL showPageNumbers; // ivar: _showPageNumbers
@property NSInteger startPageNumber; // ivar: _startPageNumber
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (retain, nonatomic) TNSheetStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (nonatomic) BOOL usesSingleHeaderFooter; // ivar: _usesSingleHeaderFooter
@property (getter=isUsingStartPageNumber) BOOL usingStartPageNumber; // ivar: _usingStartPageNumber


+(BOOL)needsObjectUUID;
+(id)sheetForSelectionModel:(id)arg0 outIsPaginated:(*BOOL)arg1 ;
-(BOOL)canMoveDrawables:(id)arg0 toIndexes:(id)arg1 ;
-(BOOL)hasReferenceToTables:(id)arg0 ;
-(BOOL)isForm;
-(BOOL)isHeaderFooterEmpty:(NSInteger)arg0 ;
-(BOOL)isHeaderFooterEmpty:(NSInteger)arg0 fragmentAtIndex:(NSInteger)arg1 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)layoutIsLeftToRight;
-(BOOL)layoutIsRightToLeft;
-(BOOL)resolverNameIsUsed:(id)arg0 ;
-(BOOL)shouldBeDisplayed;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(CGFloat)highestScaleFactorForRenderingDrawableInfo:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)headerFooterTypeForModel:(id)arg0 ;
-(NSInteger)headerFragmentIndexForModel:(id)arg0 ;
-(id)chartAndTableInfos;
-(id)chartInfos;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)headerFooter:(NSInteger)arg0 fragmentAtIndex:(NSInteger)arg1 ;
-(id)i_newHeaderFooterStorage;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 suppressingHeaderFooterCreation:(BOOL)arg1 ;
-(id)p_newHeaderFooterStorageWithStylesheet:(id)arg0 ;
-(id)p_storagesForHeaderType:(NSInteger)arg0 ;
-(id)printableInfosIncludingComments:(BOOL)arg0 ;
-(id)remappedTableNames;
-(id)resolverMatchingName:(id)arg0 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)tableInfoForName:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)tableInfos;
-(struct CGColor *)printingBackgroundCGColor;
-(struct CGRect )frame;
-(unsigned int)nextUntitledResolverIndex;
-(unsigned int)saveNextUntitledResolverIndex;
-(void)acceptVisitor:(id)arg0 ;
-(void)addChildInfo:(id)arg0 ;
-(void)addRemappedTableName:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)clearRemappedTableNames;
-(void)enumerateHeaderFooterStoragesWithBlock:(id)arg0 ;
-(void)i_importHeadersFooters:(id)arg0 headerType:(NSInteger)arg1 useSingleHeaderFooter:(BOOL)arg2 ;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertDrawableInfo:(id)arg0 atIndex:(NSUInteger)arg1 context:(id)arg2 ;
-(void)insertDrawableInfo:(id)arg0 context:(id)arg1 ;
-(void)insertDrawableInfos:(id)arg0 atIndex:(NSUInteger)arg1 context:(id)arg2 ;
-(void)insertDrawableInfos:(id)arg0 context:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveDrawables:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)p_createHeadersFooters:(NSInteger)arg0 stylesheet:(id)arg1 mayAlreadyExist:(BOOL)arg2 ;
-(void)p_dolcDispatch:(id)arg0 skippingTextBoxes:(BOOL)arg1 ;
-(void)p_setupHeadersFooters;
-(void)removeChildInfo:(id)arg0 ;
-(void)removeContainedModel:(id)arg0 ;
-(void)removeDrawableInfo:(id)arg0 ;
-(void)removeDrawableInfos:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)rollbackNextUntitledResolverIndex:(unsigned int)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif