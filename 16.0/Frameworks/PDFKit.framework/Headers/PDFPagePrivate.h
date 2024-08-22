// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPAGEPRIVATE_H
#define PDFPAGEPRIVATE_H

@class NSString, NSDictionary, NSAttributedString, NSMutableArray, NSLock, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"
#import "PDFAKPageAdaptor.h"
#import "PDFDetectedForm.h"
#import "PDFAnnotation.h"
#import "PDFDetectedFormField.h"

@interface PDFPagePrivate : NSObject {
    PDFDocument *document;
    *CGPDFPage page;
    *CGColor pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    *CGImage pageImage;
    NSDictionary *pageImageOptions;
    os_unfair_lock_s layoutLock;
    *CGPDFLayout layout;
    uint8_t builtLayout;
    os_unfair_lock_s dataDetectorsLock;
    BOOL ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    BOOL displaysAnnotations;
    BOOL displaysMarkups;
    NSMutableArray *annotations;
    uint8_t loadedAnnotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    NSInteger rotation;
    CGRect mediaBox;
    CGRect cropBox;
    CGRect bleedBox;
    CGRect trimBox;
    CGRect artBox;
    *CGDisplayList displayList;
    BOOL creatingDisplayList;
    NSMutableArray *createDisplayListCompletionBlocks;
    os_unfair_lock_s displayListMutex;
    BOOL bookmarked;
    BOOL isFullyConstructed;
    BOOL colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    BOOL akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    os_unfair_lock_s widgetAnnotationLookupLock;
    NSMutableArray *scannerResults;
    BOOL didChangeBounds;
    char candidateForOCR;
    BOOL requestedOCR;
    BOOL textFromOCR;
    PDFDetectedForm *detectedForm;
    os_unfair_lock_s searchForTextFieldsLock;
    PDFAnnotation *firstTextField;
    PDFDetectedFormField *firstDetectedFormField;
    BOOL didSearchForTextFields;
}






@end


#endif