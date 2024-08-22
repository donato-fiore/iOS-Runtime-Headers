// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCFXLIGHTWRAPOPTIONS_H
#define PCFXLIGHTWRAPOPTIONS_H

@protocol NSCopying;


#import "PCFxBlendOptions.h"

@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying>

 {
    float _amount;
    float _intensity;
    float _intensityScale;
    float _lrOpacity;
    int _lrMode;
}




-(float)getAmount;
-(float)getIntensity;
-(float)getIntensityScale;
-(float)getOpacity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLRBlendOptions:(id)arg0 ;
-(int)getLRBlendMode;
-(void)setAmount:(float)arg0 ;
-(void)setIntensity:(float)arg0 ;
-(void)setIntensityScale:(float)arg0 ;
-(void)setLRBlendMode:(int)arg0 ;
-(void)setOpacity:(float)arg0 ;


@end


#endif