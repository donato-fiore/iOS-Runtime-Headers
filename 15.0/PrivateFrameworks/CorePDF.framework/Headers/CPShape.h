// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSHAPE_H
#define CPSHAPE_H

@protocol CPDisposable;


#import "CPGraphicObject.h"

@interface CPShape : CPGraphicObject <CPDisposable>

 {
    NSInteger mcid;
    unsigned int pdfObjectID;
    *CGPath path;
    BOOL isUprightRectangle;
    int windingRule;
    CGFloat lineWidth;
    CGFloat miterLimit;
    int lineCap;
    int lineJoin;
    *CGColor fillColor;
    *CGColor strokeColor;
    *CGPDFObject fillObject;
    *CGPDFObject strokeObject;
    CGAffineTransform paintTransform;
    BOOL boundsComputed;
    BOOL renderedBoundsComputed;
}




-(BOOL)canCombineWith:(id)arg0 ;
-(BOOL)hasFill;
-(BOOL)hasSamePathAs:(id)arg0 ;
-(BOOL)hasStroke;
-(BOOL)isStrokeFor:(id)arg0 ;
-(BOOL)isUprightRectangle;
-(BOOL)isVisible;
-(CGFloat)lineWidth;
-(CGFloat)miterLimit;
-(NSInteger)mcid;
-(NSInteger)zOrder;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPDFShape:(struct CPPDFShape *)arg0 ;
-(id)string;
-(int)lineCap;
-(int)lineJoin;
-(int)windingRule;
-(struct CGAffineTransform )paintTransform;
-(struct CGColor *)fillColor;
-(struct CGColor *)strokeColor;
-(struct CGPDFObject *)fillObject;
-(struct CGPDFObject *)strokeObject;
-(struct CGPath *)path;
-(struct CGRect )bounds;
-(struct CGRect )innerBounds;
-(struct CGRect )renderedBounds;
-(unsigned int)pathElementCount;
-(unsigned int)pdfObjectID;
-(void)accept:(id)arg0 ;
-(void)addShape:(id)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)makeLineFromVertex:(struct CGPoint )arg0 toVertex:(struct CGPoint )arg1 ;
-(void)recomputeBounds;
-(void)recomputeRenderedBounds;
-(void)setFillColor:(struct CGColor *)arg0 ;
-(void)setFillObject:(struct CGPDFObject *)arg0 ;
-(void)setLineCap:(int)arg0 ;
-(void)setLineJoin:(int)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setPaintTransform:(struct CGAffineTransform )arg0 ;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)setPdfObjectID:(unsigned int)arg0 ;
-(void)setStrokeColor:(struct CGColor *)arg0 ;
-(void)setStrokeObject:(struct CGPDFObject *)arg0 ;
-(void)setWindingRule:(int)arg0 ;


@end


#endif