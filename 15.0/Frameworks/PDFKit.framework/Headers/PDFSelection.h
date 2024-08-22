// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFSELECTION_H
#define PDFSELECTION_H

@class NSAttributedString, UIColor, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFSelectionPrivate.h"

@interface PDFSelection : NSObject <NSCopying>

 {
    PDFSelectionPrivate *_private;
}


@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSArray *pages;
@property (readonly, nonatomic) NSString *string;


+(id)defaultActiveColor;
+(id)defaultInactiveColor;
-(BOOL)containsPoint:(struct CGPoint )arg0 onPage:(id)arg1 ;
-(BOOL)forceBreaks;
-(BOOL)isEmpty;
-(BOOL)isStandaloneGraphic;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)indexOfFirstCharacterOnPage:(id)arg0 ;
-(NSUInteger)indexOfLastCharacterOnPage:(id)arg0 ;
-(NSUInteger)numberOfTextRangesOnPage:(id)arg0 ;
-(NSUInteger)pdfKitIndexOfFirstCharacterOnPage:(id)arg0 ;
-(NSUInteger)pdfKitIndexOfLastCharacterOnPage:(id)arg0 ;
-(id)asDestination;
-(id)attributedStringScaled:(CGFloat)arg0 ;
-(id)boundsArrayForPage:(id)arg0 ;
-(id)cgSelectionPages;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAttributedStringForCGSelection:(struct CGPDFSelection *)arg0 scaled:(CGFloat)arg1 ;
-(id)description;
-(id)document;
-(id)firstPage;
-(id)html;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithPage:(id)arg0 ;
-(id)lastPage;
-(id)pdfSelectionUUID;
-(id)rtfdData;
-(id)selectionsByLine;
-(id)webArchive;
-(struct CGPDFSelection *)cgSelectionForPage:(id)arg0 ;
-(struct CGPoint )firstCharCenter;
-(struct CGPoint )leftMostCharCenter;
-(struct CGPoint )rightMostCharCenter;
-(struct CGRect )boundsForPage:(id)arg0 ;
-(struct CGRect )firstSpanBoundsForPage:(id)arg0 ;
-(struct CGRect )lastSpanBoundsForPage:(id)arg0 ;
-(struct CGRect )spanBoundsForPage:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(struct _NSRange )previewRangeAtIndex:(NSUInteger)arg0 onPage:(id)arg1 ;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 onPage:(id)arg1 ;
-(struct __CFArray *)cgSelections;
-(void)addCGSelection:(struct CGPDFSelection *)arg0 forPage:(id)arg1 ;
-(void)addSelection:(id)arg0 ;
-(void)addSelectionCore:(id)arg0 normalize:(BOOL)arg1 ;
-(void)addSelectionNoNormalize:(id)arg0 ;
-(void)addSelectionRange:(struct _NSRange )arg0 page:(id)arg1 normalize:(BOOL)arg2 ;
-(void)addSelections:(id)arg0 ;
-(void)dealloc;
-(void)drawForPage:(id)arg0 active:(BOOL)arg1 ;
-(void)drawForPage:(id)arg0 withBox:(NSInteger)arg1 active:(BOOL)arg2 ;
-(void)drawForPage:(id)arg0 withBox:(int)arg1 active:(BOOL)arg2 inContext:(struct CGContext *)arg3 ;
-(void)extendSelectionAtEnd:(NSInteger)arg0 ;
-(void)extendSelectionAtStart:(NSInteger)arg0 ;
-(void)extendSelectionForLineBoundaries;
-(void)normalize;
-(void)setForceBreaks:(BOOL)arg0 ;


@end


#endif