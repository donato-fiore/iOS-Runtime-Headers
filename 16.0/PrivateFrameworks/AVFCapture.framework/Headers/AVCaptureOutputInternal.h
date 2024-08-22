// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREOUTPUTINTERNAL_H
#define AVCAPTUREOUTPUTINTERNAL_H

@class NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVCaptureSession.h"

@interface AVCaptureOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    *OpaqueFigCaptureSession figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    CGAffineTransform metadataTransform;
    CGFloat rollAdjustment;
    BOOL physicallyMirrorsVideo;
}




-(id)init;
-(void)dealloc;


@end


#endif