// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCAMERAVIEWFINDERSESSIONWATCHER_H
#define PFCAMERAVIEWFINDERSESSIONWATCHER_H

@class FigCameraViewfinder, NSString;
@protocol FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate, PFCameraViewfinderSessionWatcherDelegate;

#import <Foundation/Foundation.h>


@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>

 {
    FigCameraViewfinder *_viewFinder;
    BOOL _isCameraRunning;
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
-(void)dealloc;
-(void)stopWatching;


@end


#endif