// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAMERAVIEWFINDER_H
#define FIGCAMERAVIEWFINDER_H

@protocol FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FigDelegateStorage.h"
#import "FigCameraViewfinderSession.h"

@interface FigCameraViewfinder : NSObject {
    FigDelegateStorage *_delegateStorage;
}


@property (readonly) NSObject<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> *delegate;
@property (retain, nonatomic) FigCameraViewfinderSession *delegateActiveViewfinderSession; // ivar: _delegateActiveViewfinderSession
@property (readonly) NSObject<OS_dispatch_queue> *queue;


+(id)cameraViewfinder;
-(id)init;
-(void)dealloc;
-(void)startWithOptions:(id)arg0 ;
-(void)stop;


@end


#endif