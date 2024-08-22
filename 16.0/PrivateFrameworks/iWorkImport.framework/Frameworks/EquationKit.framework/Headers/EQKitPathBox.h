// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITPATHBOX_H
#define EQKITPATHBOX_H



#import "EQKitBox.h"

@interface EQKitPathBox : EQKitBox {
    CGFloat mDepth;
    CGFloat mWidth;
    BOOL mDimensionsValid;
    CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
}


@property (readonly, nonatomic) *CGPath cgPath; // ivar: mCGPath
@property (readonly, nonatomic) *CGColor color; // ivar: mCGColor
@property (readonly, nonatomic) CGFloat depth;
@property (readonly, nonatomic) int drawingMode; // ivar: mDrawingMode
@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: mLineWidth
@property (readonly, nonatomic) CGFloat paddingLeft; // ivar: mPaddingLeft
@property (readonly, nonatomic) CGFloat paddingRight; // ivar: mPaddingRight
@property (readonly, nonatomic) CGFloat width;


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCGPath:(struct CGPath *)arg0 height:(CGFloat)arg1 cgColor:(struct CGColor *)arg2 ;
-(id)initWithCGPath:(struct CGPath *)arg0 height:(CGFloat)arg1 cgColor:(struct CGColor *)arg2 drawingMode:(int)arg3 lineWidth:(CGFloat)arg4 ;
-(id)initWithCGPath:(struct CGPath *)arg0 height:(CGFloat)arg1 paddingLeft:(CGFloat)arg2 paddingRight:(CGFloat)arg3 cgColor:(struct CGColor *)arg4 ;
-(id)initWithCGPath:(struct CGPath *)arg0 height:(CGFloat)arg1 paddingLeft:(CGFloat)arg2 paddingRight:(CGFloat)arg3 cgColor:(struct CGColor *)arg4 drawingMode:(int)arg5 lineWidth:(CGFloat)arg6 ;
-(struct CGRect )erasableBounds;
-(struct CGRect )p_cacheErasableBounds;
-(void)dealloc;
-(void)p_cacheDimensions;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif