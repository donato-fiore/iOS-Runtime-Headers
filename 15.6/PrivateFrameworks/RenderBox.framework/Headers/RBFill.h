// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBFILL_H
#define RBFILL_H


#import <Foundation/Foundation.h>


@interface RBFill : NSObject {
    RBFillData _data;
    InlineHeap<64UL> _heap;
}




-(void)concat:(struct CGAffineTransform )arg0 ;
-(void)invalidateContents;
-(void)set9PartImage:(struct CGImage *)arg0 transform:(struct CGAffineTransform )arg1 destinationRect:(struct CGRect )arg2 capInsets:(struct ? )arg3 repeat:(BOOL)arg4 interpolation:(int)arg5 tintColor:(struct ? )arg6 flags:(unsigned int)arg7 ;
-(void)set9PartRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 destinationRect:(struct CGRect )arg2 capInsets:(struct ? )arg3 repeat:(BOOL)arg4 interpolation:(int)arg5 tintColor:(struct ? )arg6 colorSpace:(int)arg7 flags:(unsigned int)arg8 ;
-(void)set9PartRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 destinationRect:(struct CGRect )arg2 capInsets:(struct ? )arg3 repeat:(BOOL)arg4 interpolation:(int)arg5 tintColor:(struct ? )arg6 flags:(unsigned int)arg7 ;
-(void)setAxialGradientStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 stopCount:(NSInteger)arg2 colors:(struct ? *)arg3 colorSpace:(int)arg4 locations:(*CGFloat)arg5 flags:(unsigned int)arg6 ;
-(void)setAxialGradientStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 stopCount:(NSInteger)arg2 colors:(struct ? *)arg3 locations:(*CGFloat)arg4 flags:(unsigned int)arg5 ;
-(void)setColor:(struct ? )arg0 ;
-(void)setColor:(struct ? )arg0 colorSpace:(int)arg1 ;
-(void)setConicGradientCenter:(struct CGPoint )arg0 angle:(CGFloat)arg1 stopCount:(NSInteger)arg2 colors:(struct ? *)arg3 colorSpace:(int)arg4 locations:(*CGFloat)arg5 flags:(unsigned int)arg6 ;
-(void)setConicGradientCenter:(struct CGPoint )arg0 angle:(CGFloat)arg1 stopCount:(NSInteger)arg2 colors:(struct ? *)arg3 locations:(*CGFloat)arg4 flags:(unsigned int)arg5 ;
-(void)setImage:(struct CGImage *)arg0 transform:(struct CGAffineTransform )arg1 interpolation:(int)arg2 tintColor:(struct ? )arg3 flags:(unsigned int)arg4 ;
-(void)setRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 interpolation:(int)arg2 tintColor:(struct ? )arg3 colorSpace:(int)arg4 flags:(unsigned int)arg5 ;
-(void)setRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 interpolation:(int)arg2 tintColor:(struct ? )arg3 flags:(unsigned int)arg4 ;
-(void)setRadialGradientCenter:(struct CGPoint )arg0 startRadius:(CGFloat)arg1 endRadius:(CGFloat)arg2 stopCount:(NSInteger)arg3 colors:(struct ? *)arg4 colorSpace:(int)arg5 locations:(*CGFloat)arg6 flags:(unsigned int)arg7 ;
-(void)setRadialGradientCenter:(struct CGPoint )arg0 startRadius:(CGFloat)arg1 endRadius:(CGFloat)arg2 stopCount:(NSInteger)arg3 colors:(struct ? *)arg4 locations:(*CGFloat)arg5 flags:(unsigned int)arg6 ;
-(void)setRadialGradientStartCenter:(struct CGPoint )arg0 startRadius:(CGFloat)arg1 endCenter:(struct CGPoint )arg2 endRadius:(CGFloat)arg3 stopCount:(NSInteger)arg4 colors:(struct ? *)arg5 colorSpace:(int)arg6 locations:(*CGFloat)arg7 flags:(unsigned int)arg8 ;
-(void)setRadialGradientStartCenter:(struct CGPoint )arg0 startRadius:(CGFloat)arg1 endCenter:(struct CGPoint )arg2 endRadius:(CGFloat)arg3 stopCount:(NSInteger)arg4 colors:(struct ? *)arg5 locations:(*CGFloat)arg6 flags:(unsigned int)arg7 ;
-(void)setTiledImage:(struct CGImage *)arg0 transform:(struct CGAffineTransform )arg1 sourceRect:(struct CGRect )arg2 interpolation:(int)arg3 tintColor:(struct ? )arg4 flags:(unsigned int)arg5 ;
-(void)setTiledRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 sourceRect:(struct CGRect )arg2 interpolation:(int)arg3 tintColor:(struct ? )arg4 colorSpace:(int)arg5 flags:(unsigned int)arg6 ;
-(void)setTiledRBImage:(struct ? )arg0 transform:(struct CGAffineTransform )arg1 sourceRect:(struct CGRect )arg2 interpolation:(int)arg3 tintColor:(struct ? )arg4 flags:(unsigned int)arg5 ;


@end


#endif