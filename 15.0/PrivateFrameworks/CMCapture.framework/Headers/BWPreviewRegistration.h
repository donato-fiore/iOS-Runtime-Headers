// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPREVIEWREGISTRATION_H
#define BWPREVIEWREGISTRATION_H

@protocol OS_dispatch_queue, BWPreviewRegistrationProvider;

#import <Foundation/Foundation.h>


@interface BWPreviewRegistration : NSObject {
    NSObject<OS_dispatch_queue> *_registrationQueue;
    id<BWPreviewRegistrationProvider> *_registrationProvider;
}


@property (readonly) int previewRegistrationType; // ivar: _previewRegistrationType


+(void)initialize;
-(id)initWithCameraInfoByPortType:(id)arg0 sensorBinningFactor:(struct ? )arg1 registrationType:(int)arg2 ;
-(struct CGPoint )computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer *)arg0 narrowerCamera:(struct opaqueCMSampleBuffer *)arg1 widerToNarrowerCameraScale:(CGFloat)arg2 ;
-(void)allocateResourcesAsynchronouslyWithVideoFormat:(id)arg0 ;
-(void)cleanupResources;
-(void)dealloc;
-(void)registerWiderCamera:(struct opaqueCMSampleBuffer *)arg0 narrowerCamera:(struct opaqueCMSampleBuffer *)arg1 widerToNarrowerCameraScale:(CGFloat)arg2 isMacroScene:(BOOL)arg3 macroTransitionType:(int)arg4 completionHandler:(id)arg5 ;
-(void)waitForRegistrationToComplete;


@end


#endif