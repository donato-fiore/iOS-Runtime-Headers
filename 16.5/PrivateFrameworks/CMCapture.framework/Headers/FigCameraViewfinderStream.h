// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAMERAVIEWFINDERSTREAM_H
#define FIGCAMERAVIEWFINDERSTREAM_H


#import <Foundation/Foundation.h>

#import "FigDelegateStorage.h"
#import "FigStateMachine.h"

@interface FigCameraViewfinderStream : NSObject {
    FigDelegateStorage *_delegateStorage;
    FigStateMachine *_stateMachine;
    *OpaqueFigEndpoint _endpoint;
    *OpaqueFigEndpointStream _stream;
    *OpaqueFigVirtualDisplaySource _displaySource;
    id *_endpointsChangedNotificationToken;
    id *_streamsChangedNotificationToken;
}




+(void)initialize;
-(id)init;
-(int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)close;
-(void)dealloc;
-(void)openWithDestination:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif