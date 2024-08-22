// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFSELECTION_H
#define UIPDFSELECTION_H


#import <Foundation/Foundation.h>

#import "UIPDFPage.h"

@interface UIPDFSelection : NSObject {
    UIPDFPage *_page;
    *CGPDFSelection _cgSelection;
    BOOL _dirty;
    *__CFString _string;
    NSInteger _cachedStartIndex;
    NSInteger _cachedEndIndex;
}


@property (nonatomic) ? stringRange; // ivar: stringRange


-(BOOL)getBounds:(struct CGRect *)arg0 transform:(struct CGAffineTransform *)arg1 index:(NSUInteger)arg2 ;
-(BOOL)isEmpty;
-(BOOL)isNonEmpty;
-(BOOL)isWord;
-(CGFloat)baseLineAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)endIndex;
-(NSUInteger)extendAtEnd:(NSUInteger)arg0 ;
-(NSUInteger)extendAtStart:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRectangles;
-(NSUInteger)startIndex;
-(id)archive;
-(id)attributedStringAtIndex:(NSUInteger)arg0 ;
-(id)containingTextLine;
-(id)description;
-(id)htmlAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPage:(id)arg0 cgSelection:(struct CGPDFSelection *)arg1 ;
-(id)initWithPage:(id)arg0 fromArchive:(id)arg1 ;
-(id)initWithPage:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(id)initWithSelection:(id)arg0 ;
-(id)page;
-(id)selectionExtendedToLineBoundaries;
-(id)string;
-(id)textAtIndex:(NSUInteger)arg0 ;
-(struct ? )extent;
-(struct ? )rectangleAtIndex:(NSUInteger)arg0 scale:(CGFloat)arg1 inset:(CGFloat)arg2 ;
-(struct CGAffineTransform )transform;
-(struct CGPDFSelection *)CGSelection;
-(struct CGRect )bounds;
-(void)copyToPasteboard;
-(void)dealloc;
-(void)extendToParagraph;


@end


#endif