// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVEFFECTPREVIEWGENERATOR_H
#define PVEFFECTPREVIEWGENERATOR_H



#import "PVRendererBase.h"

@interface PVEffectPreviewGenerator : PVRendererBase



+(id)sharedGenerator;
+(void)cleanupCaches;
-(id)initWithOptions:(id)arg0 ;
-(void)cancelAllPendingPreviewRequests;
-(void)generatePreviewForEffect:(id)arg0 atTime:(struct ? )arg1 inputImage:(struct CGImage *)arg2 outputSize:(struct CGSize )arg3 waitForFinish:(BOOL)arg4 completionHandler:(id)arg5 ;


@end


#endif