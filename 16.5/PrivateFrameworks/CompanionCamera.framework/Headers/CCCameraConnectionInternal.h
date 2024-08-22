// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCCAMERACONNECTIONINTERNAL_H
#define CCCAMERACONNECTIONINTERNAL_H

@protocol CCCameraConnectionProtocol;

#import <Foundation/Foundation.h>

#import "CCCameraConnection.h"

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol>



@property (weak, nonatomic) CCCameraConnection *parent; // ivar: _parent


-(void)takePhotoWithCountdown:(NSUInteger)arg0 ;
-(void)xpc_beginBurstCaptureWithReply:(id)arg0 ;
-(void)xpc_cancelCountdown;
-(void)xpc_endBurstCaptureWithReply:(id)arg0 ;
-(void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg0 reply:(id)arg1 ;
-(void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg0 reply:(id)arg1 ;
-(void)xpc_setCaptureDevice:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_setCaptureMode:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_setFlashMode:(NSInteger)arg0 ;
-(void)xpc_setFocusPoint:(id)arg0 ;
-(void)xpc_setHDRMode:(NSInteger)arg0 ;
-(void)xpc_setIrisMode:(NSInteger)arg0 ;
-(void)xpc_setPreviewEndpoint:(id)arg0 ;
-(void)xpc_setSharedLibraryMode:(NSInteger)arg0 ;
-(void)xpc_setZoom:(float)arg0 reply:(id)arg1 ;
-(void)xpc_startCaptureWithMode:(NSInteger)arg0 reply:(id)arg1 ;
-(void)xpc_stopCaptureWithReply:(id)arg0 ;
-(void)xpc_suspend;
-(void)xpc_toggleCameraDevice;


@end


#endif