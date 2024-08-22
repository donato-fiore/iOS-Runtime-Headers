// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEORELAY_H
#define VCVIDEORELAY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCVideoRelay : NSObject {
    NSMutableArray *_videoCaptureSinks;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)sharedInstance;
-(BOOL)deregisterForVideoFrames:(id)arg0 ;
-(BOOL)enqueueFrame:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 cameraStatusBits:(unsigned char)arg2 ;
-(BOOL)registerForVideoFrames:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif