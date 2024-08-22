// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXROTATIONTRANSFORMS_H
#define JFXROTATIONTRANSFORMS_H


#import <Foundation/Foundation.h>


@interface JFXRotationTransforms : NSObject



+(int)rotationFromCaptureDevicePosition:(NSInteger)arg0 captureVideoOrientation:(NSInteger)arg1 toInterfaceOrientation:(NSInteger)arg2 ;
+(int)rotationFromUIInterfaceOrientation:(NSInteger)arg0 toUIInterfaceOrientation:(NSInteger)arg1 ;
+(struct CGAffineTransform )transformFromCaptureDevicePosition:(NSInteger)arg0 captureVideoOrientation:(NSInteger)arg1 toInterfaceOrientation:(NSInteger)arg2 ;
+(struct CGAffineTransform )transformFromTopLeftCaptureDevicePivotPosition:(NSInteger)arg0 captureVideoOrientation:(NSInteger)arg1 toInterfaceOrientation:(NSInteger)arg2 size:(struct CGSize )arg3 ;


@end


#endif