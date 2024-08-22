// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADORIENTEDBOUNDS_H
#define OADORIENTEDBOUNDS_H


#import <Foundation/Foundation.h>


@interface OADOrientedBounds : NSObject {
    CGRect mBounds;
    float mRotation;
    BOOL mFlipX;
    BOOL mFlipY;
    int mModeX;
    int mModeY;
}




+(BOOL)directionCloserToVerticalThanToHorizontal:(float)arg0 ;
+(id)orientedBoundsWithBounds:(struct CGRect )arg0 ;
+(id)orientedBoundsWithBounds:(struct CGRect )arg0 rotation:(float)arg1 flipX:(BOOL)arg2 flipY:(BOOL)arg3 ;
-(BOOL)flipX;
-(BOOL)flipY;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOrientedBounds:(id)arg0 ;
-(NSUInteger)hash;
-(float)rotation;
-(id)description;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 rotation:(float)arg1 flipX:(BOOL)arg2 flipY:(BOOL)arg3 ;
-(int)xMode;
-(int)yMode;
-(struct CGRect )boundingBox;
-(struct CGRect )bounds;
-(struct CGSize )boundingBoxSize;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFlipX:(BOOL)arg0 ;
-(void)setFlipY:(BOOL)arg0 ;
-(void)setOrientedBounds:(id)arg0 ;
-(void)setRotation:(float)arg0 ;
-(void)setXMode:(int)arg0 ;
-(void)setYMode:(int)arg0 ;


@end


#endif