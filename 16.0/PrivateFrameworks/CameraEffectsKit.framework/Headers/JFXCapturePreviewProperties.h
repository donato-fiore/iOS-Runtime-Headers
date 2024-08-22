// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCAPTUREPREVIEWPROPERTIES_H
#define JFXCAPTUREPREVIEWPROPERTIES_H

@class PVFrameSet, NSDictionary, PVTaskToken;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "JFXCapturePreviewFrameStats.h"
#import "JFXPerfTimer.h"

@interface JFXCapturePreviewProperties : NSObject

@property (readonly, nonatomic) PVFrameSet *cameraFrameSet; // ivar: _cameraFrameSet
@property (readonly, nonatomic) CGFloat displayTimestamp; // ivar: _displayTimestamp
@property (readonly, nonatomic) CGSize frameSize; // ivar: _frameSize
@property (readonly, nonatomic) JFXCapturePreviewFrameStats *frameStats; // ivar: _frameStats
@property (readonly, nonatomic) NSInteger renderCameraMode; // ivar: _renderCameraMode
@property (readonly, nonatomic) CGSize renderOutputSize; // ivar: _renderOutputSize
@property (readonly, nonatomic) BOOL renderRequiresCrop;
@property (readonly, nonatomic) ? renderTime; // ivar: _renderTime
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *selfieBGBufferLoadSem; // ivar: _selfieBGBufferLoadSem
@property (retain, nonatomic) NSDictionary *selfieBGBuffers; // ivar: _selfieBGBuffers
@property (readonly, nonatomic) PVTaskToken *signPostToken; // ivar: _signPostToken
@property (readonly, nonatomic) JFXPerfTimer *startFrameTimer; // ivar: _startFrameTimer


-(id)initWithCameraFrameSet:(id)arg0 renderCameraMode:(NSInteger)arg1 renderTime:(struct ? )arg2 renderOutputSize:(struct CGSize )arg3 frameSize:(struct CGSize )arg4 ;
-(id)initWithCameraFrameSet:(id)arg0 renderCameraMode:(NSInteger)arg1 renderTime:(struct ? )arg2 renderOutputSize:(struct CGSize )arg3 frameSize:(struct CGSize )arg4 signPostToken:(id)arg5 displayTimestamp:(CGFloat)arg6 frameStats:(id)arg7 startFrameTimer:(id)arg8 ;


@end


#endif