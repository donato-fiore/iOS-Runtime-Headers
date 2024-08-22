// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMUTILITIES_H
#define ICDOCCAMUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICDocCamUtilities : NSObject



+(BOOL)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg0 window:(id)arg1 ;
+(id)buttonFromCopyingValuesFromButton:(id)arg0 ;
+(id)resizedImage:(id)arg0 newSize:(struct CGSize )arg1 interpolationQuality:(int)arg2 ;
+(id)resizedImage:(id)arg0 newSize:(struct CGSize )arg1 transform:(struct CGAffineTransform )arg2 drawTransposed:(BOOL)arg3 interpolationQuality:(int)arg4 ;
+(struct CGAffineTransform )transformForOrientation:(id)arg0 newSize:(struct CGSize )arg1 ;
+(struct CGSize )aspectFillSize:(struct CGSize )arg0 targetSize:(struct CGSize )arg1 ;
+(struct CGSize )aspectFitSize:(struct CGSize )arg0 targetSize:(struct CGSize )arg1 ;
+(void)prepareForRotationIfNecessaryWithShutterButton:(id)arg0 coodinator:(id)arg1 ;


@end


#endif