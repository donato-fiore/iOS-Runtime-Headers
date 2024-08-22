// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(id)fontWithPDFFont:(struct CGPDFFont *)arg0 size:(float)arg1 ;
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
-(BOOL)hasPopups;
-(BOOL)hasTrimBox;
-(BOOL)isBookmarked;
-(BOOL)pathIntersectsWithRedactionPath:(struct CGPath *)arg0 ;
-(BOOL)rectIntersectsWithRedactionPath:(struct CGRect )arg0 ;
-(NSInteger)characterIndexAtPoint:(struct CGPoint )arg0 ;
-(id)_createAttributedString;
-(id)_rvItemAtPoint:(struct CGPoint )arg0 ;
-(id)akPageAdaptor;
-(id)allAnnotations;
-(id)annotationAtPoint:(struct CGPoint )arg0 ;
-(id)annotationAtRect:(struct CGRect )arg0 ;
-(id)annotationChanges;
-(id)annotationWithUUID:(id)arg0 ;
-(id)annotationsForFieldName:(id)arg0 ;
-(id)changedAnnotations;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)ddScannerResults;
-(id)debugQuickLookObject;
-(id)description;
-(id)imageOfSize:(struct CGSize )arg0 forBox:(NSInteger)arg1 withOptions:(id)arg2 ;
-(id)init;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 ;
-(id)initWithPageRef:(struct CGPDFPage *)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 andRotation:(NSInteger)arg1 ;
-(id)lastAnnotationChange;
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
-(struct CGDisplayList *)displayList;
-(struct CGImage *)_newCGImageWithBox:(NSInteger)arg0 bitmapSize:(struct PDFSizeIntegral )arg1 scale:(CGFloat)arg2 offset:(struct CGPoint )arg3 backgroundColor:(id)arg4 withRotation:(BOOL)arg5 withAntialiasing:(BOOL)arg6 withAnnotations:(BOOL)arg7 withBookmark:(BOOL)arg8 withDelegate:(id)arg9 ;
-(struct CGPDFLayout *)pageLayout;
-(struct CGPDFLayout *)pageLayoutIfAvail;
-(struct CGPDFPage *)createPageRefFromImage;
-(struct CGPath *)createRedactionPath;
-(struct CGRect )boundsForBox:(NSInteger)arg0 ;
-(struct CGRect )characterBoundsAtIndex:(NSInteger)arg0 ;
-(struct CGRect )columnFrameAtPoint:(struct CGPoint )arg0 ;
-(struct __CFDictionary *)gcCreateBoxDictionary;
-(void)_addBox:(int)arg0 toDictionary:(struct __CFDictionary *)arg1 offset:(struct CGPoint )arg2 ;
-(void)_addWidgetAnnotationToLookupDictionary:(id)arg0 ;
-(void)_buildPageLayout;
-(void)_commonInit;
-(void)_drawAnnotationsWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)_drawBookmarkInContext:(struct CGContext *)arg0 ;
-(void)_drawPageCGImageInContext:(struct CGContext *)arg0 withDisplayBox:(NSInteger)arg1 ;
-(void)_drawPageImageInContext:(struct CGContext *)arg0 withRotation:(BOOL)arg1 withDisplayBox:(NSInteger)arg2 ;
-(void)_drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 withRotation:(BOOL)arg2 isThumbnail:(BOOL)arg3 withAnnotations:(BOOL)arg4 withBookmark:(BOOL)arg5 withDelegate:(id)arg6 ;
-(void)_ensureDisplayListIsCreated;
-(void)_postAnnotationsChangedNotificationCoalesced;
-(void)_releaseDisplayList;
-(void)_removeWidgetAnnotationFromLookupDictionary:(id)arg0 ;
-(void)_scanData:(id)arg0 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addAnnotation:(id)arg0 withUndo:(BOOL)arg1 ;
-(void)addAnnotationFormField:(id)arg0 ;
-(void)addRedactionFromRectangularSelectionWithRect:(struct CGRect )arg0 ;
-(void)addScannedAnnotation:(id)arg0 ;
-(void)changedAnnotation:(id)arg0 ;
-(void)clearAnnotationChanges;
-(void)clearDisplayList;
-(void)createDisplayList;
-(void)dealloc;
-(void)drawAnnotationsWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 passingTest:(id)arg2 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawWithBox:(NSInteger)arg0 inContext:(struct CGContext *)arg1 isThumbnail:(BOOL)arg2 ;
-(void)drawWithBox:(NSInteger)arg0 toContext:(struct CGContext *)arg1 ;
-(void)enableUndoManagerForAK:(BOOL)arg0 ;
// -(void)fetchAnnotationsWithCompletion:(id)arg0 deliveredOnQueue:(unk)arg1  ;
// -(void)fetchPageLayoutWithCompletion:(id)arg0 deliveredOnQueue:(unk)arg1  ;
-(void)getAnnotations;
-(void)insertAnnotation:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)lazilyLoadAnnotations;
-(void)postAnnotationsChangedNotification;
-(void)postPageDidChangeBoundsNotification;
-(void)postPageDidRotateNotification;
-(void)printActivePageAnnotations;
-(void)purgeAll;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeAnnotation:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeAnnotation:(id)arg0 withUndo:(BOOL)arg1 ;
-(void)resetChangedAnnotations;
-(void)setAKDidSetupRealPageModelController:(BOOL)arg0 ;
-(void)setBookmarked:(BOOL)arg0 ;
-(void)setBookmarked:(BOOL)arg0 updateBookmarks:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 forBox:(NSInteger)arg1 ;
-(void)setColorWidgetBackgrounds:(BOOL)arg0 ;
-(void)setDisplaysMarkupAnnotations:(BOOL)arg0 ;
-(void)setView:(id)arg0 ;
-(void)setupAKPageAdaptorIfNecessary;
-(void)transformContext:(struct CGContext *)arg0 forBox:(NSInteger)arg1 ;


@end


#endif