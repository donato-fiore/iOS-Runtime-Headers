// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPGRADIENTBRUSH_H
#define MFPGRADIENTBRUSH_H

@class NSArray;


#import "MFPBrush.h"

@interface MFPGradientBrush : MFPBrush {
    CGAffineTransform mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    *CGShading mShading;
    *CGFunction mShadingFunction;
}




-(id)color;
-(id)colorAtPosition:(float)arg0 ;
-(id)endColor;
-(id)init;
-(id)startColor;
-(void)createPhoneBrush;
-(void)createShading;
-(void)createShadingFunction;
-(void)createStopsFromBlend;
-(void)createStopsFromColorBlend;
-(void)createStopsFromStartAndEndColors;
-(void)dealloc;
-(void)fillPath:(id)arg0 ;
-(void)setBlend:(id)arg0 ;
-(void)setColorBlend:(id)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)setWrapMode:(int)arg0 ;


@end


#endif