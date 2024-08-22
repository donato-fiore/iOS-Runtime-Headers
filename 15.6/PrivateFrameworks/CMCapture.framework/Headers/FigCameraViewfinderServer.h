// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAMERAVIEWFINDERSERVER_H
#define FIGCAMERAVIEWFINDERSERVER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCameraViewfinderServer : NSObject <NSXPCListenerDelegate, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>

 {
    NSXPCListener *_serviceListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)start;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidBegin:(id)arg1 ;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidEnd:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg0 didCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(struct ? )arg3 ;
-(void)cameraViewfinderSession:(id)arg0 previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg0 ;
-(void)dealloc;


@end


#endif