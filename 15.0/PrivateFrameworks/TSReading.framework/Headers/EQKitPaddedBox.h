// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITPADDEDBOX_H
#define EQKITPADDEDBOX_H



#import "EQKitBox.h"

@interface EQKitPaddedBox : EQKitBox {
    CGFloat mHeight;
    CGFloat mDepth;
    CGFloat mWidth;
}


@property (readonly, nonatomic) EQKitBox *box; // ivar: mBox
@property (readonly, nonatomic) CGFloat depth;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat lspace; // ivar: mLspace
@property (readonly, nonatomic) CGFloat voffset; // ivar: mVoffset
@property (readonly, nonatomic) CGFloat width;


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_getTransform:(struct CGAffineTransform *)arg0 fromDescendant:(id)arg1 ;
-(CGFloat)opticalAlignWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBox:(id)arg0 height:(CGFloat)arg1 width:(CGFloat)arg2 depth:(CGFloat)arg3 lspace:(CGFloat)arg4 voffset:(CGFloat)arg5 ;
-(struct CGRect )erasableBounds;
-(void)dealloc;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif