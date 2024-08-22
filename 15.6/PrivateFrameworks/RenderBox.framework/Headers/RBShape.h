// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSHAPE_H
#define RBSHAPE_H


#import <Foundation/Foundation.h>


@interface RBShape : NSObject {
    RBShapeData _data;
    InlineHeap<256UL> _heap;
}


@property (nonatomic) BOOL EOFill; // ivar: _eoFill
@property (nonatomic, getter=isAntialiased) BOOL antialiased; // ivar: _antialiased
@property (readonly, nonatomic) CGRect boundingRect;


-(id)init;
-(void)setCircleAtPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 ;
-(void)setEllipseInRect:(struct CGRect )arg0 ;
-(void)setEmpty;
-(void)setGlyphs:(*unsigned short)arg0 positions:(struct CGPoint *)arg1 count:(NSUInteger)arg2 font:(struct CGFont *)arg3 renderingStyle:(unsigned int)arg4 ;
-(void)setInfinite;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)setPath:(struct CGPath *)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)setRect:(struct CGRect )arg0 ;
-(void)setRoundedRect:(struct CGRect )arg0 cornerRadii:(struct ? )arg1 cornerStyle:(int)arg2 ;
-(void)setRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 cornerStyle:(int)arg2 ;
-(void)setRoundedRect:(struct CGRect )arg0 cornerSize:(struct CGSize )arg1 cornerStyle:(int)arg2 ;
-(void)setStroke:(id)arg0 ;
-(void)setStrokedCircleAtPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 lineWidth:(CGFloat)arg2 ;
-(void)setStrokedPath:(struct CGPath *)arg0 transform:(struct CGAffineTransform )arg1 lineWidth:(CGFloat)arg2 lineCap:(int)arg3 lineJoin:(int)arg4 miterLimit:(CGFloat)arg5 ;
-(void)setStrokedPath:(struct CGPath *)arg0 transform:(struct CGAffineTransform )arg1 lineWidth:(CGFloat)arg2 lineCap:(int)arg3 lineJoin:(int)arg4 miterLimit:(CGFloat)arg5 dashPhase:(CGFloat)arg6 dashPattern:(*CGFloat)arg7 dashCount:(NSInteger)arg8 ;
-(void)setStrokedRect:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(void)setStrokedRoundedRect:(struct CGRect )arg0 cornerRadii:(struct ? )arg1 cornerStyle:(int)arg2 lineWidth:(CGFloat)arg3 ;
-(void)setStrokedRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 cornerStyle:(int)arg2 lineWidth:(CGFloat)arg3 ;


@end


#endif