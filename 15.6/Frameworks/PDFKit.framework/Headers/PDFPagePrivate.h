// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGEPRIVATE_H
#define PDFPAGEPRIVATE_H

@class NSString, UIImage, NSAttributedString, NSMutableArray, NSLock, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"
#import "PDFAKPageAdaptor.h"

@interface PDFPagePrivate : NSObject {
    PDFDocument *document;
    *CGPDFPage page;
    *CGColor pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    *CGImage cgImage;
    *CGImageSource cgImageSource;
    unsigned int cgImageOrientation;
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
}






@end


#endif