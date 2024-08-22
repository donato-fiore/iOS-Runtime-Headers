// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPPAGE_H
#define CPPAGE_H

@class NSMutableArray;
@protocol CPDisposable;


#import "CPChunk.h"

@interface CPPage : CPChunk <CPDisposable>

 {
    int pageNumber;
    CGRect pageCropBox;
    BOOL hasZones;
    BOOL hasTextLines;
    BOOL isDirty;
    BOOL isStartOfSection;
    NSInteger maxLayoutZOrder;
    CPChunk *background;
    float complexity;
    int rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *imagesOnPage;
    NSMutableArray *graphicsOnPage;
    NSMutableArray *columnsOnPage;
    NSMutableArray *annotationsOnPage;
    ? pdfContext;
    BOOL contextOwner;
    *CGPDFPage pdfPage;
    NSMutableArray *textLinesOnPage;
    *void _layout;
    id *hitTest;
    BOOL reconstructed;
    _opaque_pthread_mutex_t mutex;
}




+(void)sortByReadingOrder:(id)arg0 ;
-(?)PDFContext;
-(BOOL)hasTextLines;
-(BOOL)hasZones;
-(BOOL)isStartOfSection;
-(BOOL)populatePDFLayout:(struct CGPDFLayout *)arg0 ;
-(float)complexity;
-(id)annotationsOnPage;
-(id)background;
-(id)bodyZone;
-(id)children;
-(id)columnsOnPage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)graphicsOnPage;
-(id)hitTest;
-(id)imagesOnPage;
-(id)init;
-(id)initWithPDFPage:(struct CGPDFPage *)arg0 ;
-(id)parent;
-(id)shapesOnPage;
-(id)textLinesOnPage;
-(int)pageNumber;
-(int)rotation;
-(struct CGPDFLayout *)layout;
-(struct CGPDFPage *)pdfPage;
-(struct CGRect )pageCropBox;
-(struct CPPDFClipBuffer *)clipBuffer;
-(unsigned int)setCellPositionsOf:(id)arg0 from:(unsigned int)arg1 ;
-(unsigned int)setGraphicPositions:(id)arg0 from:(unsigned int)arg1 ;
-(unsigned int)setPositionsOf:(id)arg0 from:(unsigned int)arg1 ;
-(unsigned int)setReadingOrder:(id)arg0 from:(unsigned int)arg1 ;
-(unsigned int)traverse:(id)arg0 ordinal:(unsigned int)arg1 ;
-(void)accept:(id)arg0 ;
-(void)addAnnotation:(id)arg0 ;
-(void)addColumns:(id)arg0 ;
-(void)addImage:(id)arg0 ;
-(void)addShape:(id)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)layDownObjectsOnPage;
-(void)layDownObjectsOnPageOld;
-(void)reconstruct;
-(void)restoreBackGroundObjectToPage;
-(void)setBackground:(id)arg0 ;
-(void)setComplexity:(float)arg0 ;
-(void)setHasTextLines:(BOOL)arg0 ;
-(void)setHasZones:(BOOL)arg0 ;
-(void)setIsStartOfSection:(BOOL)arg0 ;
-(void)setPDFContext:(struct CPPDFContext *)arg0 ;
-(void)setPageCropBox:(struct CGRect )arg0 ;
-(void)setPageNumber:(int)arg0 ;
-(void)setRotation:(int)arg0 ;
-(void)sortByReadingOrder;


@end


#endif