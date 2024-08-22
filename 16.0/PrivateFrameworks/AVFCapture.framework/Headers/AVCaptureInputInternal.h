// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREINPUTINTERNAL_H
#define AVCAPTUREINPUTINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCaptureSession.h"

@interface AVCaptureInputInternal : NSObject {
    AVCaptureSession *session;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    *OpaqueFigCaptureSession figCaptureSession;
}




-(id)init;
-(void)dealloc;


@end


#endif