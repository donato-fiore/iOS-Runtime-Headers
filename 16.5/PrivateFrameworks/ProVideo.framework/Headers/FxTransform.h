// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FXTRANSFORM_H
#define FXTRANSFORM_H


#import <Foundation/Foundation.h>


@interface FxTransform : NSObject {
    *FxTransformPriv _priv;
}




+(id)identity;
+(id)transformWithCGAffineTransform:(struct CGAffineTransform )arg0 ;
+(id)transformWithScale:(struct CGPoint )arg0 rotate:(float)arg1 translate:(struct CGPoint )arg2 shear:(struct CGPoint )arg3 ;
-(float)rotation;
-(id)initWithCGAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithScale:(struct CGPoint )arg0 rotate:(float)arg1 translate:(struct CGPoint )arg2 shear:(struct CGPoint )arg3 ;
-(struct CGAffineTransform )cgAffineTransform;
-(struct CGPoint )scale;
-(struct CGPoint )shear;
-(struct CGPoint )translation;
-(void)dealloc;
-(void)setCGAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)setRotation:(float)arg0 ;
-(void)setScale:(struct CGPoint )arg0 ;
-(void)setShear:(struct CGPoint )arg0 ;
-(void)setTranslation:(struct CGPoint )arg0 ;


@end


#endif