// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCSCALER_H
#define FRCSCALER_H


#import <Foundation/Foundation.h>


@interface FRCScaler : NSObject {
    *__IOSurfaceAccelerator _scaler;
}




-(id)init;
-(void)dealloc;
-(void)downScaleFrameSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 rotate:(NSInteger)arg2 waitForCompletion:(BOOL)arg3 ;
-(void)scaleFrameSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 cropRectangles:(struct ? *)arg2 upscale:(BOOL)arg3 rotate:(NSInteger)arg4 waitForCompletion:(BOOL)arg5 ;
-(void)upScaleAndCropFrameSource:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 upscale:(BOOL)arg2 rotate:(NSInteger)arg3 waitForCompletion:(BOOL)arg4 ;


@end


#endif