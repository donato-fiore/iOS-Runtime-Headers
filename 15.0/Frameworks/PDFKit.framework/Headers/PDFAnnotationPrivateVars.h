// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFANNOTATIONPRIVATEVARS_H
#define PDFANNOTATIONPRIVATEVARS_H

@class NSUUID, NSMutableDictionary, NSDictionary, NSIndexSet, NSLock, NSString, UIColor, NSLayoutManager, NSTextStorage, NSArray, PDFAccessibilityNode;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFPage.h"
#import "PDFAnnotation.h"
#import "PDFAKAnnotationAdaptor.h"

@interface PDFAnnotationPrivateVars : NSObject {
    BOOL loggingEnabled;
    BOOL shouldExport;
    PDFPage *page;
    *CGPDFDictionary sourceDictionary;
    *__CFDictionary dictionaryRef;
    NSUUID *pdfAnnotationUUID;
    *CGPDFAnnotation cgAnnotation;
    NSMutableDictionary *PDFAnnotationDictionary;
    NSDictionary *PDFAnnotationKeyMapping;
    NSMutableDictionary *internalPDFAnnotationDictionary;
    *CGPDFForm normalAppearance;
    *CGPDFForm rolloverAppearance;
    *CGPDFForm downAppearance;
    *CGPDFForm normalOffAppearance;
    *CGPDFForm rolloverOffAppearance;
    *CGPDFForm downOffAppearance;
    BOOL saveAppearance;
    os_unfair_lock_s cachedAppearancesLock;
    NSMutableDictionary *cachedAppearances;
    BOOL isSelected;
    BOOL isHighlighted;
    NSIndexSet *quadPointsIndexSet;
    *CGPath quadPointsPath;
    PDFAnnotation *parent;
    PDFAnnotation *popup;
    *CGPDFDictionary popupDictionary;
    BOOL popupDrawCloseWidget;
    BOOL popupDrawText;
    ? cgPaths;
    NSLock *pathLock;
    BOOL isSignature;
    BOOL shouldBurnIn;
    NSString *widgetOnStateString;
    id *control;
    UIColor *mouseHoverBackgroundColor;
    NSLayoutManager *layoutManager;
    NSTextStorage *textStorage;
    UIEdgeInsets textInsets;
    BOOL restoreLinePoints;
    BOOL restoreQuadPoints;
    CGPoint startPoint;
    CGPoint endPoint;
    NSArray *quadPoints;
    BOOL isTransparent;
    PDFAccessibilityNode *accessibilityNode;
    CGFloat scaleFactor;
    BOOL isFullyConstructed;
    BOOL constructingDictionaryRef;
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;
    id<NSCopying> *akAnnotationForCopying;
}






@end


#endif