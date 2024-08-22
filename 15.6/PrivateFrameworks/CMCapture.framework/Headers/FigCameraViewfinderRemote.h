// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAMERAVIEWFINDERREMOTE_H
#define FIGCAMERAVIEWFINDERREMOTE_H

@class NSMapTable, NSString;
@protocol FigCameraViewfinderRemoteObjectCallbacks, OS_dispatch_queue, FigCameraViewfinderRemoteObject;


#import "FigCameraViewfinder.h"
#import "FigStateMachine.h"
#import "FigNSXPCConnection.h"

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks>

 {
    NSMapTable *_weakSessionTable;
    FigStateMachine *_stateMachine;
    FigNSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionManagementQueue;
    id<FigCameraViewfinderRemoteObject> *_remoteViewfinder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cameraViewfinder;
+(id)remoteObjectCallbacksInterface;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)startWithOptions:(id)arg0 ;
-(void)stop;
-(void)viewfinderSession:(NSInteger)arg0 didCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(struct ? )arg3 ;
-(void)viewfinderSession:(NSInteger)arg0 previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)viewfinderSessionDidBegin:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSessionPreviewStreamDidOpen:(NSInteger)arg0 ;


@end


#endif