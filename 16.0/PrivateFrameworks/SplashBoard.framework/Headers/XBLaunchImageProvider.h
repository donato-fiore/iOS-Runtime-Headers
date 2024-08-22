// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XBLAUNCHIMAGEPROVIDER_H
#define XBLAUNCHIMAGEPROVIDER_H

@protocol OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface XBLaunchImageProvider : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    id<BSInvalidatable> *_stateCaptureAssertion;
}




+(id)sharedInstance;
-(id)createLaunchImageGeneratorWithContext:(SEL)arg0 asyncImageData:(id)arg1 error:(BOOL)arg2 ;
-(id)init;
-(void)_addBadLaunchInterfaceToDenyList:(id)arg0 forError:(id)arg1 ;
-(void)_generateImageForSnapshot:(id)arg0 inManifest:(id)arg1 withContext:(id)arg2 asyncImageData:(BOOL)arg3 dataProvider:(id)arg4 scheduleAsyncGeneration:(BOOL)arg5 completion:(id)arg6 ;
-(void)_resetBadLaunchInterfaceCount:(id)arg0 ;
// -(void)captureLaunchImageForManifest:(id)arg0 withCompatibilityInfo:(id)arg1 launchRequests:(id)arg2 createCaptureInfo:(BOOL)arg3 firstImageIsReady:(id)arg4 withCompletionHandler:(unk)arg5  ;
-(void)dealloc;
-(void)preheatServiceWithTimeout:(CGFloat)arg0 ;


@end


#endif