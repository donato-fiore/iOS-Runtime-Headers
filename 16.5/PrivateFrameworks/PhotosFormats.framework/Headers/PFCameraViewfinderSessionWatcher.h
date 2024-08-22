// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCAMERAVIEWFINDERSESSIONWATCHER_H
#define PFCAMERAVIEWFINDERSESSIONWATCHER_H

@class FigCameraViewfinder, NSString;
@protocol FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate, OS_dispatch_queue, PFCameraViewfinderSessionWatcherDelegate;

#import <Foundation/Foundation.h>


@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>

 {
    FigCameraViewfinder *_viewFinder;
    NSUInteger _counter;
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _isCameraRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<PFCameraViewfinderSessionWatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isCameraRunning;
@property (readonly) Class superclass;


-(id)initWithDispatchQueue:(id)arg0 delegate:(id)arg1 ;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidBegin:(id)arg1 ;
-(void)cameraViewfinder:(id)arg0 viewfinderSessionDidEnd:(id)arg1 ;
-(void)cameraViewfinderSessionWillBegin:(id)arg0 ;
-(void)dealloc;
-(void)startWatching;
-(void)stopWatching;


@end


#endif