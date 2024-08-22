// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

@class NSDictionary, NSURL, NSString;
@protocol NSCopying, PDFDocumentDelegate;

#import <Foundation/Foundation.h>

#import "PDFDocumentPrivate.h"
#import "PDFOutline.h"
#import "PDFSelection.h"

@interface PDFDocument : NSObject <NSCopying>

 {
    PDFDocumentPrivate *_private;
}


@property (readonly, nonatomic) NSUInteger accessPermissions;
@property (readonly, nonatomic) BOOL allowsCommenting;
@property (readonly, nonatomic) BOOL allowsContentAccessibility;
@property (readonly, nonatomic) BOOL allowsCopying;
@property (readonly, nonatomic) BOOL allowsDocumentAssembly;
@property (readonly, nonatomic) BOOL allowsDocumentChanges;
@property (readonly, nonatomic) BOOL allowsFormFieldEntry;
@property (readonly, nonatomic) BOOL allowsPrinting;
@property (weak, nonatomic) NSObject<PDFDocumentDelegate> *delegate;
@property (copy, nonatomic) NSDictionary *documentAttributes;
@property (readonly, nonatomic) *CGPDFDocument documentRef;
@property (readonly, nonatomic) NSURL *documentURL;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) BOOL isFinding;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) NSInteger majorVersion;
@property (readonly, nonatomic) NSInteger minorVersion;
@property (retain, nonatomic) PDFOutline *outlineRoot;
@property (readonly, nonatomic) Class pageClass;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSInteger permissionsStatus;
@property (readonly, nonatomic) PDFSelection *selectionForEntireDocument;
@property (readonly, nonatomic) NSString *string;


