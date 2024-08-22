// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFDOCUMENTPRIVATE_H
#define PDFDOCUMENTPRIVATE_H

@class NSURL, NSMutableArray, NSOrderedSet, NSMutableDictionary, NSMutableIndexSet, NSString, NSDictionary, NSArray, NSIndexSet;
@protocol OS_dispatch_queue, PDFDocumentPageChangeDelegate, PDFAKControllerDelegateProtocol;

#import <Foundation/Foundation.h>

#import "PDFOutline.h"
#import "PDFSelection.h"
#import "PDFForm.h"
#import "PDFAKDocumentAdaptor.h"
#import "PDFAKPageOverlayViewProvider.h"
#import "PDFRenderingProperties.h"

@interface PDFDocumentPrivate : NSObject {
    *CGPDFDocument document;
    NSURL *documentURL;
    BOOL createdWithHighLatencyDataProvider;
    NSMutableArray *pages;
    NSOrderedSet *pagesOrderedSet;
    NSMutableDictionary *pageIndices;
    NSMutableDictionary *pageDictionaryIndices;
    NSMutableIndexSet *preloadingPageIndexes;
    BOOL subclassOverridesPageAtIndex;
    id *delegate;
    BOOL respondsToDidUnlock;
    BOOL respondsToDidFindMatch;
    BOOL respondsToDidBeginDocumentFind;
    BOOL respondsToDidEndDocumentFind;
    BOOL respondsToDidBeginPageFind;
    BOOL respondsToDidEndPageFind;
    BOOL respondsToDidMatchString;
    BOOL respondsToPrintJobTitle;
    BOOL respondsToClassForPage;
    BOOL respondsToClassForAnnotationType;
    BOOL respondsToClassForAnnotationClass;
    NSUInteger pageCount;
    int majorVersion;
    int minorVersion;
    BOOL isEncrypted;
    BOOL isUnlocked;
    unsigned int accessPermissions;
    BOOL allowsPrinting;
    BOOL allowsCopying;
    BOOL allowsDocumentChanges;
    BOOL allowsDocumentAssembly;
    BOOL allowsContentAccessibility;
    BOOL allowsCommenting;
    BOOL allowsFormFieldEntry;
    NSInteger permission;
    NSString *ownerPassword;
    NSString *userPassword;
    NSDictionary *attributes;
    PDFOutline *outline;
    NSObject<OS_dispatch_queue> *textExtractionQueue;
    NSObject<OS_dispatch_queue> *formFillingQueue;
    BOOL finding;
    int findModel;
    NSArray *findStrings;
    PDFSelection *findInstance;
    NSUInteger findOptions;
    NSInteger findPageIndex;
    NSInteger findCharIndex;
    NSInteger lastFindPageIndex;
    NSInteger lastFindCharIndex;
    NSMutableArray *findResults;
    PDFForm *formData;
    BOOL formDataLoaded;
    NSArray *documentCatalogMetadata;
    NSString *xmpNameSpace;
    NSString *xmpPrefix;
    NSString *xmpRootPath;
    id<PDFDocumentPageChangeDelegate> *pageChangeDelegate;
    BOOL documentChanged;
    BOOL documentHasBurnInAnnotations;
    NSUInteger documentRedactionCount;
    ? pagesChanged;
    NSDictionary *appendedAttributes;
    NSIndexSet *initialBookmarkedPageIndices;
    NSMutableIndexSet *bookmarkedPages;
    PDFAKDocumentAdaptor *akDocumentAdaptor;
    id<PDFAKControllerDelegateProtocol> *pdfAKControllerDelegateForDeferredSetup;
    PDFAKPageOverlayViewProvider *akPageOverlayViewProvider;
    PDFRenderingProperties *renderingProperties;
    BOOL useTaggedPDF;
    BOOL limitedSearch;
    NSObject<OS_dispatch_queue> *asyncSearchQueue;
}






@end


#endif