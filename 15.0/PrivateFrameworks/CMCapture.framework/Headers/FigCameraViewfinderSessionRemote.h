// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAMERAVIEWFINDERSESSIONREMOTE_H
#define FIGCAMERAVIEWFINDERSESSIONREMOTE_H

@protocol FigCameraViewfinderSessionRemoteObject;


#import "FigCameraViewfinderSession.h"
#import "FigStateMachine.h"

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {
    id<FigCameraViewfinderSessionRemoteObject> *_remoteViewfinderSession;
    unsigned int _state;
    FigStateMachine *_stateMachine;
}




-(id)_initWithRemoteViewfinderSession:(id)arg0 delegateStorage:(id)arg1 ;
-(void)_clientDisconnectedFromServer;
-(void)_previewStreamDidCloseWithStatus:(int)arg0 ;
-(void)_previewStreamDidOpen;
-(void)_serverDied;
-(void)closePreviewStream;
-(void)dealloc;
-(void)openPreviewStreamWithOptions:(id)arg0 ;


@end


#endif