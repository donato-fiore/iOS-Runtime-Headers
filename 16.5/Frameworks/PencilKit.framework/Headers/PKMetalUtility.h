// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALUTILITY_H
#define PKMETALUTILITY_H


#import <Foundation/Foundation.h>


@interface PKMetalUtility : NSObject



+(BOOL)deviceSupportsFramebufferFetch:(id)arg0 ;
+(BOOL)deviceSupportsMemorylessFramebuffers:(id)arg0 ;
+(BOOL)isMetalAvailable;
+(CGFloat)layerContentsScale;
+(id)defaultDevice;
+(id)textureFromImage:(struct CGImage *)arg0 device:(id)arg1 ;
+(struct CGAffineTransform )transformConvertingRect:(struct CGRect )arg0 toRect:(struct CGRect )arg1 percent:(CGFloat)arg2 ;
+(struct CGSize )clampedPixelSize:(struct CGSize )arg0 ;


@end


#endif