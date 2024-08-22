// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWADAPTIVECORRECTIONPREVIEWREGISTRATIONPROVIDER_H
#define BWADAPTIVECORRECTIONPREVIEWREGISTRATIONPROVIDER_H

@class NSString;
@protocol BWPreviewRegistrationProvider;

#import <Foundation/Foundation.h>

#import "BWAdaptiveCorrectionPreviewRegistration.h"

@interface BWAdaptiveCorrectionPreviewRegistrationProvider : NSObject <BWPreviewRegistrationProvider>

 {
    BWAdaptiveCorrectionPreviewRegistration *_registration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithCameraInfoByPortType:(id)arg0 ;
-(struct ? )registerWiderCamera:(struct opaqueCMSampleBuffer *)arg0 narrowerCamera:(struct opaqueCMSampleBuffer *)arg1 widerToNarrowerCameraScale:(CGFloat)arg2 isMacroScene:(BOOL)arg3 macroTransitionType:(int)arg4 ;
-(struct CGPoint )computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer *)arg0 narrowerCamera:(struct opaqueCMSampleBuffer *)arg1 widerToNarrowerCameraScale:(CGFloat)arg2 ;
-(void)allocateResourcesWithVideoFormat:(id)arg0 metalContext:(id)arg1 ;
-(void)cleanupResources;
-(void)dealloc;


@end


#endif