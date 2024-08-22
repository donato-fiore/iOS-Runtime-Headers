// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPAGE_H
#define PDFPAGE_H

@class NSArray, NSAttributedString, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFPagePrivate.h"
#import "PDFDocument.h"

@interface PDFPage : NSObject <NSCopying>

 {
    PDFPagePrivate *_private;
}


@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (nonatomic) BOOL displaysAnnotations;
@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger numberOfCharacters;
@property (readonly, nonatomic) *CGPDFPage pageRef;
@property (nonatomic) NSInteger rotation;
@property (readonly, nonatomic) NSString *string;


+(BOOL)_getBooleanProperty:(id)arg0 forKey:(id)arg1 withDefault:(BOOL)arg2 ;
+(BOOL)isExcludingAKAnnotationRenderingForThisThread;
+(BOOL)isNativeRotationDrawingEnabledForThisThread;
+(BOOL)shouldHideAnnotationsForThisThread;
+(BOOL)useLegacyImageHandling;
+(id)displayListCreationQueue;
+(id)fontWithPDFFont:(struct CGPDFFont *)arg0 size:(float)arg1 ;
+(struct CGPDFPage *)_createPageRefFromImage:(struct CGImage *)arg0 andOptions:(id)arg1 ;
+(void)setExcludingAKAnnotationRenderingForThisThread:(BOOL)arg0 ;
+(void)setNativeRotationDrawingEnabledForThisThread:(BOOL)arg0 ;
+(void)setShouldHideAnnotationsForThisThread:(BOOL)arg0 ;
-(BOOL)_writeToConsumer:(struct CGDataConsumer *)arg0 ;
-(BOOL)akDidSetupRealPageModelController;
-(BOOL)colorWidgetBackgrounds;
-(BOOL)columnAtPoint:(struct CGPoint )arg0 ;
-(BOOL)columnAtPointIfAvailable:(struct CGPoint )arg0 ;
-(BOOL)didChangeBounds;
-(BOOL)disableUndoManagerForAK;
-(BOOL)hasArtBox;
-(BOOL)hasBleedBox;
-(BOOL)hasCropBox;
-(BOOL)hasFormFieldsFromOCR;
-(BOOL)hasPopups;
-(BOOL)hasTrimBox;
-(BOOL)isBookmarked;
-(BOOL)isTextFromOCR;
-(BOOL)pathIntersectsWithRedactionPath:(struct CGPath *)arg0 ;
-(BOOL)rectIntersectsWithRedactionPath:(struct CGRect )arg0 ;
-(BOOL)requestedOCR;
-(NSInteger)characterIndexAtPoint:(struct CGPoint )arg0 ;
-(char)isCandidateForOCR;
-(id)_createAttributedString;
-(id)_rvItemAtPoint:(struct CGPoint )arg0 ;
-(id)akPageAdaptor;
-(id)allAnnotations;
-(id)annotationAtPoint:(struct CGPoint )arg0 ;
-(id)annotationAtRect:(struct CGRect )arg0 ;
-(id)annotationChanges;
-(id)annotationForDetectedFormField:(id)arg0 ;
-(id)annotationWithUUID:(id)arg0 ;
-(id)annotationsForFieldName:(id)arg0 ;
-(id)changedAnnotations;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)ddScannerResults;
-(id)debugQuickLookObject;
-(id)description;
-(id)detectedForm;
-(id)detectedFormFieldForAnnotation:(id)arg0 ;
-(id)firstDetectedFormField;
-(id)firstTextField;
-(id)imageOfSize:(struct CGSize )arg0 forBox:(NSInteger)arg1 withOptions:(id)arg2 ;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 options:(id)arg1 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(id)initWithPageRef:(struct CGPDFPage *)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 andRotation:(NSInteger)arg1 ;
-(id)lastAnnotationChange;
-(id)layoutText;
-(id)pdfScannerResultAtPoint:(struct CGPoint )arg0 ;
-(id)pdfScannerResultAtPoint:(struct CGPoint )arg0 onPageLayer:(id)arg1 ;
-(id)rvItemAtPoint:(struct CGPoint )arg0 ;
-(id)rvItemAtPoint:(struct CGPoint )arg0 onPageLayer:(id)arg1 ;
-(id)rvItemWithPDFScannerResult:(id)arg0 ;
-(id)scannedAnnotationAtPoint:(struct CGPoint )arg0 ;
-(id)scannedAnnotations;
-(id)selectionForAll;
-(id)selectionForCharacterAtPoint:(struct CGPoint )arg0 ;
-(id)selectionForCodeRange:(struct _NSRange )arg0 ;
-(id)selectionForLineAtPoint:(struct CGPoint )arg0 ;
-(id)selectionForRange:(struct _NSRange )arg0 ;
-(id)selectionForRangeCommon:(struct _NSRange )arg0 isCodeRange:(BOOL)arg1 ;
-(id)selectionForRect:(struct CGRect )arg0 ;
-(id)selectionForWordAtPoint:(struct CGPoint )arg0 ;
-(id)selectionFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(id)selectionFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 type:(int)arg2 ;
-(id)selectionFromPointToBottom:(struct CGPoint )arg0 type:(int)arg1 ;
-(id)selectionFromTopToPoint:(struct CGPoint )arg0 type:(int)arg1 ;
-(id)thumbnailOfSize:(struct CGSize )arg0 forBox:(NSInteger)arg1 ;
-(id)thumbnailOfSize:(struct CGSize )arg0 forBox:(NSInteger)arg1 withBookmark:(BOOL)arg2 ;
-(id)thumbnailOfSize:(struct CGSize )arg0 forBox:(NSInteger)arg1 withBookmark:(BOOL)arg2 withAnnotations:(BOOL)arg3 ;
-(id)view;
-(struct CGAffineTransform )getDrawingTransformForBox:(NSInteger)arg0 ;
-(struct CGAffineTransform )transformForBox:(NSInteger)arg0 ;
-(struct CGColor *)pageBackgroundColorHint;
-(struct CGDisplayList *)_createDisplayListTrackingGlyphs:(BOOL)arg0 ;
-(struct CGDisplayList *)createDisplayListForFormDetection;
-(struct CGDisplayList *)displayList;
-(struct CGDisplayList *)getDisplayListSynchronously;
-(struct CGImage *)_newCGImageWithBox:(NSInteger)arg0 bitmapSize:(struct PDFSizeIntegral )arg1 scale:(CGFloat)arg2 offset:(struct CGPoint )arg3 colorSpace:(struct CGColorSpace *)arg4 backgroundColor:(id)arg5 withRotation:(BOOL)arg6 withAntialiasing:(BOOL)arg7 withAnnotations:(BOOL)arg8 withBookmark:(BOOL)arg9 withDelegate:(id)arg10 ;
-(struct CGPDFLayout *)pageLayout;
-(struct CGPDFLayout *)pageLayoutIfAvail;
-(struct CGPath *)createRedactionPath;
-(struct CGRect )boundsForBox:(NSInteger)arg0 ;
-(struct CGRect )characterBoundsAtIndex:(NSInteger)arg0 ;
-(struct CGRect )columnFrameAtPoint:(struct CGPoint )arg0 ;
-(struct __CFDictionary *)gcCreateBoxDictionary;
-(void)_addBox:(int)arg0 toDictionary:(struct __CFDictionary *)arg1 offset:(struct CGPoint )arg2 ;
-(void)_addWidgetAnnotationToLookupDictionary:(id)arg0 ;
-(void)_buildPageLayout;
-(void)_commonInit;
-(void)_createRetainedDisplayList;
-(void)_drawAnnotationsWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)_drawBookmarkInContext:(struct CGContext *)arg0 ;
-(void)_postAnnotationsChangedNotificationCoalesced;
-(void)_releaseDisplayList;
-(void)_removeWidgetAnnotationFromLookupDictionary:(id)arg0 ;
-(void)_scanData:(id)arg0 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addAnnotation:(id)arg0 withUndo:(BOOL)arg1 ;
-(void)addAnnotationFormField:(id)arg0 ;
-(void)addRedactionFromRectangularSelectionWithRect:(struct CGRect )arg0 ;
-(void)addScannedAnnotation:(id)arg0 ;
-(void)addedAnnotation:(id)arg0 forFormField:(id)arg1 ;
-(void)changedAnnotation:(id)arg0 ;
-(void)clearAnnotationChanges;
-(void)dealloc;
-(void)drawAnnotationsWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 passingTest:(id)arg2 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 isThumbnail:(BOOL)arg2 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withOptions:(id)arg2 ;
-(void)drawWithBox:(NSInteger)arg0 toContext:(struct CGContext *)arg1 ;
-(void)enableUndoManagerForAK:(BOOL)arg0 ;
// -(void)fetchAnnotationsWithCompletion:(id)arg0 deliveredOnQueue:(unk)arg1  ;
// -(void)fetchPageLayoutWithCompletion:(id)arg0 deliveredOnQueue:(unk)arg1  ;
-(void)getAnnotations;
// -(void)getDisplayListWithCompletion:(id)arg0 onQueue:(unk)arg1  ;
-(void)initFirstTextFieldOrDetectedFormField;
-(void)insertAnnotation:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)lazilyLoadAnnotations;
-(void)postAnnotationsChangedNotification;
-(void)postPageDidChangeBoundsNotification;
-(void)postPageDidRotateNotification;
-(void)printActivePageAnnotations;
-(void)purgeAll;
-(void)purgePageLayout;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeAnnotation:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeAnnotation:(id)arg0 withUndo:(BOOL)arg1 ;
-(void)resetChangedAnnotations;
-(void)setAKDidSetupRealPageModelController:(BOOL)arg0 ;
-(void)setBookmarked:(BOOL)arg0 ;
-(void)setBookmarked:(BOOL)arg0 updateBookmarks:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 forBox:(NSInteger)arg1 ;
-(void)setCandidateForOCR:(char)arg0 ;
-(void)setColorWidgetBackgrounds:(BOOL)arg0 ;
-(void)setDetectedForm:(id)arg0 ;
-(void)setDisplaysMarkupAnnotations:(BOOL)arg0 ;
-(void)setExtraContentStream:(struct CGPDFStream *)arg0 steamDocument:(struct CGPDFDocument *)arg1 ;
-(void)setView:(id)arg0 ;
-(void)setupAKPageAdaptorIfNecessary;
-(void)transformContext:(struct CGContext *)arg0 forBox:(NSInteger)arg1 ;


@end


#endif