+(BOOL)isValidPassword:(id)arg0 ;
+(BOOL)pdfDocumentAppendModeActiveForThisThread;
+(void)setPDFDocumentAppendModeActiveForThisThread:(BOOL)arg0 ;
-(BOOL)_canSaveWithEncryption;
-(BOOL)_isCommonlyMappedToNothing:(id)arg0 ;
-(BOOL)_isNonAsciiSpace:(id)arg0 ;
-(BOOL)_writeAppendMode:(struct CGDataConsumer *)arg0 ;
-(BOOL)bookmarksChanged;
-(BOOL)canSaveWithAppendModeUsingOptions:(id)arg0 ;
-(BOOL)canSaveWithTextFromOCR;
-(BOOL)createdWithWithHighLatencyDataProvider;
-(BOOL)documentChanged;
-(BOOL)findOnPage;
-(BOOL)hasHighLatencyDataProvider;
-(BOOL)isLinearized;
-(BOOL)showsAnnotations;
-(BOOL)unlockWithPassword:(id)arg0 ;
-(BOOL)validateRedo:(id)arg0 ;
-(BOOL)validateUndo:(id)arg0 ;
-(BOOL)viewPreferenceRightToLeft;
-(BOOL)writeToConsumer:(struct CGDataConsumer *)arg0 withOptions:(id)arg1 ;
-(BOOL)writeToFile:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)writeToURL:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 withOptions:(id)arg1 ;
-(Class)annotationSubclassForType:(id)arg0 ;
-(NSUInteger)indexForPage:(id)arg0 ;
-(id)PDFAKControllerDelegate;
-(id)_SASLSanitize:(id)arg0 ;
-(id)_addEncryptionFromOptions:(id)arg0 ;
-(id)_bookmarksCatalog;
-(id)_convertWriteOptions:(id)arg0 ;
-(id)_dataFromXMP:(struct __CFData *)arg0 withRootPath:(id)arg1 keys:(id)arg2 ;
-(id)_documentCatalogMetadataForRootPath:(id)arg0 withKeys:(id)arg1 ;
-(id)_findString:(id)arg0 fromSelection:(id)arg1 withOptions:(NSUInteger)arg2 ;
-(id)_getNearestOutline:(id)arg0 forDestination:(id)arg1 ;
-(id)_namedDestination:(id)arg0 forNameDictionary:(struct CGPDFDictionary *)arg1 ;
-(id)_rawPageAtIndex:(NSUInteger)arg0 ;
-(id)akController;
-(id)akDocumentAdaptor;
-(id)annotationsForFieldName:(id)arg0 ;
-(id)bookmarkedPages;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)dataRepresentationWithOptions:(id)arg0 ;
-(id)findPageWithCGPDFDictionaryPageRef:(struct CGPDFDictionary *)arg0 ;
-(id)findString:(id)arg0 fromSelection:(id)arg1 withOptions:(NSUInteger)arg2 ;
-(id)findString:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)findStringPerPage:(id)arg0 fromSelection:(id)arg1 withOptions:(NSUInteger)arg2 ;
-(id)findStrings:(id)arg0 withinSelection:(id)arg1 withOptions:(NSUInteger)arg2 ;
-(id)formData;
-(id)formFillingQueue;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithProvider:(struct CGDataProvider *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)namedDestination:(id)arg0 ;
-(id)outlineItemForSelection:(id)arg0 ;
-(id)pageAnnotationChanges;
-(id)pageAtIndex:(NSUInteger)arg0 ;
-(id)passwordUsedForUnlocking;
-(id)renderingProperties;
-(id)selectionFromPage:(id)arg0 atCharacterIndex:(NSUInteger)arg1 toPage:(id)arg2 atCharacterIndex:(NSUInteger)arg3 ;
-(id)selectionFromPage:(id)arg0 atPoint:(struct CGPoint )arg1 toPage:(id)arg2 atPoint:(struct CGPoint )arg3 ;
-(id)selectionFromPage:(id)arg0 atPoint:(struct CGPoint )arg1 toPage:(id)arg2 atPoint:(struct CGPoint )arg3 type:(int)arg4 ;
-(id)textExtractionQueue;
-(struct CGPDFAnnotation *)_createCGPDFAnnotationForAnnotation:(id)arg0 ;
-(struct CGPDFName *)_convertCFStringToCGPDFName:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(struct __CFData *)newXMPFromData:(id)arg0 preserveExistingXMPMetadata:(BOOL)arg1 ;
-(struct __CFDictionary *)_createInfoDictionary;
-(void)_commonInit;
-(void)_createDocumentWithDataProvider:(struct CGDataProvider *)arg0 ;
-(void)_notifyAKAdaptorPagePlaceholder:(id)arg0 wasReplacedWithPage:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_sanitizeAnnotationArray:(struct __CFArray *)arg0 ;
-(void)_sanitizeAnnotationDictionary:(struct __CFDictionary *)arg0 ;
-(void)_setDocumentCatalogMetadata:(id)arg0 withNSpace:(id)arg1 prefix:(id)arg2 rootPath:(id)arg3 ;
-(void)asyncFindString:(id)arg0 withDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)asyncFindStrings:(id)arg0 withDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)asyncFindStrings:(id)arg0 withOptions:(NSUInteger)arg1 withDelegate:(id)arg2 onQueue:(id)arg3 ;
-(void)beginBatchPageChanges;
-(void)beginFindString:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)beginFindStrings:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)cancelFindString;
-(void)cleanupFind;
-(void)coreFindString:(id)arg0 ;
-(void)coreFindStrings:(id)arg0 ;
-(void)dealloc;
-(void)decrementRedactionCount;
-(void)didMatchString:(id)arg0 ;
-(void)enableDocumentMRUMode:(BOOL)arg0 ;
-(void)enableLimitedSearch;
-(void)endBatchPageChanges;
-(void)exchangePageAtIndex:(NSUInteger)arg0 withPageAtIndex:(NSUInteger)arg1 ;
-(void)findNextFormFieldInPages:(id)arg0 withCompletion:(id)arg1 ;
-(void)incrementRedactionCount;
-(void)insertPage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)normalizeFindOptions:(NSUInteger)arg0 ;
-(void)preloadDataOfPagesInRange:(struct _NSRange )arg0 onQueue:(id)arg1 completion:(id)arg2 ;
-(void)redo:(id)arg0 ;
-(void)removePageAtIndex:(NSUInteger)arg0 ;
-(void)requirePasswordsIfNeeded:(id)arg0 ;
-(void)resetPageAnnotationChanges;
-(void)revert;
-(void)scheduledFindOnPage:(id)arg0 ;
-(void)setBookmarked:(BOOL)arg0 atPageIndex:(NSUInteger)arg1 ;
-(void)setDocument:(struct CGPDFDocument *)arg0 ;
-(void)setDocumentHasBurnInAnnotations:(BOOL)arg0 ;
-(void)setFormData:(id)arg0 ;
-(void)setHasHighLatencyDataProvider:(BOOL)arg0 ;
-(void)setPDFAKControllerDelegate:(id)arg0 ;
-(void)setPageChangeDelegate:(id)arg0 ;
-(void)setRenderingProperties:(id)arg0 ;
-(void)setShowsAnnotations:(BOOL)arg0 ;
-(void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg0 ;
-(void)undo:(id)arg0 ;
-(void)updateBookmarksInPDFDocument;


@end


#endif